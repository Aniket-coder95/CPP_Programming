#include <iostream>
#include <string>

void generatePermutations(std::string& str, int start) {
    if (start == str.size() - 1) {
        std::cout << str << std::endl;  // Print the permutation
        return;
    }

    for (int i = start; i < str.size(); ++i) {
        std::swap(str[start], str[i]);  // Swap characters
        generatePermutations(str, start + 1);  // Recurse for remaining characters
        std::swap(str[start], str[i]);  // Backtrack (restore original order)
    }
}

void printAllPermutations(const std::string& str) {
    std::string temp = str;  // Create a copy to avoid modifying the original string
    generatePermutations(temp, 0);
}

int main() {
    std::string input = "abc";
    printAllPermutations(input);
    return 0;
}
