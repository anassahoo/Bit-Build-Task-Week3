#include <iostream>
#include <stdexcept>

// Custom exception class
class CustomException : public std::exception
 {
private:
    std::string message;
public:
    CustomException(const std::string& msg) : message(msg) {}
    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};

// Function that throws a custom exception if a condition is met
void riskyOperation(bool shouldThrow)
 {
    if (shouldThrow) 
    {
        throw CustomException("Something went wrong in riskyOperation!");
    }
    std::cout << "riskyOperation completed successfully!" << std::endl;
}

int main() 
{
    try {
        std::cout << "Attempting risky operation with no error:" << std::endl;
        riskyOperation(false);

        std::cout << "\nAttempting risky operation with error:" << std::endl;
        riskyOperation(true);
    } 
    catch (const CustomException& e) {
        std::cerr << "Caught a custom exception: " << e.what() << std::endl;
    } 
    catch (const std::exception& e) {
        std::cerr << "Caught a standard exception: " << e.what() << std::endl;
    }
     catch (...) {
        std::cerr << "Caught an unknown exception." << std::endl;
    }

    return 0;
}
