cat > hello_world.cpp << 'EOF'
#include <iostream>
#include <string>

// Исправленный_код_без_using namespace std;
// Автор: Ревин Д.А.
// Дата: 28.05.2026

// Главная функция программы
int main() {
    std::string name;
    
    // Запрашиваем имя пользователя через стандартный поток ввода
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    // Выводим приветствие в стандартный поток вывода
    std::cout << "Hello world from " << name << std::endl;
    
    return 0;
}
EOF
