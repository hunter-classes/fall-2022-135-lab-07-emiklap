#include <iostream>
#include <fstream>
#include "funcs.h"

int main() {

    std::ofstream newCode;
    newCode.open("fixed-code.cpp");

    std::cout << "\n Task A: Removing Leading Spaces: \n";
    std::string line = "";
    int tabs = 0;

    while ( getline(std::cin, line) ) {
        tabs -= countChar(line, '}');
        //for the sake of demonstarting the lab I will have the fixed code print on the terminal and saved to a new file
        std::cout << addTabs(removeLeadingSpaces(line), tabs) << std::endl;
        newCode << addTabs(removeLeadingSpaces(line), tabs) << std::endl;
        tabs += countChar(line, '{');
    }

    newCode.close();
    return 0;
}
