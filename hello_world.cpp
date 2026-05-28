#include <iostream>
#include <string>

// Новый комментарий. С исправленными именами переменных.
int main() {
    std::string user_name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, user_name);
    
    std::cout << "Hello world from " << user_name << std::endl;
    
    return 0;
}
