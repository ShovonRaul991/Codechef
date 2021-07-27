#include<iostream>
#include<map>
#include<vector>
#define ll long long
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll n, m;
        cin>>n>>m;
        vector<int> x,y;
        for(int i = 0;i<n;i++)
        {
            cin>>x[i];
        }

    
        for(int i = 0;i<m;i++)
        {
            cin>>y[i];
        }

        int mod=1e9;
        map<int,int>mp;
        for(int i = 0;i<n;i++)
        {
            if(i=0) mp[i]=0;
            else if (x[i]!=0) mp[i]=0;
            else x[i]=mod;
        }

        int R = -1;
        for(int i=0;i<n;i++)
        {
            if(x[i]==1) R=i;
            if(R!=-1){
                if(x[i]==0) mp[i]= min(mp[i],i-R);
            }
        }
        
        int L = -1;
        for(int i=n-1;i>=0;i--)
        {
            if(x[i]==2) L=i;
            if(L!=-1){
                if(x[i]==0) mp[i]= min(mp[i],L-i);
            }
        }

        for(int i = 0;i<m;i++)
        {
            int j = y[i]-1;
            if(mp[j]!=mod)
            {
                cout<<mp[j]<<" ";
            }
            else
            {
                cout<<-1<<" ";
            }
        }
        cout<<"\n";
    }
}


