#include <vector>
#include <iostream>
#include <chrono>

void part1() {
    std::vector<int> v;
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 50000; ++i) {
        v.push_back(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;
    std::cout << "After adding elements: Size = " << v.size() << ", Capacity = " << v.capacity() << std::endl;
    v.resize(v.size() / 2);
    std::cout << "After resizing: Size = " << v.size() << ", Capacity = " << v.capacity() << std::endl;
    v.shrink_to_fit();
    std::cout << "After shrink_to_fit(): Size = " << v.size() << ", Capacity = " << v.capacity() << std::endl;

    auto time = std::chrono::high_resolution_clock::now() - start;
    std::chrono::duration<double> total_duration = time;
    std::cout << "Total time taken: " << total_duration.count() * 1000 << " ms" << std::endl;
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
