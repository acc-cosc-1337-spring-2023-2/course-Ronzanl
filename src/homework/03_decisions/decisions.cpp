//write include statement for decisions header
#include "decisions.h"

using std::cout; using std::cin;
using std::string;
//Write code for function(s) code here

string get_letter_grade_using_if(int grade)

    {
    string result;

    if(grade >= 90 && grade <= 100)
    {
        result = "A";
    }
    else if(grade >= 80 && grade <= 89)
    {
        result = "B";
    }
    else if(grade >= 70 && grade <= 79)
    {
        result = "C";
    }
    else if(grade >= 60 && grade <= 69)
    {
        result = "D";
    }
    else if(grade >= 0 && grade <= 59)
    {
        result = "F";
    }
    else
    {
        result = "Number is Out of Range";
    }

    return result;
}

string get_letter_grade_using_switch(int grade)
{
    string option;

    switch(grade)
    {
     case 90 ... 100:
        option = "A";
        break;
     case 80 ... 89:
        option = "B";
        break;
     case 70 ... 79:
        option = "C";
        break;
     case 60 ... 69:
        option = "D";
        break;
    case 0 ... 59:
        option = "F";
        break;
     default:  //else statement in the if-else
        option = "Number is Out of Range";
        break;
    }

    return option;
}

void display_menu()
{
    cout<<"\tMAIN MENU\n\n";
    cout<<"1 - Letter Grade using If\n";
    cout<<"2 - Letter Grade using Switch\n";
    cout<<"3 - Exit";

}
