//write code for for stack_array and display each element to screen
#include "arrays_mem.h"
#include <iostream>
#include <iomanip>

using std::cout;

void use_stack_array()
{
    const auto SIZE = 3;
    int numbers [SIZE]{1};//stack array
    
    for(auto i=0; i < SIZE; i++)
    {
        cout<<numbers[i]<<"\n";
    }
    
}

void array_months()
{
    const auto NUM_OF_MONTHS =3;
    int month_number[NUM_OF_MONTHS]{1,2,3};
    std::string month_names[NUM_OF_MONTHS]{"Jan", "Feb", "Mar"};

    for(auto i=0; i < NUM_OF_MONTHS; i++)
    {
        cout<<month_number[i]<<" "<<month_names[i]<<"\n";
    }
}

void arrays_and_pointer()
{
    const int SIZE = 3;
    int numbers[SIZE]{1,2,3};

    cout<<numbers<<"\n";

    int* ptr = numbers;
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";

    *ptr++;
    cout<<*ptr<<"\n";

    *ptr--;
    cout<<*ptr<<"\n";
}

void display_array(int* nums, const int SIZE)
{
    for(auto i=0; i<SIZE; ++i)
    {
        cout<<nums[i]<<"\n";
    }
}

void populate_times_table(int times_table[][COLS], const int ROWS)
{
    for(auto i=0; i<ROWS; i++)
    {
        for (auto j = 0; j < COLS; j++)
        {
            times_table[i][j] = (i+1) * (j+1);
        }
    }
}

void display_time_table(int times_table[][COLS], const int ROWS)
{
    for(auto i=0; i<ROWS; i++)
    {
        for(auto j=0; j<COLS; j++);
        {
            cout<<std::setw(5)<<times_table[i][j];
        }
        cout<<"\n";
    }
}