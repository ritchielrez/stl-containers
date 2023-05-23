#include <algorithm>
#include <array>
#include <iostream>
#include <numeric>

int main()
{
    // Usage of C-style arrays
    int rawArr[100];

    std::iota(std::begin(rawArr), std::end(rawArr), 0);

    for (auto &e : rawArr)
    {
        std::cout << e << " ";
    }
    std::cout << "\n\n";

    // C-style arrays can cause problems like this
    // rawArr[1000] = 10;
    // Here we are trying to access a out of bound index

    // Usage of stl container std::array
    std::array<int, 100> containerArr;

    std::iota(std::begin(containerArr), std::end(containerArr), 0);

    for (auto &e : containerArr)
    {
        std::cout << e << " ";
    }
    std::cout << "\n";

    // In std::array though, you cannot acces out of bound indexes,
    // Because it has a `at()` method, which can be used to access
    // a specific index of an array, but it also does bounds checking
    containerArr.at(1000) = 10;

    // std::array just like other stl containers, has more useful 
    // methods which you cannot acces by just using a C-style array.
    // Though some people may prefer to use the raw version of an array,
    // as abstraction can be sometimes problematic.

    return 0;
}
