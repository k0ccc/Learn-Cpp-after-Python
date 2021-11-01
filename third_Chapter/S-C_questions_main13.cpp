#include <iostream>
#include <vector>
int main() {
    int i;
    std::cin >> i;
    int * o = new int [i];
    std::vector<int> v (i);
    delete [] o;
}
