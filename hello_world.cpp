#include <iostream>
#include <string>

// Исправленный код без using namespace std;
int main() {
    std::string user_name;                    // изменили имя переменной
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, user_name);        // изменили имя переменной
    
    std::cout << "Hello world from " << user_name << std::endl;
    
    return 0;
}
