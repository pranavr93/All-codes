#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include<stdlib.h>
using namespace std;

#define ARRAY_SIZE(A) sizeof(A)/sizeof(A[0])
// Binary search (note boundaries in the caller)
// A[] is ceilIndex in the caller
int CeilIndex(int A[], int l, int r, int key) {
    int m;

    while( r - l > 1 ) {
        m = l + (r - l)/2;
        (A[m] >= key ? r : l) = m; // ternary expression returns an l-value
    }

    return r;
}

int LongestIncreasingSubsequenceLength(int A[], int size) {
    // Add boundary case, when array size is one

    int *tailTable   = new int[size];
    int len; // always points empty slot

    memset(tailTable, 0, sizeof(tailTable[0])*size);

    tailTable[0] = A[0];
    len = 1;
    for( int i = 1; i < size; i++ ) {
        if( A[i] < tailTable[0] )
            // new smallest value
            tailTable[0] = A[i];
        else if( A[i] > tailTable[len-1] )
            // A[i] wants to extend largest subsequence
            tailTable[len++] = A[i];
        else
            // A[i] wants to be current end candidate of an existing subsequence
            // It will replace ceil value in tailTable
            tailTable[CeilIndex(tailTable, -1, len-1, A[i])] = A[i];
    }

    delete[] tailTable;

    return len;
}
int mod(int n)
{
     if(n>0){return n;}
     else{return -n;}
}
void set_array(int *arr,int n)
{
     long int i;
     srand(time(NULL));
       for(i=0;i<n;i++)
    {
         *(arr+i)= mod(rand())%10000;
    }
}
int main() {
    int A[1000000] ,n=1000000,i;
    FILE *f;
    f=fopen("input1.txt","w");
    fprintf(f,"%d\n",n);
    set_array(A,n);
    i=0;
    while(i!=n)
    {
     fprintf(f,"%d ",A[i]);
     i++;
    }
    
  //  for(int i=0;i<n;i++){cout<<A[i]<<" ";}
    cout<<endl;
   cout<< LongestIncreasingSubsequenceLength(A, n);

    return 0;
}
