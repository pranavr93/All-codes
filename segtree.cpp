#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
long long p=3046201;
long long smodn;
long long res,cur,ti,i,temp;
long long a[3000005];

long long  getMid(long long  s, long long  e) {  return s + (e -s)/2;  }

long long  getSumUtil(long long  *st, long long  ss, long long  se, long long  qs, long long  qe, long long  index)
{
    if (qs <= ss && qe >= se)
        return st[index];

      if (se < qs || ss > qe)
        return 0;
    long long  mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*index+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*index+2);
}

void updateValueUtil(long long  *st, long long  ss, long long  se, long long  i, long long  diff, long long  index)
{

    if (i < ss || i > se)
        return;


    st[index] = st[index] + diff;
    if (se != ss)
    {
        long long  mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*index + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*index + 2);
    }
}

void updateValue(long long  arr[], long long  *st, long long  n, long long  i, long long  new_val)
{

    if (i < 0 || i > n-1)
    {
        printf("Invalid Input");
        return;
    }

     long long  diff = new_val - arr[i];
     arr[i] = new_val;
      updateValueUtil(st, 0, n-1, i, diff, 0);
}
long long  getSum(long long  *st, long long  n, long long  qs, long long  qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }

    return getSumUtil(st, 0, n-1, qs, qe, 0);
}

long long  constructSTUtil(long long  arr[], long long  ss, long long  se, long long  *st, long long  si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }

    long long  mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}
long long  *constructST(long long  arr[], long long  n)
{
      long long  x = (long long )(ceil(log(n)/log(2))); //Height of segment tree
    long long  max_size = 2*(long long )pow(2, x) - 1; //Maximum size of segment tree
    long long  *st = new long long [max_size];

     constructSTUtil(arr, 0, n-1, st, 0);

    // Return the constructed segment tree
    return st;
}

// tree contructed -------------------------------


long long degree(long long a, long long k) {        //returns a^k mod p
   temp = 1;
   cur = a;

  while (k) {
    if (k%2) {
      temp = (temp * cur)%p;
    }
    k /= 2;
    cur = (cur * cur) % p;
  }
  return temp;
}

 long long combinations2(long long n, long long k) {

  res=a[n];

 res=(res*b[k])%p;
 res=(res*b[n-k])%p;
  return res;
}
long long combinations(long long n, long long k) {

   res=a[n];
  res = (res * degree(degree(ti, p-2),smodn))%p;
  return res;
}

int main()
{
     long long N,n,arr[100005],i,l,r,a1,a2,a3,q,sum,k,c=0,b[;
     char s[100];
     a[0]=1;b[0]=1;
     for(i=1;i<3000005;i++)
     {
       ti = i;
          while(ti % p == 0) { ti /= p;}

      a[i] = (a[i-1] *ti)%p;
      if(i<100005){b[i] = (b[i-1] * degree(ti, p-2))%p;}
     }


  scanf("%lld",&N);
     for(i=0;i<N;i++)
     {
          scanf("%lld",&arr[i]);
     }
     long long  *st = constructST(arr, N);
     scanf("%lld",&q);
         // cout<<"hi";
     while(q--)
     {
     //c++;
    // if(c==2){printf("hi");}
     scanf("%s",s);
     scanf("%lld%lld",&l,&r);
     if(s[0]=='c')
     {
         updateValue(arr, st, N, l-1, r);continue;
     }
     else
     {
     sum=getSum(st, N, l-1, r-1);

     n=r-l+1;
     if(n==1){cout<<"1"<<endl;continue;}
       k=sum/n;
     smodn=sum%n;
     a1= combinations(sum, k+1);
     sum=sum-((k+1)*smodn);
     smodn=n-smodn;
     a2=combinations(sum,k);
     a1=a1%p;
     a2=a2%p;
     a3=combinations2(n,smodn)/smodn;
     a1=(a1*a2)%p;
     a1=(a1*a3)%p;
     printf("%lld\n",a1);
     }




     }
return 0;
}
