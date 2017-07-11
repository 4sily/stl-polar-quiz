#include <cstdint>
#include <cassert>
#include <numeric>
#include <iostream>
#include <algorithm>

// @todo: properly implement AllocateAlignedBy16Bytes and Deallocate

int* AllocateAlignedBy16Bytes(int numBytes)
{
    return new int[numBytes / sizeof(int)];
}

void Deallocate(int* ptr)
{
    delete [] ptr;
}

template <typename T>
auto addressAsInt(T* p)
{
    return reinterpret_cast<intptr_t>(p);
}

int main () {
    constexpr int numBytes = 42;
    
    int* memoryChunk = AllocateAlignedBy16Bytes(numBytes);
    std::cout << memoryChunk << " " << addressAsInt(memoryChunk) % 16 << '\n';
    assert(addressAsInt(memoryChunk) % 16 == 0);
    
    auto* byteArray = reinterpret_cast<uint8_t*>(memoryChunk);
    std::iota(byteArray, byteArray + numBytes, 'a');
    
    std::for_each(byteArray, byteArray + numBytes, [](auto x) { std::cout << x << " "; });        
    std::cout << '\n';
    
    Deallocate(memoryChunk);
    
    return 0;
}