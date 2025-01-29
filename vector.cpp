#include <vector>
#include <iostream>
#include <chrono>

void part1() {
    std::vector<int> v;
    for (int i = 0; i < 50000; ++i) {
        v.push_back(i);
    }
    std::cout << "After adding elements: Size = " << v.size() << ", Capacity = " << v.capacity() << std::endl;
    v.resize(v.size() / 2);
    std::cout << "After resizing: Size = " << v.size() << ", Capacity = " << v.capacity() << std::endl;
    v.shrink_to_fit();
    std::cout << "After shrink_to_fit(): Size = " << v.size() << ", Capacity = " << v.capacity() << std::endl;
}

void part2() {
    std::vector<bool> boolVector(10000);
    std::vector<char> charVector(10000);
    size_t boolVectorMemory = boolVector.capacity() / 8;
    size_t charVectorMemory = charVector.capacity();

    std::cout << "Memory usage of std::vector<bool>: " << boolVectorMemory << " bytes" << std::endl;
    std::cout << "Memory usage of std::vector<char>: " << charVectorMemory << " bytes" << std::endl;
}

int main() {
    part1();
    part2();
    return 0;
}
