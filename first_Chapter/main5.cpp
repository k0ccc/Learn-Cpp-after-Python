#include <iostream>

int main() {
    using namespace std;
    double func_print(double);
    double value;
    cout << "Enter the number of light years: ";
    cin >> value;
    cout << endl <<value<<" light years =  "<<  func_print(value) <<
    " astronomical units." << '\n';
    return 0;
}

double func_print(double value) {
    return value * 63240 ;
}
