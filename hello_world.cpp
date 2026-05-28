cat > hello_world.cpp << 'EOF'
#include <iostream>
#include <string>

// Исправленный код без using namespace std;
int main() {
    std::string name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    std::cout << "Hello world from " << name << std::endl;
    
    return 0;
}
EOF
