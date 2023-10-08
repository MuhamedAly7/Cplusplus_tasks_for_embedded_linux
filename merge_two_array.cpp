#include <algorithm>
#include <array>
#include <cstddef>
#include <iostream>

// this function to merge two arrays with any sizes and any data types
template<typename data_type, std::size_t size1, std::size_t size2>
std::array<data_type, size1 + size2> merge_two_array(const std::array<data_type, size1>& arr1, const std::array<data_type, size2>& arr2)
{
    std::array<data_type, size1 + size2>merged_array;

    // merging two arrays
    std::copy(arr1.begin(), arr1.end(), merged_array.begin());
    std::copy(arr2.begin(), arr2.end(), merged_array.begin() + arr1.size());

    return merged_array;
}


int main()
{
    std::array<int, 4>arr1{1, 2, 3, 4};
    std::array<int, 4>arr2{5, 6, 7, 8};

    const size_t size_arr1 = sizeof(arr1) / sizeof(arr1.at(0));
    const size_t size_arr2 = sizeof(arr2) / sizeof(arr2.at(0));

    //std::array<int, size_arr1 + size_arr2>merged_arr;

    //std::copy(arr1.begin(), arr1.end(), merged_arr.begin());
    //std::copy(arr2.begin(), arr2.end(), merged_arr.begin() + arr1.size());

    auto merged_arr = merge_two_array(arr1, arr2);

    std::cout << "Merged Array : " << std::endl;
    for(int element : merged_arr)
    {
        std::cout << element << " "; 
    }
    std::cout << std::endl;

    return 0;
}