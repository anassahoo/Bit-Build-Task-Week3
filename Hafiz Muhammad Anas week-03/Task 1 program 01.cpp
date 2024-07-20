#include <iostream>
using namespace std;

// Template function to return the maximum of two parameters
template <typename T>
T getMax(T a, T b)
 {
    return (a > b) ? a : b;
}

int main() 
{
    int a = 5, b = 10;
    cout << "Max of " << a << " and " << b << " is " << getMax(a, b) << endl;

    double x = 5.5, y = 2.3;
    cout << "Max of " << x << " and " << y << " is " << getMax(x, y) << endl;

    char c1 = 'a', c2 = 'z';
    cout << "Max of " << c1 << " and " << c2 << " is " << getMax(c1, c2) << endl;

    return 0;
}
