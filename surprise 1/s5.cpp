#include<iostream>
using namespace std;

int main() 
{
  int num1 ,num2 ,x=40;

  cout<<"value of num1 is: "<<endl;
  cin>>num1;

  cout<<"value of num2 is: "<<endl;
  cin>>num2;

    if ((num1==x) || (num2==x))
      {
        cout<<"success"<<endl;
      }

    else {
        cout<<"fail"<<endl;
    }

    return 0;
}