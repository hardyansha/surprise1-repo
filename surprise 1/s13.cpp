#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the n num: "<<endl;
    cin>>n;

    int s=0;
    for (int  i = 1; i <= n; i++)
    {
        s=s+i;
    }
     
     cout<<"sum of n num"<<n<<"n num="<<s<<endl;
       return 0;

    
}