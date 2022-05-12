#pragma once

/**
 * @file System.hpp
 * @author Adrian Szczepanski
 * @date 23-07-2021
 * @brief 
 * @details
 */

#include <cstdint>

namespace Driver::System
{
    void Init();
    void Delay(uint32_t ms);
}