#ifndef TESTING_H_
#define TESTING_H_

void test_int(int expected, int actual, const char* test_name);

void test_float(float expected, float actual, const char* test_name);

void test_str(char expected[], char actual[], const char* test_name);

void (*ptr) ();


#define TEST(expected, actual, testcase_name, return_type)   do{\
																		if (strcmp(#return_type,"int") == 0)\
																			ptr = test_int;\
																			\
																		else if (strcmp(#return_type,"str") == 0)\
																			ptr = test_str;\
																			\
																		else if (strcmp(#return_type,"float") == 0)\
																			ptr = test_float;\
																			\
																		else\
																			ptr = test_int;\
																	}while(0);\
																	ptr(expected, actual, #testcase_name)


#endif