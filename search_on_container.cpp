#include <algorithm>
#include <iostream>

template<typename Container, typename ValType>
bool SearchElement(const Container& container, const ValType& value)
{
    // using std::find to search for value in a container
    auto get = std::find(container.begin(), container.end(), value);

    // check if it existed or not
    return get != container.end();
}

int main()
{
    std::array<int, 6>my_arr{10, 32, 7, 5, 7, 19};
    int value;

    std::cout << "Enter number : ";
    std::cin >> value;
    

    if(SearchElement(my_arr, value))
    {
        std::cout << "Element " << value << " found in array" << std::endl;
    }
    else
    {
        std::cout << "Element " << value << " not found in array" << std::endl;
    }

    return 0;
}