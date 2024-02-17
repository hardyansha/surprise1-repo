#include<iostream>
using namespace std;
int glo=23;
int loc()
{
    int a;
    cout<<glo<<endl;
}

int main()
{
   int glo=5;
   int sum;
   sum=glo+::glo;
   cout<<glo<<endl;
   cout<<sum;
   return 0;
}