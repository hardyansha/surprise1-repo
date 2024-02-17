#include<iostream>
using namespace std;


int main() 
{
    int h,e,m,p,c;
     cout<<"enter your subjects marks :"<<endl;
    cin>>h>>e>>m>>p>>c;
    p=((h+e+m+p+c)* 100/500);

    if ((p<=100) && (p>=85))  
     {
        cout<<"your grade is 'a' "<<endl;
        cout<<"you are pass"<<endl;
     }

    else if ((p < 85) && (p >= 70))
     {
        cout<<"your grade is 'b' "<<endl;
        cout<<"you are pass"<<endl;
     }

    else if ((p < 70) && (p >= 50))
     {
        cout<<"your grade is 'c' "<<endl;
        cout<<"you are pass"<<endl;

     }

    else if ((p < 50) && (p >= 35))
     {
        cout<<"your grade is 'd' "<<endl;
        cout<<"you are pass"<<endl;
        
     }

    else   {  
        cout<<"you are fail'"<<endl;
    }
     
     return 0;
}