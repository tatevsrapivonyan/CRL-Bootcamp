// Write a program to replace a particular word with another word in a text file.

#include <iostream>
#include <fstream>
#include <iostream>

void replace_word(const std::string& file_name, const std::string& word_to_replace, const std::string& word_replace_with)
{
    std::ifstream file;
    std::ofstream new_file;
    file.open(file_name);
    new_file.open("./files/example.txt");

    if (file.is_open() && new_file.is_open())
    {
        std::string data;
        while (file >> data)
        {
            if (data == word_to_replace)
            {
                new_file << word_replace_with << " ";
            }
            else
            {
                new_file << data << " ";
            }
        }
        file.close();
        new_file.close();
    }
    else
    {
        std::cout << "Error!" << std::endl;
    }

    std::remove(file_name.c_str());
    std::rename("./files/example.txt", file_name.c_str());
}