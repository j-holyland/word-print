#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words; // Vector to store the words
    std::string word; // String to store each word read from input

    std::cout << "Enter a sequence of words separated by whitespace, including newline. Enter 'Quit' to terminate input:\n";

    // Read words from input until 'Quit' is entered
    while (std::cin >> word && word != "Quit") {
        words.push_back(word); // Add word to vector
    }

    // Print the words in the order they were entered
    std::cout << "Words entered:\n";
    for (const auto& w : words) {
        std::cout << w << "\n";
    }

    return 0;
}