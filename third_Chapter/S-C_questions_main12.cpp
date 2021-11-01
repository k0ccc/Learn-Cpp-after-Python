#include <iostream>
int main() {
    float treacle[10] = {1,2,3,4,5,6,7,8,9,10};
    float * i = treacle;
    std::cout << i[0]<< '\n'<< i[9] << '\n';
}
