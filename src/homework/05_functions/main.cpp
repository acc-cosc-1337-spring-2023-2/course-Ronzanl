#include "func.h"
#include <iostream>

using std::cout; using std::cin; using std::string;

int main() 
{

	int choice = 0;
	double tempval = 0;
	string strand;
	string tempstring;
	do
	{
		menu_run();
		cin>>choice;

		switch(choice)
		{
			case 1:
				cout<<"Please enter a DNA string";
				cin>>strand;
				tempval = get_gc_content(strand);
				cout<<"The GC content is: "<<tempval*100<<"%"<<"\n\n";
				break;

			case 2:
				cout<<"Please enter a DNA string";
				cin>>strand;
				tempstring = get_dna_compliment(strand);
				cout<<"The DNA compliment is: "<<tempstring<<"\n\n";
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