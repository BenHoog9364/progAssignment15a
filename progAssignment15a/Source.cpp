// Ben Hoogsteden
// CIS 1202 101
// April 29, 2023


#include <iostream>
#include <cctype>

using namespace std;

char character(char start, int offset) {
    if (!isalpha(start)) {
        cout << "Error: Invalid character input" << endl;
        return '\0'; // return null character if input is invalid
    }

    if (offset < -26 || offset > 26) {
        cout << "Error: Invalid offset range" << endl;
        return '\0'; // return null character if offset is invalid
    }

    start = toupper(start);
    int end = start + offset;

    if (end < 'A') {
        cout << "Error: Invalid offset range" << endl;
        return '\0'; // return null character if offset goes below 'A'
    }
    else if (end > 'Z') {
        cout << "Error: Invalid offset range" << endl;
        return '\0'; // return null character if offset goes above 'Z'
    }

    return static_cast<char>(end);
}

int main() {
    cout << "character('a', 1) returns: " << character('a', 1) << endl;  // should print 'B'
    cout << "character('a', -1) returns: " << character('a', -1) << endl;  // should print nothing
    cout << "character('Z', -1) returns: " << character('Z', -1) << endl;  // should print 'Y'
    cout << "character('?', 5) returns: " << character('?', 5) << endl;  // should print nothing

    return 0;
}