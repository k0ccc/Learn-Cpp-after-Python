#include <iostream>

int main() {
    using namespace std;
    double func_print(double);
    double value;
    cout << "Enter the number of light years: ";
    cin >> value;
    double value1;
    value1 = func_print(value);
    cout << endl <<value<<" light years =  "<< value1 <<
    " astronomical units." << '\n';
    return 0;
}

double func_print(double value) {
    return value * 63240 ;
}
