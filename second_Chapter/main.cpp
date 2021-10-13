#include <iostream>
// using metric system, fuck imperial system.
int main() {
    const double c_ft = 0.083;
    double growth;
    std::cout << "input growth :____\b\b\b\b";
    std::cin >> growth;
    std::cout << "growth in ft= " <<growth * c_ft<< '\n';
    return 0;
}
