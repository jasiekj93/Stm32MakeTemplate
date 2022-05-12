#pragma once

/**
 * @file Program.hpp
 * @author Adrian Szczepanski
 * @date 23-07-2021
 * @brief 
 * @details
 */

#include <libBlinkLed/Application/Hardware/ILed.hpp>
#include <libBlinkLed/Application/Hardware/ISystem.hpp>

namespace Application
{
    class Program
    {
    public:
        Program(Hardware::ILed &,
            Hardware::ISystem &);

        void Execute();

    private:
        Hardware::ILed &_led;
        Hardware::ISystem &_system;
    };
}