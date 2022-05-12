#include "Buffer.hpp"

using namespace Utils;

Buffer::Buffer(size_t size)
{
    _data = new int[size];
    _size = size;
    _count = 0;
}

Buffer::~Buffer()
{
    delete[] _data;
}

bool Buffer::Add(int object)
{
    if(_count == _size)
        return false;

   _data[_count++] = object;
   return true; 
}

size_t Buffer::Size() const
{
    return _size;
}

size_t Buffer::Count() const
{
    return _count;
}

int Buffer::Get(size_t i) const
{
    if(i >= _count)
        return 0;
    else
        return _data[i];
}