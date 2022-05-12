#pragma once

/**
 * @file ISystem.hpp
 * @author Adrian Szczepanski
 * @date 23-07-2021
 * @brief 
 * @details
 */

#include <cstdint>

namespace Application::Hardware
{
    class ISystem
    {
    public:
        virtual ~ISystem() {}

        virtual void Delay(uint32_t ms) = 0;
    };
}