#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"case 10= N>85; case 9=((N<85) && (N>=70));case 8=((N<70) && (N>=55));case 7 =((N<55) && (N>=35)); case 6 = (N<35)"<<endl;
    cout<<"enter your case: "<<endl;
    cin>>N;

    switch (N)

 {
    case 10 :
        if(N>=85);
        cout<<"your grade is : a"<<endl;
    
        break;

    case 9 :
        if((N<85) && (N>=70));
        cout<<"your grade is : b"<<endl;
        break;

    case 8:
        if((N<70) && (N>=55));
        cout<<"your grade is : c"<<endl;
        break;

    case 7:
        if((N<55) && (N>=35));
        cout<<"your grade is : d"<<endl;
        break;

    case 6:
        if(N<35);
        cout<<"your grade is : f"<<endl;
        break;

    default:
        break;
 }

    return 0;
}