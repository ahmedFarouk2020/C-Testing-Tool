#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../lib/testing.h"

/*
 * This code is for testing a simple function using C language 
 */

int sum(int x, int y) {
	return x+y;
}


char* str() {
	return "Ahmed";
}

float float_() {
	return 123.315;
}

int main()
{
	// Example: 
	TEST((int)(123.315), (int)(float_()), Test_float, float);
	TEST(4,     		 (sum(2,2)),	  Test_int,   int);
	TEST("ahmed",			 (str()), 		  Test_str,   str);

	getchar();
}
