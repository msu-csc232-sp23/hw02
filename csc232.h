/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Useful libraries and function declarations for CSC232 assignments.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#ifndef CSC232
#define CSC232

#define FALSE 0
#define TRUE !FALSE
// Set this macro to the value of FALSE to test Task 1
#define SKIP_TESTING_TASK_1 TRUE
// Set this macro to the value of FALSE to test Task 2
#define SKIP_TESTING_TASK_2 TRUE
// Set this macro to the value of FALSE to test Task 3
#define SKIP_TESTING_TASK_3 TRUE
// Set this macro to the value of FALSE to test Task 4
#define SKIP_TESTING_TASK_4 TRUE
// Set this macro to the value of FALSE to test Task 5
#define SKIP_TESTING_TASK_5 TRUE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <memory>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

/* Begin student work */

// TODO: Task 1.1 - Declare the power1 function below
// The return type shall be double
// The name of this function shall be power1
// The function shall contain two parameters
// The first parameter will be a double and shall be named x
// The second parameter will be an integer and shall be named n
// These parameters represent the expression x^n that this function
// is intended to compute.
// Make sure to fully document your function using Javadoc-style
// Doxygen comments.



// TODO: Task 2.1 - Declare the power2 function below
// The return type shall be double
// The name of this function shall be power2
// The function shall contain two parameters
// The first parameter will be a double and shall be named x
// The second parameter will be an integer and shall be named n
// These parameters represent the expression x^n that this function
// is intended to compute.
// Make sure to fully document your function using Javadoc-style
// Doxygen comments.



// TODO: Task 3.1 - Declare the power3 function below
// The return type shall be double
// The name of this function shall be power3
// The function shall contain two parameters
// The first parameter will be a double and shall be named x
// The second parameter will be an integer and shall be named n
// These parameters represent the expression x^n that this function
// is intended to compute.
// Make sure to fully document your function using Javadoc-style
// Doxygen comments.



/* End student work -- DO NOT ADD OR MODIFY ANYTHING BELOW THIS COMMENT */

/**
 * @brief Calculates the nth factorial number.
 * 
 * @param number the value whose factorial we seek
 * @return the factorial of the given number.
 */
int factorial(int number);

/**
 * @brief A demonstration for how an input file is read.
 *
 * @param file_name the file to opened for processing
 * @return true if the given file was successfully opened, false otherwise.
 */
bool read_data(const std::string& file_name);

#endif
