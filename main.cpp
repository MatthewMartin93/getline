#include <iostream>
#include <string>

int num;

int main() {
    std::cout << "Song Ranking" << std::endl;
    std::cout << "How many songs would you like to rank?" << std::endl;
    std::cin >> num;
    std::cin.ignore(); // Clear the newline character from the input buffer

    std::string ranking[num]; // Use std::string to store song titles
    for (int i = 0; i < num; i++) {
        std::cout << "What will be your number " << i + 1 << " song?" << std::endl;
        std::getline(std::cin, ranking[i]);
    }

    std::cout << "\nYour top " << num << " songs are: " << std::endl;
    for (int i = 0; i < num; i++) {
        std::cout << ranking[i] << std::endl;
    }
    return 0;
}
