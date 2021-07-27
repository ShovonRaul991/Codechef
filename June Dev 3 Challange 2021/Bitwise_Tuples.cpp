#include<iostream>
#include<math.h>
#define mod 1000000007
#define ll long long
using namespace std;

long long power(long long n,long long p)
{
    int res=1;
    n=n%mod; //update n if it is more than or equal mod
    if(n==0)
        return 0;
    while(p)
    {
        if(p&1)  //y%2!=0
            res=(res*n)%mod;
        p=p>>1; //p=p/2
        n=(n*n)%mod;
    }
    return res;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll n , m;
        cin>>n>>m;
        ll temp = power(2,n);
        ll ans = power(temp-1,m);
        cout<<ans<<endl; 
    }
}