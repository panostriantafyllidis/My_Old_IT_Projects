//Project 1-a
#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
 int n,num,digit,rev=0;
 cout<<"Enter your number here : "<<endl;
 cin>>num;
 n=num;
 while(num!=0){
         digit = num%10;
         rev = rev*10+digit ;
         num=num/10;
     
 }
 if(n==rev){
     cout<<"The number you entered is Palindrome "<<endl;
    
 }
 else 
     cout<<"The number you entered is NOT a Palindrome"<<endl;
}