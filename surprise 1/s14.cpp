#include<iostream>
using namespace std;

int main()
{
  int n,sum=0;
  cout<<"enter the number: "<<endl;
  cin>>n;

  int i=1;
  do
  {
    if (i%2==0){
      sum =sum+i;
    }
    i++;
  } while (i<=n);
  
  cout<<"sum of even num:"<<sum<<endl;
    return 0;
    
}