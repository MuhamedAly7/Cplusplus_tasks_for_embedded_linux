#include <algorithm>
#include <array>
#include <cstddef>
#include <iostream>

template<typename datatype, std::size_t Size>
void FindEvenOdd(const std::array<datatype, Size>& arr)
{
    std::array<datatype, Size> temp_arr = arr;

    auto rearranged = std::partition(temp_arr.begin(), temp_arr.end(), [](datatype num){return (num%2) == 0;});


    // printing even numbers
    std::cout << "Even numbers: ";
    std::for_each(temp_arr.begin(), rearranged, [](datatype num){std::cout << num << " ";});
    std::cout << std::endl;

    // printing odd numbers
    std::cout << "Odd numbers: ";
    std::for_each(rearranged, temp_arr.end(), [](datatype num){std::cout << num << " ";});
    std::cout << std::endl;
}

int main()
{
    std::array<int, 10> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    FindEvenOdd(numbers);

    return 0;
}