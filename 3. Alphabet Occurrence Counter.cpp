#include <iostream>
#include <string>
#include <unordered_map>

void countAlphabets(const std::string& text) {
    std::unordered_map<char, int> freq;
    for (char c : text) {
        if (std::isalpha(c)) {
            freq[std::tolower(c)]++;
        }
    }
    std::cout << "Alphabet frequencies:" << std::endl;
    for (const auto& pair : freq) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Please provide a text as command line argument." << std::endl;
        return 1;
    }
    std::string text = argv[1];
    countAlphabets(text);
    return 0;
}



output
Alphabet frequencies:
d: 1
e: 1
h: 1
l: 3
o: 2
r: 1
w: 1
