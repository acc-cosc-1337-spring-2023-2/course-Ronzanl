//write include statements
#include "decisions.h"


using std::cout; using std::cin;

int main() 
{

	auto num = 0;
	auto grade = 0;

	display_menu();
	cout<<"\n\nEnter menu option: \n";
	cin>>num;

	if(num == 1)
	{
		cout<<"Please enter Grade: \n";
		cin>>grade;
		if(grade <= 100 && grade >= 0)
		{
			auto result = get_letter_grade_using_if(grade);
			cout<<"Your Grade Is: "<<result<<"\n";
		}
		else
		{
			cout<<"Number is Out of Range\n";
		}
	}
	else if(num == 2)
	{
		cout<<"Please enter Grade: \n";
		cin>>grade;
		if(grade <= 100 && grade >= 0)
		{
			auto result = get_letter_grade_using_switch(grade);
			cout<<"Your Grade Is: "<<result<<"\n";
		}
		else
		{
			cout<<"Number is Out of Range\n";
		}
	}
	else if (num == 3)
	{
		cout<<"Thank you for using this program\n";
	}
	else
	{
		cout<<"Please Enter a valid selection\n";
	}

	return 0;
}