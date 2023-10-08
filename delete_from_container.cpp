#include <iostream>
#include <algorithm>
#include <vector>

// template for generic containers and value data types
template<typename Container, typename ValType>
void Delete_elemet(Container& container, const ValType value)
{
    // Using std::remove to move the element to be deleted to the end
    auto end = std::remove(container.begin(), container.end(), value);

    // erase the element from the end
    container.erase(end, container.end());
}


int main()
{
    std::vector<int>my_arr{10, 32, 7, 5, 7, 19};
    int delete_val;

    std::cout << "Enter number want to be deleted from array : ";
    std::cin >> delete_val;

    Delete_elemet(my_arr, delete_val);

    std::cout << "printing array after deleting " << delete_val << std::endl;
    for (auto val : my_arr)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}