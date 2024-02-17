#include<iostream>
using namespace std;

int main()
{
    int a=4;
    cout<<"the value of int:"<<a<<endl;
    int *b =&a;
    cout<<"address of int: "<<*b<<endl;
    

    *b=7;
    cout<<"the changed value of int: "<<a<<endl;
return 0;
    
}