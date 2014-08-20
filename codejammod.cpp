 #include<iostream>
 #define p 1000000007
 long long degree(long long a, long long k) {        //returns a^k mod p in O(logk)
 long long temp,cur;
   temp = 1;
   cur = a;
  while (k) {
    if (k%2) {
      temp = (temp * cur)%p;

    }
    k /= 2;
    cur = (cur * cur)%p ;

  }
  return temp;
}
 int main()
 {
    long long fact[100005],n,m,k,sum,sum2,res,prod,i;
    cin>>n>>k>>m;
    
    fact[0]=1;
    for(i=1;i<=100000;i++){
        fact[i]=((fact[i-1]%p)*i)%p;

    }
    sum= fact[n];
    sum2=(fact[n-k]*fact[k])%p;
    
    
    res= (sum*degree(sum2,p-2))%p;
    
    prod=degree(m,res);
    cout<<prod;
    
    
 return 0;
    
 }
