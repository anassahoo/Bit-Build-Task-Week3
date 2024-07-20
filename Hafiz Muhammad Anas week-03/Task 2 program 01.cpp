#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::vector<std::string> names = {"Ali", "Bob", "Charlie", "David", "Eve"};
    std::ofstream outFile("Hafiz Muhammad Anas.txt");

    if (!outFile) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    for (const std::string& name : names) {
        outFile << name << std::endl;
    }

    outFile.close();
    std::cout << "Names written to Hafiz Muhammad Anas.txt successfully." << std::endl;

    return 0;
}
