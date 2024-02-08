#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

bool isSameRow(const std::string& word) {
    std::unordered_map<char, int> rowMap;

    // Define the keyboard rows
    std::vector<std::string> keyboardRows = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

    // Populate the rowMap
    for (int i = 0; i < keyboardRows.size(); ++i) {
        for (char c : keyboardRows[i]) {
            rowMap[c] = i;
        }
    }

    // Convert the word to lowercase
    std::string lowercaseWord = word;
    std::transform(lowercaseWord.begin(), lowercaseWord.end(), lowercaseWord.begin(), ::tolower);

    // Check if all characters in the word are in the same row
    int row = rowMap[lowercaseWord[0]];
    for (char c : lowercaseWord) {
        if (row != rowMap[c]) {
            return false;
        }
    }

    return true;
}

int main() {
    std::vector<std::string> words_to_check = {"hello", "world", "C", "example", "row"};

    for (const std::string& word : words_to_check) {
        if (isSameRow(word)) {
            std::cout << "true\n";
        } else {
            std::cout << "false\n";
        }
    }

    return 0;
}
