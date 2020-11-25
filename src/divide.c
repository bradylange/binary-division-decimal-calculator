#include <stdio.h>
#include <stdlib.h>

/*
 * Brady Lange
 * 3/6/18
 * File name: divide.c
 * This program divides two integer numbers using bitwise operations
 */
 
int main(int argc, char* argv[])
{

    // Converting the input to integers
	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[2]);
	int remain = 0;

	// Shifting bits based upon conditions
	int tempData = 1
	int quotient = 0;

	// If the second number is smaller or equal shift the bits left
	while(number2 <= number1)
	{
		number2 <<= 1;
		tempData <<= 1;
	}

	while(tempData > 1)
	{
		number2 >>= 1;
		tempData >>= 1;

		if(number1 >= number2)
		{
			number1 -= number2;
			quotient += tempData;
		}
	}

	// Loop that extracts the remainder
	while(number1 >= number2)
	{
		number1 -= number2;
	}

	// Remainder and quotient will be printed 
	printf("Quotient: %d\n", quotient);
	printf("Remainder: %d\n", number1);

} // End of main method

