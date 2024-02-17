#include<iostream>
using namespace std;

int main() {
    int a=6,b=8;
    cout<<"oprators in cpp : "<<endl;
    cout<<"types of oprators"<<endl;

    //arithmetic oprator
     cout<<"arithmetic oprator"<<endl;

    cout<<"value of a+b is : "<<a+b<<endl;
    cout<<"value of a-b is : "<<a-b<<endl;
    cout<<"value of a*b is : "<<a*b<<endl;
    cout<<"value of a/b is : "<<a/b<<endl;
    cout<<"value of a%b is : "<<a%b<<endl;
    cout<<"value of a++ is : "<<a++<<endl;
    cout<<"value of a-- is : "<<a--<<endl;
    cout<<"value of ++a is : "<<++a<<endl;
    cout<<"value of --a is : "<<--a<<endl;
    cout<<endl<<endl;

    //comparison oprator 
     cout<<"comparison oprator"<<endl;

    cout<<"value of a==b : "<<(a==b)<<endl;
    cout<<"value of a!=b : "<<(a!=b)<<endl;    
    cout<<"value of a<b : "<<(a < b)<<endl;
    cout<<"value of a>b : "<<(a > b)<<endl;
    cout<<"value of a<=b : "<<(a<=b)<<endl;
    cout<<"value of a>=b : "<<(a>=b)<<endl;
    cout<<endl<<endl; 

    //logical oprator
    cout<<"logical oprator"<<endl;

    cout<<"value of lgical op of ((a<b) && (a==b)) is : "<<((a<b) && (a==b))<<endl;
    cout<<"value of lgical op of ((a<b) || (a==b)) is : "<<((a<b) || (a==b))<<endl;
    cout<<"value of lgical op of (!(a==b)) is : "<<(! (a==b))<<endl;    
    cout<<endl<<endl; 



    return 0;

}