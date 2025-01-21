#include <iostream>

int main() {
    std::string user_input;
    
    std::cout << "Hello, my name is Hal!" << std::endl;
    std::cout << "What would you like me to do?" << std::endl;
    getline(std::cin, user_input);
    std::cout << "I am sorry, I cannot do that." << std::endl;

    return 0;
}