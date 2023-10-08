#include <iostream>


int main()
{
    char my_char;

    std::cout << "Enter a character : ";
    std::cin >> my_char;

    if(std::isdigit(my_char))
    {
        std::cout << my_char << " is a digit." << std::endl;
    }
    else
    {
        std::cout << my_char << " is not a digit." << std::endl;
    }

    return 0;
}