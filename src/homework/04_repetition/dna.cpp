//add include statements
#include "dna.h"
#include<iostream>

using std::swap; using std::cout; using std::cin;
//add function(s) code here

int factorial(int num)
{
    auto fact = 1;

    while (num > 0)
    {
      fact *= num;
      num--;
    }
    return fact ;
}

int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
      if (num1 < num2)
      {
        swap(num1, num2);
      }
      else if(num1 > num2)
      {
        num1 = num1 - num2;
      }
    }
    return num1;
}

void menu_run()
{
  cout<<"\tMenu"<<"\n";
  cout<<"1 - Factorial"<<"\n";
  cout<<"2 - Greatest Common Divisor"<<"\n";
  cout<<"3 - Exit"<<"\n";
  cout<<"Enter your choice (1-3): ";
  
}