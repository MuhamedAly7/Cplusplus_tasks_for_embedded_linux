#include <iostream>
#include <algorithm>


int main()
{
    // creating my array
    std::array<int, 6> my_arr = {1, 3, 5, 7, 8, 9};

    bool any_even = std::any_of(my_arr.begin(), my_arr.end(), [](int num){return num%2 == 0;});

    if(any_even)
    {
        std::cout << "There is element in my array is even number." << std::endl;
    }
    else {
        std::cout << "My array has no any even number." <<std::endl;
    }
    return 0;
}