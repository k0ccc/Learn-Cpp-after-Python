#include <iostream>

int main() {
    using namespace std;
    void func_print(void);
    void func_print1(void);
    func_print();
    func_print();
    func_print1();
    func_print1();
    return 0;
}
void func_print(void) {
    std::cout << "Three blind mice" << '\n';
}
void func_print1(void) {
    std::cout << "See how they run" << '\n';
}
