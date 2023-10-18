#include <iostream>
#include <cstring>

int firstNonRepeatingCharacter(const std::string& s) {
    int charCount[256] = {0};

    // Count the frequency of each character
    for (char c : s) {
        charCount[c]++;
    }

    // Find the first non-repeating character
    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }

    // No non-repeating character found
    return -1;
}

int main() {
    std::string s;
    std::cin >> s;

    int index = firstNonRepeatingCharacter(s);
    std::cout << index << std::endl;

    return 0;
}

