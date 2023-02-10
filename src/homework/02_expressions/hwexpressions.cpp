#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

double get_sales_tax(double meal_amount)
{
	auto product = tax_rate * meal_amount;
	return product;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	auto product = tip_rate * meal_amount;
	return product; 
}
