#include "int.h" // tells c++ to find the echo variable function in the header file

#include<iostream>// This tells c++ to bring in code from the standard library to display to screen

using std::cout; 

int main()
{
    int num = 10;
    cout<<echo_variable(num)<<"\n";
    return 0;
}