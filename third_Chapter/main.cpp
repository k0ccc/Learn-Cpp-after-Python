#include <iostream>
#include <string>
int main() {
    std::string name;
    std::string Lname;
    char grade;
    int age;
    std::cout << "What is your first name? " << '\n';
    getline(std::cin,name);
    std::cout << "What is your last name?" << '\n';
    getline(std::cin,Lname);
    std::cout << "What letter grade do you deserve?" << '\n';
    std::cin>>grade;
    grade = grade + 1;
    std::cout << "What is your age? " << '\n';
    std::cin>>age;
    std::cout << "Name: "<< Lname<< ", "<< name << '\n';
    std::cout << "Grade: "<< grade << '\n';
    std::cout << "Age: " << age <<'\n';

    return 0;
}
