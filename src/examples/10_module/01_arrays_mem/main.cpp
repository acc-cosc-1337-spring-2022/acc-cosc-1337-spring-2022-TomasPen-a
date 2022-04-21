#include "arrays_mem.h"

int main() 
{
	// use_stack_array();
	// array_months();
	// const int SIZE = 3;
	// int numbers[SIZE]{1,2,3};
	// display_array(numbers, SIZE);

	int time_table[ROWS][COLS];

	populate_times_table(time_table, ROWS);
	display_time_table(time_table, ROWS);

	return 0;
}