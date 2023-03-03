#include<iostream>
#include<string>

using std::cout; using std::string;

int main()
{

    string lang = "C++";
    cout<<"Size of: "<<lang.size()<<"\n";
    lang.append(" is great fo");
    cout<<"Size of: "<<lang.size()<<"\n";
    return 0;
}