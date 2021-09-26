#include <iostream>

int main() {
    using namespace std;
    int func_print(int);
    int value;
    cout << "Please enter a Celsius value: ";
    cin >> value;
    int value1;
    value1 = func_print(value);
    cout << endl <<value<<" degrees Celsius is "<< value1 <<
    " degrees Fahrenheit." << '\n';

    return 0;
}

int func_print(int value) {
    return 1.8 * value +32;
}
