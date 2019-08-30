#include "add1.h"
#include "AppConfig.h"
#include <iostream>
int main(int argc, char** argv) {
    std::cout << "Name: " << APP_NAME << " Version: " << APP_VERSION_MAJOR << "." << APP_VERSION_MINOR << std::endl;
    std::cout << "Hello World" << std::endl;
    std::cout << "1 + 1 = " << add1(1) << std::endl;
    return 0;
}

