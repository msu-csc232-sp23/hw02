/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task3.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 3 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 3"
           * doctest::description("A suite of tests for Task 3")
           * doctest::skip(SKIP_TESTING_TASK_3))
{
#if !SKIP_TESTING_TASK_3
    SCENARIO("Validating correctness of the power1 implementation")
    {
        GIVEN("the student has implemented the power3 function") {
            double expected_data[33][4];
            for (int base{0}; base <= 32; ++base)
            {
                for (int exponent{ 0 }; exponent <= 3; ++exponent)
                {
                    expected_data[base][exponent] = pow( base, exponent );
                }
            }

            WHEN("the power3 function is invoked on a number of values") {
                double actual_data[33][4];
                for (int base{0}; base <= 32; ++base)
                {
                    for (int exponent{ 0 }; exponent <= 3; ++exponent)
                    {
                        actual_data[base][exponent] = power3( base, exponent );
                    }
                }
                THEN("we expected the computed value to be correct") {
                    for (int base{0}; base <= 32; ++base)
                    {
                        for (int exponent{ 0 }; exponent <= 3; ++exponent)
                        {
                            REQUIRE_EQ(expected_data[base][exponent], actual_data[base][exponent]);
                        }
                    }
                }
            }
        }
    }
#endif
}
