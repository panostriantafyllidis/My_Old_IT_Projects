#include <iostream>
using namespace std;
int main() 
{
    int a,b,i,x;
    cout<<"Give two numbers: "<<endl;
    cout<<"Give first number : "<<endl;
    cin>>a;
    cout<<"Give secont number: "<<endl;
    cin>>b;
    x=a*b;
    cout<<"The LCM of : "<<a<<" and "<<b<<" is : "<<endl;
for(i=1;i<=x;i++)
    {
        if( x%i==0&&i%a==0&&i%b==0)
        {
            cout<<i;
            break;
        }
            
    }
}



