// Write a program to count the number of words in a text file.

#include <iostream>
#include <fstream>

int main()
{
    std::fstream file;
    file.open("./files/second.txt");
    int count {};

    if (file.is_open())
    {
        std::string word;
        while (file >> word)
        {
            ++count;
        }
    }
    else
    {
        std::cout << "Error!";
    }

    file.close();

    std::cout << "There were " << count << " words in the file." << std::endl;

    return 0;
}