#include <algorithm>
#include <array>
#include <iostream>

std::array<int, 3> three_nums;

int main()
{
    // recieve three numbers from user
    for(int i = 0; i < 3; i++)
    {
        std::cout << "Enter the num" << i+1 << ": ";
        std::cin >> three_nums.at(i);
    }

    // get the the pointer point to the maxnimum element in the array of 3 elements
    auto max_element = std::max_element(three_nums.begin(), three_nums.end());
    std::cout << "The maximum number : " << *max_element << std::endl;
    return 0;
}