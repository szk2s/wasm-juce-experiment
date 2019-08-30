#include "add1.h"
#include "audio.h"
#include <iostream>
int main(int argc, char** argv) {
    std::cout << "Hello World" << std::endl;
    std::cout << "1 + 1 = " << add1(1) << std::endl;
    initializeJuce();
    playTestSound();
    return 0;
}

