#include<iostream>

using std::cout;
int main()
{
auto num = 5;//int is whole number
auto num1 = 5.5;//double is decimal number

cout<<"size of num: "<<sizeof(num)<<"\n";
cout<<"size of double: "<<sizeof(num1)<<"\n";

 num = 2147483647;// 2^31 - 1 ; max int value
 cout<<"Max value for int: "<<num<<"\n";
    return 0;
}