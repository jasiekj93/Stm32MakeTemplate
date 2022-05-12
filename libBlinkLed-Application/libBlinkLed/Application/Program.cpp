#include "Program.hpp"
#include <libBlinkLed/Core/Math.hpp>
#include <libUtils/Buffer.hpp>

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
    Utils::Buffer buffer(5);

    auto result = calculator.Add(2, 2); 
   
    if(result != 4)
        return;

    result = buffer.Add(2);
    result = buffer.Add(5);

    _led.Toggle();
    _system.Delay(500);
}