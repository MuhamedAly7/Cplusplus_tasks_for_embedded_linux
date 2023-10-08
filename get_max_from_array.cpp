#include <algorithm>
#include <array>
#include <cstddef>
#include <iostream>
#include <stdexcept>
#include <vector>

template <typename T, std::size_t N>
int find_max_in_array(const std::array<T, N>& array)
{
    auto max_element = std::max_element(array.begin(), array.end());

    if(max_element != array.end())
    {
        return *max_element;
    }
    else
    {
        throw std::runtime_error("Array is empty!!");
    }
}

int main()
{
    std::array<int, 6>my_arr{10, 32, 7, 5, 7, 19};
    try
    {
        int max = find_max_in_array(my_arr);
        std::cout << "The maximum number in array is : " << max << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }

    return 0;
}