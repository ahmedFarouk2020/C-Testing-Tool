#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "testing.h"


void (*ptr) () = 0;


/***** Testing a function that returns int
 *
 * Args:
 *    expected(int) : True value the function should return
 *    actual(int)   : Actual value the function already returns
 *    test_name(str): Name the charactrizes a test case
 *
 */
void test_int(int expected, int actual, const char* test_name)
{
	if(actual == expected) {
		printf("%s:\t [  PASS  ]\n\n",test_name);
	} else {
		printf("%s:\t [  FAIL  ] \nExpected result is %d \nActual output is %d\n\n",test_name,expected,actual);
	}
}


/***** Testing a function that return float
 *
 * Args:
 *    expected(float) : True value the function should return
 *    actual(float)   : Actual value the function already returns
 *    test_name(str)  : Name the charactrizes a test case
 *
 */
void test_float(float expected, float actual, const char* test_name)
{
	if((double)actual == (double)expected) {
		printf("%s:\t [  PASS  ]\n\n",test_name);
	} else {
		printf("%s: [  FAIL  ] \nExpected result is %f \nActual output is %f\n\n",test_name,expected,actual);
	}
}


/***** Testing a function that returns a string
 *
 * Args:
 *    expected(str) : True value the function should return
 *    actual(str)   : Actual value the function already returns
 *    test_name(str): Name the charactrizes a test case
 *
 */
void test_str(char expected[], char actual[], const char* test_name)
{
	if(strcmp(actual, expected) == 0) {
		printf("%s:\t [  PASS  ]\n\n",test_name);
	} else {
		printf("%s:\t [  FAIL  ] \nExpected result is %s \nActual output is %s\n\n",test_name,expected,actual);
	}
}