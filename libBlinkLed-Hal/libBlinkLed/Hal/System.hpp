#pragma once

/**
 * @file System.hpp
 * @author Adrian Szczepanski
 * @date 23-07-2021
 * @brief 
 * @details
 */

#include <libBlinkLed/Application/Hardware/ISystem.hpp>
#include <libBlinkLed/Driver/System.hpp>

namespace Hal
{
    class System : public Application::Hardware::ISystem
    {
    public:
        void Delay(uint32_t ms) override { Driver::System::Delay(ms); }
    };
}