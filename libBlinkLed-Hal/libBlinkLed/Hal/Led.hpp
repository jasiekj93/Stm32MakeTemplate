#pragma once

/**
 * @file Led.hpp
 * @author Adrian Szczepanski
 * @date 23-07-2021
 * @brief 
 * @details
 */

#include <libBlinkLed/Application/Hardware/ILed.hpp>
#include <libBlinkLed/Driver/Led.hpp>

namespace Hal
{
    class Led : public Application::Hardware::ILed
    {
    public:
        Led() 
            : _led()
        {
        }

        void Toggle() override { _led.Toggle(); } 

    private:
        Driver::Led _led;
    };
}