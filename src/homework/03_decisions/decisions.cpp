#include "decisions.h"
#include<iostream>
#include<string>
using namespace std;
//write include statement for decisions header

//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1
//int get_grade_points(std::string letter_grade)
//{
//	if (letter_grade == "A") 
//	{
//		return 4;
//	}
//	else if(letter_grade == "B") 
//	{
//		return 3;
//	}
//	else if (letter_grade == "C")
//	{
//		return 2;
//	}
//	else if (letter_grade == "D")
//	{
//		return 1;
//	}
//	else if (letter_grade == "F")
//	{
//		return 0;
//	}
//	else 
//	{
//		return -1;
//	}
//}


//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.
//double calculate_gpa(int credit_hours, double credit_points)
//{
//	return credit_points / credit_hours;
//}
//-------------------------------------------------------------------------------------------------------

//Getting letter grade using if-else-if
char get_letter_grade_using_if(int letter_grade)
{
	if (letter_grade>=90 && letter_grade<=100) 
	{
		return 'A';
	}
	else if(letter_grade>=80 && letter_grade<=89) 
	{
		return 'B';
	}
	else if (letter_grade>=70 && letter_grade<=79)
	{
		return 'C';
	}
	else if (letter_grade>=60 && letter_grade<=69)
	{
		return 'D';
	}
	else 
	{
		return 'F';
	}
}

//Getting letter grade using a switch construct
char get_letter_grade_using_switch(int letter_grade)
{
	int grade = letter_grade/10;
	char result;
	switch(grade)
	{
		case 10:
			result = 'A';
			break;
		case 9:
			result = 'A';
			break;
		case 8:
			result = 'B';
			break;
		case 7:
			result = 'C';
			break;
		case 6:
		result = 'D';
		break;
		default:
			result = 'F';
			break;
	}
	return result;
}