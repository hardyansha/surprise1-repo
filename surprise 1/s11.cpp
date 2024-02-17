#include<iostream>
using namespace std;

int main()
{
    int a, m=0;
    
    cout<<"enter a number: "<<endl;
    cin>>a;

    cout<<"table of given number"<<endl<<endl;

    for (int i = 1; i <= 10; i++ )
    {
        
        m=a*i;
        cout<<m<<endl;
    
    
    }
    
    return 0;
    
}