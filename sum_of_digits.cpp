#include <cmath>
#include <iostream>

int num;
int num_of_digits;
int sum_of_digits = 0;

int main()
{
    std::cout << "Enter an integer : ";
    std::cin >> num;
    num_of_digits = std::log10(num) + 1;

    int temp = num;

    for(int i = 1; i <= num_of_digits; i++)
    {
        sum_of_digits += (temp%10);
        temp = temp / 10;
    }

    std::cout << "The sum of digits of " << num << " is " <<  sum_of_digits << std::endl;

    return 0;
}