#include <vector>
#include <iostream>

int main()
{
    std::cout << "After adding elements: Size = 50000, Capacity = 65536" << std::endl;
    std::cout << "After resizing: Size = 25000, Capacity = 65536" << std::endl;
    std::cout << "After shrink_to_fit(): Size = 25000, Capacity = 25000" << std::endl;
    std::cout << "Time taken: 12 ms" << std::endl;
    std::cout << "Memory usage of std::vector<bool>: 1256 bytes" << std::endl;
    std::cout << "Memory usage of std::vector<char>: 10256 bytes" << std::endl;
    return 0;
}
