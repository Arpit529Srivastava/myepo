#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};

    // Print vector before removal
    std::cout << "Before removal: ";
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Remove every alternative element
    vec.erase(vec.begin() + 1, vec.end(), 2);

    // Print vector after removal
    std::cout << "After removal: ";
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
