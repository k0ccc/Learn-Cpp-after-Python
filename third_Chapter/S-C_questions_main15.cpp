#include <iostream>
int main() {
    struct fish {
        char kind[20];
        int weight;
        double length;
    };
    fish * red_fish = new fish;
    std::cout << "Enter kind of fish: ";
    std::cin >> red_fish->kind;
}
