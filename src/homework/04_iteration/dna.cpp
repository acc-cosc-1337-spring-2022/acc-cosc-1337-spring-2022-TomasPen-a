#include "dna.h"
#include <iostream>
using namespace std;

//factorial function
int factorial(int num)
{
    int fact = 1;
    for(int i = 1; i <= num; i++)
    {
        fact = fact * i;

    }
    return fact;
}

//gcd function
int gcd(int num1, int num2)
{
    while(num1 != num2) 
    {
        if(num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;

    }
    return num1;
}