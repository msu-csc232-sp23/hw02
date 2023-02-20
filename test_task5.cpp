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

TEST_SUITE("Task 5"
           * doctest::description("A suite of tests for Task 5")
           * doctest::skip(SKIP_TESTING_TASK_5))
{
#if !SKIP_TESTING_TASK_5
    SCENARIO("Some Task 5 Scenario")
    {
        GIVEN("The student has supplied answers in the task5_answers.txt file") {
            std::ifstream data_file{ "task5_answers.txt" };

            int expected_r1_c1{32}; // num calls power2(3^32)
            int actual_r1_c1{ };
            int expected_r1_c2{19}; // num calls power2(3^19)
            int actual_r1_c2{ };
            int expected_r2_c1{6};  // num calls power3(3^32)
            int actual_r2_c1{ };
            int expected_r2_c2{5};  // num calls power3(3^19)
            int actual_r2_c2{ };

            WHEN("the data is read from this file") {
                if (data_file.is_open())
                {
                    data_file >> actual_r1_c1;
                    data_file >> actual_r1_c2;
                    data_file >> actual_r2_c1;
                    data_file >> actual_r2_c2;
                }

                THEN("I expect the student responses to match the answers") {
                    REQUIRE_EQ(expected_r1_c1, actual_r1_c1);
                    REQUIRE_EQ(expected_r1_c2, actual_r1_c2);
                    REQUIRE_EQ(expected_r2_c1, actual_r2_c1);
                    REQUIRE_EQ(expected_r2_c2, actual_r2_c2);
                }
            }
        }
    }
#endif
}