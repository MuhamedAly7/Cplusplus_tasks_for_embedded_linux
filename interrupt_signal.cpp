#include <csignal>
#include <iostream>

void signal_handler(int signal)
{
    std::cout << "Interrupt signal recieved." << std::endl;

    // perform any actions

    // terminate the program
    std::exit(signal);
}

int main()
{
    // signal handler
    std::signal(SIGINT, signal_handler);

    std::cout << "Press (CTRL + C) to trigger the signal." << std::endl;

    // the program keep running here
    while (1)
    {
        // the main program
    }

    return 0;
}