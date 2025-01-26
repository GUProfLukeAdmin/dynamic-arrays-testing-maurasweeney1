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
    std::cout << "After adding elements: Size = " << v.size() << ", Capacity = " << v.capacity() << v.capacity() << std::endl;
    v.resize(v.size() / 2);
    std::cout << "After resizing: Size = " << v.size() << ", Capacity = " << v.capacity() << v.capacity() << std::endl;
    v.shrink_to_fit();
    std::cout << "After shrinking: Size = " << v.size() << ", Capacity = " << v.capacity() << v.capacity() << std::endl;

    auto time = std::chrono::high_resolution_clock::now() - start;
    std::chrono::duration<double> total_duration = time;
    std::cout << "Total time taken: " << total_duration.count() * 1000 << " ms" << std::endl;
}

void part2() {
}

int main() {
    part1();
    part2();
    return 0;
}
