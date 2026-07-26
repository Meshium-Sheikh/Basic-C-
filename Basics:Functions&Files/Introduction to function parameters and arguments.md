## Find error(s) in these codes
``` C++
// Wanting to put output like in its own function
#include <iostream>

int getValue()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    
    return input;
}

void Output()
{
    std::cout << num << " doubled is " num * 2 << '\n';
    
}

int main()
{
    int num { getValue()};
    Output();
    return 0;
}

'''
