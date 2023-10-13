#include <cstddef>
#include <cstring>
#include <iostream>
#include <ostream>
#include <string>

class MyString{
    private:
        char *data;
        size_t str_length;

    public:
        // Default constructor
        MyString() : data{nullptr}, str_length{0} {
            std::cout << "Default constructor" << std::endl;
        }

        // parameterized constructor
        MyString(const char *str) : data{nullptr}, str_length{0} {
            std::cout << "Parameterized Constructor" << std::endl;
            if(str)
            {
                str_length = std::strlen(str);
                data = new char[str_length + 1];
                strcpy(data, str);
            }
        }

        // Copy constructor
        MyString(const MyString& other_str) : data{nullptr}, str_length{other_str.str_length} {
            if(other_str.data)
            {
                std::cout << "Copy constructor" << std::endl;
                data = new char[str_length + 1];
                strcpy(data, other_str.data);
            }
        }

        // Move constructor
        MyString(MyString&& other_str) : data{other_str.data}, str_length{other_str.str_length} {
            std::cout << "Move Constructor" << std::endl;
            other_str.data = nullptr;
            other_str.str_length = 0;
        }

        // Distructor
        ~MyString() {
            std::cout << "Distructor" << std::endl;
            delete [] data;
        }

        // Copy assignment operator for the same type
        MyString &operator=(const MyString& other){
            std::cout << "Copy assignment operator" << std::endl;
            if(this != &other)
            {
                delete [] data;
                str_length = other.str_length;

                if(other.data)
                {
                    data = new char[str_length + 1];
                    std::strcpy(data, other.data);
                }
                else
                {
                    data = nullptr;
                }
            }
            return *this;
        }

        // copy assignment operator for C-style string
        MyString &operator=(const char *str){
            std::cout << "Copy assignment operator for C-style string" << std::endl;

            delete [] data;

            // Initialize with new data
            if(str)
            {
                str_length = std::strlen(str);
                data = new char[str_length + 1];
                std::strcpy(data, str);
            }
            else
            {
                data = nullptr;
                str_length = 0;
            }
            return *this;
        }

        // copy assignment operator for C++ string
        MyString &operator=(const std::string& str){
            std::cout << "Copy assignment operator for C++ string" << std::endl;

            delete [] data;

            // Initialize with new data
            if(!str.empty())
            {
                str_length = str.length();
                data = new char[str_length + 1];
                std::strcpy(data, str.c_str());
            }
            else
            {
                data = nullptr;
                str_length = 0;
            }
            return *this;
        }

        // Move assignment operator
        MyString &operator=(MyString&& other)
        {
            if(this != &other)
            {
                delete [] data;
                data = other.data;
                str_length = other.str_length;

                other.data = nullptr;
                other.str_length = 0;
            }

            return *this;
        }

        // Concatenation operator '+'
        MyString operator+(const MyString& other) const {
            MyString result;
            result.str_length = str_length + other.str_length;

            result.data = new char[result.str_length];
            std::strcpy(result.data, data);
            std::strcat(result.data, other.data);

            return result;
        }

        // is equal operator
        bool operator==(const MyString& other){
            return (str_length == other.str_length) && (std::strcmp(data, other.data) == 0);
        }

        // output stream operator
        friend std::ostream &operator<<(std::ostream &out, const MyString &str){
            if(str.data)
            {
                out << str.data;
            }
            return out;
        }
        void printing_data()
        {
            std::cout << data << std::endl;
        }
};

int main()
{
    MyString mohamed;
    std::string greating = "Hi, Mohamed";
    mohamed = "Hello, Mohamed";
    mohamed = greating;
    mohamed.printing_data();
    std::cout << "-------------------------------------------------" << std::endl;
    
    MyString name1 = "mohamed";
    MyString name2 = "Mohamed";

    bool check_eq = (name1 == name2);

    std::cout << check_eq << std::endl;
    std::cout << name1 << std::endl;
    std::cout << name2 << std::endl;

    name1 = name2;

    std::cout << name1 << std::endl;
    std::cout << name2 << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;

    MyString first_name = "Mohamed";
    MyString second_name = "Ali";
    MyString fullname = first_name + second_name;

    std::cout << fullname << std::endl;
    return 0;
}