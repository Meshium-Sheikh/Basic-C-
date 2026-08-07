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
```
2. Swapping number by value only
```
```C++
# include <iostream>

void swap_value(int a, int b)

// void because the swap should not affect the orignal variables in main
{
    int temp = a;
    a = b;
    b = temp;
    
    std:: cout << "Inside swap_value function: a = " << a << " b = " << b << "\n";
}

int main()
{   
    int x = 10;
    int y = 20;
    
    std::cout << "Before call: x = " << x << "," << " y = " << y <<"\n";
    
    swap_value(x,y);
    

    std::cout << "After call: x = "<< y << ", b = " << x << "\n";
   
    return 0;
}
```
```
Exercise 3: Pass by Reference
```
```C++
#include <iostream>

void swap_reference(int &a, int&b)

// &a and &b act as aliases; values of x and y also change

{   

    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside swap_reference function: a = " << a << " b = " << b << "\n";
}

int main()  
{
    int x = 10;
    int y = 20;
    std::cout<<"Before call: x = " << x << " y = " << y << "\n";
    swap_reference(x,y);
    std::cout << "After call: x = " << x << ", y = " << y << "\n";
    
    return 0;
}
```















