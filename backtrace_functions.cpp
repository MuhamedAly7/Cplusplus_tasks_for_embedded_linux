#include <iostream>
#include <functional>

// Macro to simplify CallTrace callTrace(__PRETTY_FUNCTION__)
#define TRACE_FUNCTION CallTrace callTrace(__PRETTY_FUNCTION__)

class CallTrace {
public:
    CallTrace(const char* functionName) : functionName_(functionName) {
        std::cout << "Entering: " << functionName_ << std::endl;
    }

    ~CallTrace() {
        std::cout << "Exiting: " << functionName_ << std::endl;
    }

private:
    const char* functionName_;
};

// Example usage
void MyFunction1()
{
    TRACE_FUNCTION;

    // Your function logic goes here
    std::cout << "Inside MyFunction1." << std::endl;
}

void Myfunction2()
{
    TRACE_FUNCTION;

    std::cout << "Inside MyFunction2." << std::endl;
}

int main() {
    TRACE_FUNCTION;

    MyFunction1();
    Myfunction2();

    return 0;
}