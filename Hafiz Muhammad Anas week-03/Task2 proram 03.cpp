#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

// Function to demonstrate vector operations
void demonstrateVector() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Add elements to the vector
    numbers.push_back(6);
    numbers.push_back(7);

    // Access elements
    std::cout << "Vector elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort the vector
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    // Print sorted vector
    std::cout << "Sorted vector elements in descending order: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove the last element
    numbers.pop_back();
    std::cout << "Vector elements after pop_back: ";
    for (int num : numbers) 
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Function to demonstrate map operations
void demonstrateMap()
 {
    std::map<std::string, int> nameAgeMap;

    // Insert elements into the map
    nameAgeMap["Alice"] = 25;
    nameAgeMap["Bob"] = 30;
    nameAgeMap["Charlie"] = 35;

    // Access elements
    std::cout << "Map elements:" << std::endl;
    for (const auto& pair : nameAgeMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find an element
    std::string key = "Bob";
    auto it = nameAgeMap.find(key);
    if (it != nameAgeMap.end()) {
        std::cout << "Found " << key << " with age " << it->second << std::endl;
    } else {
        std::cout << key << " not found in the map" << std::endl;
    }

    // Remove an element
    nameAgeMap.erase("Alice");
    std::cout << "Map elements after erasing Alice:" << std::endl;
    for (const auto& pair : nameAgeMap) 
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

int main() 
{
    std::cout << "Demonstrating vector operations:" << std::endl;
    demonstrateVector();

    std::cout << "\nDemonstrating map operations:" << std::endl;
    demonstrateMap();

    return 0;
}
