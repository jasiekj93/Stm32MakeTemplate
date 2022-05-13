#pragma once

#include <libBlinkLed/Driver/Led.hpp>
#include <libBlinkLed/Driver/System.hpp>

namespace Driver::Test
{
    void Led()
    {
        ::Driver::Led led;
        
        while(true)
        {
            led.Toggle();
            System::Delay(500);
        }
    }
}