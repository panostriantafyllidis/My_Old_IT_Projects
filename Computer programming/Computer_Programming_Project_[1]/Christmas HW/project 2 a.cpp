//Project 2-b
#include <iostream> 
using namespace std; 
int main()
{
int n1, n2, gcd;
cout << "Enter two numbers: ";
cin >> n1 >> n2;
if ( n2 > n1) {   
    int x = n2; // to set the smallest one so we do not exceed it in the process
    n2 = n1;
    n1 = x;
}
for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
        gcd= i;
    }
}
cout << "The Greatest Common Divisor is :  " << gcd;
}

    