#include <array>
#include <iostream>

int main() {
    std::array<int, 30> actor = {1,3,5,7,9};
    float ideas = actor[1];
    std::cout << ideas << '\n';
}
