//Project 3 b
#include <iostream>
using namespace std;
int main() 
{
    int number;
    string bin;
    char holder=' ';
    cout<<"Give the number you want to convert to binary : "<<endl;
    cin >> number;
    while(number!=0)
    {
        holder=number %2+'0';
        bin=holder +bin;
        number/=2;
    }
    cout <<bin<<endl;
    
}
