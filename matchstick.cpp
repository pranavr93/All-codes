#include <stdio.h>
#include <math.h>
#include <limits.h>
int flag=0;
// A utility function to get minimum of two numbers
long minVal(long x, long y)
{
     if(flag==0){return (x < y)? x: y;}
     else{return (x > y)? x: y;}
}

// A utility function to get the middle index from corner indexes.
long getMid(long s, long e) {  return s + (e -s)/2;  }
long RMQUtil(long *st, long ss, long se, long qs, long qe, long index)
{
    if (qs <= ss && qe >= se)
        return st[index];
    if (se < qs || ss > qe)
        {
        if(flag==0){return INT_MAX;}
        else{return INT_MIN;}
        }
    int mid = getMid(ss, se);
    return minVal(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}

long RMQ(long *st,long n, long qs, long qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }

    return RMQUtil(st, 0, n-1, qs, qe, 0);
}

// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
long constructSTUtil(long arr[], long ss, long se, long *st, long si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] =  minVal(constructSTUtil(arr, ss, mid, st, si*2+1),
                     constructSTUtil(arr, mid+1, se, st, si*2+2));
    return st[si];
}

long *constructST(long arr[], long n)
{
    // Allocate memory for segment tree
    long x = (long)(ceil(log(n)/log(2))); //Height of segment tree
    long max_size = 2*(int)pow(2, x) - 1; //Maximum size of segment tree
    long *st = new long[max_size];

    constructSTUtil(arr, 0, n-1, st, 0);

    return st;
}

// Driver program to test above functions


 #include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
     long n,b[100005]={0},i,left,right,q,min;
     double c[100005],max,maxrange,maxrange2;
     //--------
       //--------
     long m1[100005],m2[100005];

     cin>>n;
     for(i=0;i<n;i++){cin>>b[i];}
     m1[0]=b[0];
     m2[n-1]=b[n-1];
     for(i=1;i<n;i++)
     {
          m1[i]=((m1[i-1]>b[i])?m1[i-1]:b[i]);
     }
     for(i=n-2;i>=0;i--)
     {
          m2[i]=((m2[i+1]>b[i])?m2[i+1]:b[i]);
     }

     //------

     long *st = constructST(b, n);
     flag=1;
     long *st2= constructST(b, n);

     long  qs;  // Starting index of query range
     long qe;  // Ending index of query range

     //-----

     cin>>q;
     while(q--)
     {
          cin>>qs>>qe;
flag=0;
     min=RMQ(st, n, qs, qe);
flag=1;
//cout<<min<<endl;
     maxrange=(m1[qs-1]>m2[qe+1])?m1[qs-1]:m2[qe+1];
     maxrange=maxrange+min;
     maxrange=maxrange/1.0;
     maxrange2=RMQ(st2,n,qs,qe);
//cout<<maxrange2<<endl;
     max=min+(maxrange2-min)/2.0;
     max=((max>maxrange)?max:maxrange);
     printf("%.1f\n",max);

     }
return 0;
}













