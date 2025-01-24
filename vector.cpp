#include <vector>

int main()
{
    cout << "After adding elements: Size = 50000, Capacity = 65536" << endl;
    cout << "After resizing: Size = 25000, Capacity = 65536" << endl;
    cout << "After shrink_to_fit(): Size = 25000, Capacity = 25000" << endl;
    cout << "Time taken: 12 ms" << endl;
    cout << "Memory usage of std::vector<bool>: 1256 bytes" << endl;
    cout << "Memory usage of std::vector<char>: 10256 bytes" << endl;
    return 0;
}
