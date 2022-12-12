#include <iostream>
#include <cctype>
#include <string>

/**
 * Removes the leading spaces of a given line
 * @param line the string that the function will remove the leading spaces from
 */
std::string removeLeadingSpaces(std::string line) {
    std::string return_string;
    int counter = 0;
    bool is_leading_space = true;

    while(is_leading_space) {
        if (!isspace(line[counter])) {
            is_leading_space = false;
        } else {
            counter++;
        }
    }

    return_string += line.substr(counter);
    return return_string;
}

/**
 * Counts the number of times a given charatcer is present in a given string
 * @param line the string that the function will count the characers in
 * @param c the character the function will count for
 */
int countChar(std::string line, char c) {
    int counter = 0;

    for (int i = 0; i < line.length(); i++) {
        if (line[i] == c) {
            counter++;
        }
    }
    return counter;
}

/**
 * Adds 1 or more tabs to the beginning of a given string depending on the number specified
 * @param line the string the function will modify
 * @param num_of_tabs the number of tabs that the functino will add to the string
 */
std::string addTabs(std::string line, int num_of_tabs) {
    std::string tabs;

    for (int i = 0; i < num_of_tabs; i++) {
        tabs += "\t";
    }

    return tabs + line;
}
