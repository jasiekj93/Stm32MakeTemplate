/**
 * @file Math.test.cpp
 * @author Adrian Szczepanski
 * @date 23-07-2021
 * @brief 
 * @details
 */

#include <libBlinkLed/Core/Math.hpp>

#include <CppUTest/CommandLineTestRunner.h>

using namespace Core;

TEST_GROUP(MathTest)
{

};

TEST(MathTest, Add)
{
    Math calculator;

    auto result = calculator.Add(2, 2);

    CHECK_EQUAL(4, result);
}

// TEST(MathTest, Add_Fail)
// {
//     Math calculator;

//     auto result = calculator.Add(0, 0);

//     CHECK_EQUAL(4, result);
// }
