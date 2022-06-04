/*
Factorial Program in C++: Factorial of n is the product of all 
positive descending integers. Factorial of n is denoted by n!. For example:
4! = 4*3*2*1 = 24  
6! = 6*5*4*3*2*1 = 720 

*/

#include <iostream>  
using namespace std;  
int main()  
{  
   int i,fact=1,number;    
  cout<<"Enter any Number: ";    
 cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
  return 0;  
}  
