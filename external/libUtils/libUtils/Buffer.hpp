#pragma once

#include <cstddef>

namespace Utils
{
    class Buffer
    {
    public:
        Buffer(size_t);
        ~Buffer();

        bool Add(int);
        size_t Size() const;
        size_t Count() const;
        int Get(size_t) const;

    private:
        int *_data;
        size_t _size;
        size_t _count;
    };
}