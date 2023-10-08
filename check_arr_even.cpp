#include <algorithm>
#include <array>
#include<iostream>



int main()
{
    // creating my array
    std::array<int, 6> my_arr = {2, 4, 6, 8, 10, 12};

    // use std::all_of with lambda function to check if all element are even or not
    bool all_even = std::all_of(my_arr.begin(), my_arr.end(), [](int num){return num%2 == 0;});

    // check all_even if equal to 1 or 0
    if(all_even)
    {
        std::cout << "All elements in my array are even numbers" << std::endl;
    }
    else {
        std::cout << "All elements in my array are not even numbers" <<std::endl;
    }
    return 0;
}