//write include statements
#include <iostream>
#include "variables.h"
using namespace std;
//write namespace using statement for cout

int main()
{
	int num;
	std::cout << "Enter an integer: ";
	std::cin >> num;

	int result = multiply_numbers(num);
	std::cout << "Result= "<<result<<endl;

	int num1;
	num1 = 4;
	result = multiply_numbers(num1);
	std::cout<<"Results= "<<result<<endl;
	return 0;
}
