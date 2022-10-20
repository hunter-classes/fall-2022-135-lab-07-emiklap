#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Task A: Removing leading spaces") {
    CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
    CHECK(removeLeadingSpaces("                int main(){") == "int main(){");
    CHECK(removeLeadingSpaces("          cout << endl;") == "cout << endl;");
    CHECK(removeLeadingSpaces("cout << i;") == "cout << i;");
}

TEST_CASE("Task B: Counting Curly Brackets") {
    CHECK(countChar("                int main(){", '{') == 1);
    CHECK(countChar("                int main(){", '}') == 0);
    CHECK(countChar("    }", '}') == 1);
    CHECK(countChar("cout << i;", '{') == 0);
}

TEST_CASE("Task C: Adding Tabs") {
    CHECK(addTabs("int x = 1;", 2) == "\t\tint x = 1;");
    CHECK(addTabs("cout << endl;", -1) == "cout << endl;");
    CHECK(addTabs("cout << endl;", 0) == "cout << endl;");
}
