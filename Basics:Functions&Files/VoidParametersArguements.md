# Learncpp.com chapter 2

## Void Function means : non-value returning function

- Does not need a return statement because already returns a value (will be redundant otherwise)

##  Find Errors in these code below:
### 1.
``` C++
#include <iostream>

void printA()
{
    std::cout << "A\n";
}

int main()
{
    std::cout << printA() << '\n';

    return 0;
}
```
- Error in line 18.
- Since Void function doesn't return a value there'd be a compliling error

### 2.
``` C++
#include <iostream>

int getDouble()
{
    std::cout << "Enter a number: ";
    int value{};
    std::cin >> value;
    return value;
}
int main()
{
    getDouble();
    std::cout << "Doublle is: " << value*2 ;
    return 0;
}
```
