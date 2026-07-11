#include <iostream>
// most efficient
int main()
{
    std::cout <<"Enter an integer: ";

    // initialising num to store user's number
    int num{ };
    
    // getting user's input
    std::cin >> num;

    std:: cout<<"Double that num is: " << num*2 <<'\n';
    
    return 0;
}


// function with 3 alternative options
int main1()
// To add feature: an option to run desirable doubling.
{   
    std::cout <<"Enter an integer: ";

    // initialising num to store user's number
    int num{ };
    
    // getting user's input
    std::cin >> num;

    //Solution1. least good solution because we're overwriting the orignal value which we may need later on
    num = num *2;
    std::cout << "Least efficient way~\n";

    std::cout <<"Double that num is: " << num <<"\n";



    // Solution2. Calculating double in a moderately good way
    /*
    The the only drawback
    is that we created a single-used variable
    */
    int doublenum{ num *2 };

    // since we're using the same variable(to understand)
    std::cout <<"Double that num is: " << doublenum <<'\n';


    /*
    Best way to double the number
    */
   std:: cout<<"Double that num is" << num*2 <<'\n';

    // answer will be 32 because we are using the same variable
    return 0;
}
