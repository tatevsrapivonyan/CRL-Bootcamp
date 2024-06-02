// Write a program to search for a particular word in a text file and display all occurrences.

#include <iostream>
#include <fstream>
#include <string>

void search_word(const std::string& file_name, const std::string word)
{
    std::fstream file;
    file.open(file_name);

    if (file.is_open())
    {
        std::string data;
        while (file >> data)
        {
            if (data == word)
            {
                std::cout << data << " ";
            }
        }
        file.close();
    }
    else 
    {
        std::cout << "Error!" << std::endl;
    }
}