// Write a program to find and display the shortest line in a text file.

#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::fstream file;
    file.open("./files/first.txt");

    if (file.is_open())
    {
        std::string str;
        std::string shortest;
        file >> shortest;
        
        while (file >> str)
        {
            if (str.size() < shortest.size())
            {
                shortest = str;
            }
        }
        file.close();
        std::cout << "The shortest word was: " << shortest << std::endl;
    }
    else
    {
        std::cout << "Error!";
    }

    return 0;
}