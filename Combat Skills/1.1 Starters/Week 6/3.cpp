// Write a program to append text to an existing text file.

#include <fstream>
#include <iostream>

int main()
{
    std::ofstream file;
    file.open("./files/first.txt", std::ios::app);

    if (file)
    {
        file << "\n" << "New line.";
        file.close();
    }
    else 
    {
        std::cout << "Error!";
    }

    return 0;
}