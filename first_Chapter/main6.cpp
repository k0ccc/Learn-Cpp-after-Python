#include <iostream>

int main() {
    int func_print(int,int);
    int hours, minutes;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: " ;
    std::cin >> minutes;
    func_print(hours,minutes);
    return 0;
}
int func_print(int hours,int minutes ) {
    std::cout << "Time: " <<hours <<":"<<minutes<<'\n';
}
