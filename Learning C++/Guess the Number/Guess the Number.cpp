// Libraries
#include <cmath>
#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));

    int attempts = 0;
    int guess = 0;
    int number = rand() % 1000;

    while (guess != number)
    {  
        attempts++;
        
        std::cout << "Your guess: ";
        std::cin >> guess;

        if (guess > number)
        {
            std::cout << "Too High\n\n";
        }
        if (guess < number)
        {
            std::cout << "Too Low\n\n";
        }
    }
    std::cout << "You won in " << attempts << " attempts!" << std::endl;
    system("timeout /t -1");
}
