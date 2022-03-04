#include <iostream>
#include "expressions.h"
using namespace std;
//write include statements
//write namespace using statement for cout
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{
	double meal_amount, tiprate, total;

	//Getting mealAmount and Tiprate input
	std::cout<<"Enter Meal Amount: $";
	std::cin>>meal_amount;

	std::cout<<"Enter Tiprate: %";
	std::cin>>tiprate;

	//Getting tax amount
	double tax_amount = get_sales_tax_amount(meal_amount);

	//Getting tip amount
	double tip_amount = get_tip_amount(meal_amount, tiprate);

	//Calculating Total
	total = tip_amount+tax_amount+meal_amount;

	//Displaying output
	std::cout<<"Meal Amount: $"<<meal_amount<<endl;
	std::cout<<"Sales Tax: $"<<tax_amount<<endl;
	std::cout<<"Tip Amount: $"<<tip_amount<<endl;
	std::cout<<"Total: $"<<total<<endl;

	return 0;
}
