#include <algorithm>
#include <array>
#include<iostream>


int main()
{
    std::array<int, 9>my_arr{5, 2, 8, 1, 7, 3, 6, 4, 9};

    // use std::sort with lambda function for sorting
    std::sort(my_arr.begin(), my_arr.end(), [](int a, int b){return a < b;});

    std::cout << "Sorted Array {ascending}: ";
    for(int num : my_arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;


    // use std::sort with lambda function for sorting
    std::sort(my_arr.begin(), my_arr.end(), [](int a, int b){return a > b;});

    std::cout << "Sorted Array {descending}: ";
    for(int num : my_arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;


    return 0;
}