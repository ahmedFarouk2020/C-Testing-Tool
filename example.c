#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lib/testing.h"

/****** تحسينات
 * 1. اجعلها كمكتبة أى حولها لملفات رقمية
 * 2. طريقة أكثر أمانًا لضمان عدم حدوث أخطاء مع مترجمات أخرى
 */


/*
 * This code is for testing a simple function using C language 
 */
 
int factorial(int number) {
	int result = 1;
	for(int i=2; i<=number; i++) {
		result *= i;
	}
	
	return result;
}

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
	TEST("12",			 (str()), 		  Test_str,   str);

	getchar();
}