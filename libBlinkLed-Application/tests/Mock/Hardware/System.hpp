#pragma once

/**
 * @file System.hpp
 * @author Adrian Szczepanski
 * @date 23-07-2021
 * @brief 
 * @details
 */

#include <libBlinkLed/Application/Hardware/ISystem.hpp>

namespace Test::Mock::Hardware
{
    class System : public Application::Hardware::ISystem
    {
    public:
        void Delay(uint32_t delay) override { this->delay = delay; }

        uint32_t delay;
    };
}