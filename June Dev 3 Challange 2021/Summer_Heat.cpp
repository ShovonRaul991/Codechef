#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;   //number of test cases
    while(T--)
    {
        int xa,xb,XA,XB;
        cin>>xa>>xb>>XA>>XB;
        if(XA%xa==0 && XB%xb == 0)
        {
            int smallDivident = XA / xa;
            int bigDivident = XB / xb;
        
            int output = smallDivident + bigDivident;
            cout<<output<<endl;

        }
    }

}