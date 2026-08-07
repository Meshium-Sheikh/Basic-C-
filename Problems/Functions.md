```
1. Adding 2 numbers using functions
```
```C++
#include <iostream>


int add(int a, int b)
{
    return a + b;
}

int main()
 {
    int num1 = 15;
    int num2 = 27;
    
    // Function call and storing the returned value
    int sum = add(num1, num2);
    
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    
    // Another way to call the function
    std::cout << "3 + 7 = " << add(3, 7) << std::endl;
    
    return 0;
}
```
