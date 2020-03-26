// ToDoList.cpp 

#include <iostream>
#include <string>
#include <vector>
#include "ToDoList.h"
#include <fstream>


int main()
{
    int choice;
    do
    {
        DisplayMainMenu();

        std::cin >> choice; // User enters 1-6; otherwise comes back invalid input
        std::cin.ignore(); // This is for the getline, need it to grab the entire line

        switch (choice)
        {
        case 1:
            AddTask();
            break;
        case 2:
            RemoveTask();
            break;
        case 3:
            ViewList();
            break;
        case 4:
            std::cout << "Thank you. Goodbye.\n";
            break;

        default:
            std::cout << std::endl;
            std::cout << "Invalid Selection. Please try again." << std::endl;
        }
    } while (choice != 4); //this will loop until you select #6 to exit the library

    return 0;
}
