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
}

void part2() {
    //TODO: Implement part 2
}

int main() {
    part1();
    part2();
    return 0;
}
