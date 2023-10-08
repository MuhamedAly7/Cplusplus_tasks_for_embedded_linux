#include <algorithm>
#include <array>
#include <iostream>
#include <numeric>


int main()
{
    // create array with size (max_num - starting num) + 1
    // in this case we will create array 991 size based on this (1000 - 10) + 1
    std::array<int, 991>my_arr;
    std::iota(my_arr.begin(), my_arr.end(), 10);

    // printing filled array
    for(int num : my_arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}