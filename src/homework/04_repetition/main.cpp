//write include statements
#include"dna.h"
#include<iostream>
//write using statements

using std::cout; using std::cin;
/*
Create a menu for factoral, greatest common divisor or exit
check the exit prompt.
*/
int main() 
{
	int choice;
	int num;
	int num1;
	int value;
	do
	{
		menu_run();
		cin>>choice;

		switch(choice)
		{
			case 1:
				
				cout<<"Please enter a number: ";
				cin>>num;
				value = factorial(num);
				cout<<"The factorial of "<<num<<" Equals: "<<value<<"\n\n";
				break;

			case 2:
				
				cout<<"Please enter a number: ";
				cin>>num;
				cout<<"Please enter another number: ";
				cin>>num1;
				value = gcd(num, num1);
				cout<<"The Greatest Common Divisor of "<<num<<" and "<<num1<<" Equals: "<<value<<"\n\n";
				break;
			
			case 3:
				char confirm;
				cout<<"Are you sure you want to exit? (Y/N): ";
				cin>>confirm;
				if (confirm == 'y' || confirm == 'Y')
				{
					cout<< "Exiting Program. Goodbye."<<"\n\n";
					choice++;
				}
				else if(confirm == 'n' || confirm == 'N')
				{
					break;
				}
				else
				{
					cout<<"Invalid Selection. Please enter Y or N."<<"\n";
				}
			
				break;
				
			default:
				cout<<"Invalid Selection: Please Enter 1, 2 or 3."<<"\n\n";
		}
	} while(choice != 4);
	return 0;
}