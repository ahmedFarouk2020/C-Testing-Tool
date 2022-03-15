#ifndef TESTING_H_
#define TESTING_H_

void test_int(int expected, int actual, const char* test_name);

void test_float(float expected, float actual, const char* test_name);

void test_str(char expected[], char actual[], const char* test_name);

void (*ptr) ();


// Example:
// int sum = sum(2,5)
// TEST_SIMPLE(100.0,sum, Testcase1, int);
/*
#define TEST(expected, actual, testcase_name, return_type)   do{\
															 	if(strcmp(#return_type, "int") == 0)\
															 	{\
															 	    test_int(atoi(#expected),atoi(actual),(#testcase_name));\
															 	}\
															 	else if(strcmp(#return_type, "str") == 0)\
															 	{\
															 	    test_str((#expected),(actual),(#testcase_name));\
															 	}\
																\
															 }while(0)
*/
/*
// Example: TEST_SIMPLE(100.0,sum(2,5), Testcase1);
#define TEST_SIMPLE(expected, actual, testcase_name) 	char* text;\
														sprintf(text, "%d", actual);\
														test_str((#expected),text,(#testcase_name));

*/

#define TEST_ADVANCED(expected, actual, testcase_name, return_type)  do{\
																		if (strcmp(#return_type,"int") == 0)\
																			test_int((expected),(actual),(#testcase_name));\
																			\
																		else if (strcmp(#return_type,"str") == 0)\
																			test_str((#expected),(#actual),(#testcase_name));\
																			\
																		else if (strcmp(#return_type,"float") == 0)\
																			test_float((expected),(actual),(#testcase_name));\
																			\
																		else\
																			test_int((expected),(actual),(#testcase_name));\
																	}while(0);

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