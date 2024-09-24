#include <iostream>

swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int sum(int x, int y)
{
    return (x + y);
}
int diff(int x, int y)
{
    return (x - y);
}
int main()
{
    int a, b;
    std::cout << "Enter number A: ";
    std::cin >> a;
    std::cout << "Enter number B: ";
    std::cin >> b;
    // EX2
    swap(a, b);
    // EX3
    sum(a, b);
    diff(a, b);

    // #EX 4
    std::string firstName = "John";
    std::string lastName = "Doe";
    int age = 30;
    std::string gender = "male";
    std::string personalID = "012345678";    // Số ID cá nhân
    std::string employeeNumber = "00000001"; // Số nhân viên duy nhất

    // In thông tin nhân viên ra màn hình
    std::cout << "Employee Information:" << std::endl;
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Personal ID: " << personalID << std::endl;
    std::cout << "Employee Number: " << employeeNumber << std::endl;
}
