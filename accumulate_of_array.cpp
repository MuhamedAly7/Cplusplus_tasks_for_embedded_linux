#include <array>
#include <iostream>
#include <numeric>


int main()
{
    // creating my array
    std::array<int, 5>my_arr{1, 2, 3, 4, 5};

    // using std::accumulate to calculate the sum of elements with init number
    int sum = std::accumulate(my_arr.begin(), my_arr.end(), 5);

    // print the summation of elements with init number
    std::cout << "sum of array element : " << sum << std::endl;

    return 0;
}