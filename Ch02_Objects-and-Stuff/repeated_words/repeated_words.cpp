#include <iostream>

int main()
{
    std::string previous, current;

    while (std::cin>>current) {
        if (previous == current)
            std::cout << "Repeated Word!\n";
        previous = current;
    }
}