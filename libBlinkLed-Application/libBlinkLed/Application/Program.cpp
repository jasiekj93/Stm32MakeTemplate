#include "Program.hpp"
#include <libBlinkLed/Core/Math.hpp>

using namespace Application;

Program::Program(Hardware::ILed &led,
    Hardware::ISystem &system)
    : _led(led)
    , _system(system)
{
}

void Program::Execute()
{
    Core::Math calculator;

    auto result = calculator.Add(2, 2); 

    if(result != 4)
        return;

    _led.Toggle();
    _system.Delay(500);
}