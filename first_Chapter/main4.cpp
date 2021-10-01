#include <iostream>

int main() {
    using namespace std;
    int func_print(int);
    int value;
    cout << "Please enter a Celsius value: ";
    cin >> value;
    cout << endl <<value<<" degrees Celsius is "<< func_print(value) <<
    " degrees Fahrenheit." << '\n';

    return 0;
}

int func_print(int value) {
    return 1.8 * value +32;
}
