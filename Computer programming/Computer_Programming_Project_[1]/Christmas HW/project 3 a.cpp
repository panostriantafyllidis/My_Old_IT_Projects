/*Project 3-a version No.2
 * (ignore "No.2" it was my second attempt and i couldnt change the name)
(i spent some time on it so it may include stuff that i already knew and we may not have talked about in class)  
 */
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
  long binary;
  int decimal=0,i=0;
  cout<<"Give a binary number : ";
  //Give the whole number
  cin>>binary;
  while(binary!=0)
  {
      decimal=decimal+(binary%10)*pow(2,i);
      i++;
      binary = binary /10;
   }
   cout<<"The decimal equevelant of the given binary number is : "<< decimal;
}

