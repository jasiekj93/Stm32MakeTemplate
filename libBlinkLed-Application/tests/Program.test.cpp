/**
 * @file Program.test.cpp
 * @author Adrian Szczepanski
 * @date 23-07-2021
 * @brief 
 * @details
 */

#include <libBlinkLed/Application/Program.hpp>
#include <tests/Mock/Hardware/Led.hpp>
#include <tests/Mock/Hardware/System.hpp>

#include <CppUTest/CommandLineTestRunner.h>

using namespace Application;
using namespace Test;

TEST_GROUP(ProgramTest)
{
    Mock::Hardware::Led *led;
    Mock::Hardware::System *system;

    void setup()
    {
        led = new Mock::Hardware::Led();
        system = new Mock::Hardware::System();
    }

    void teardown()
    {
        delete led;
        delete system;
    }
};

TEST(ProgramTest, Execute)
{
    Application::Program program(*led, *system);

    program.Execute();

    CHECK_EQUAL(500, system->delay);
    CHECK(led->status);
}
