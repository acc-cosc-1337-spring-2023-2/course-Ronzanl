//write include statements
#include "hwexpressions.h"
#include<iostream>

using std::cout; using std::cin;

//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount = 0;
	double tip_rate = 0;
	double tip_amount = 0;
	double tax_amount = 0;
	

	cout<<"Enter the price of your meal: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax(meal_amount);

	cout<<"Please enter your tip percentage as a decimal: ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	double total = tip_amount + tax_amount + meal_amount;

	cout<<"---Meal Receipt--- \nMeal Amount:\t$"<<meal_amount<<"\nSales Tax:\t$"<<tax_amount<<"\nTip Amount:\t$"<<tip_amount<<"\nSale Total: \t$"<<total<<"\n";
	return 0;
}
