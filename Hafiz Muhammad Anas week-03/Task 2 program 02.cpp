#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inFile("names.txt");

    if (!inFile) {
        std::cerr << "Error opening file for reading." << std::endl;
        return 1;
    }

    std::string name;
    while (std::getline(inFile, name)) {
        std::cout << name << std::endl;
    }

    inFile.close();
    std::cout << "Names read from names.txt successfully." << std::endl;

    return 0;
}
