// ToDoList.cpp 

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> taskList;


void DisplayMainMenu()
{
    std::cout << " [  M A I N    M E N U  ] \n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Choose an option: " << std::endl;
    std::cout << "1. Add a new task " << std::endl;
    std::cout << "2. Remove a task " << std::endl;
    std::cout << "3. View To Do List " << std::endl;
    std::cout << "4. Exit " << std::endl;
    std::cout << "\n";
    std::cout << "\n";
}

void AddTask()
{
    std::cout << "Enter New Task:\n";
    std::string task;
    std::getline(std::cin, task);
  
    taskList.push_back(task); // Adds a new element at the end of the vector
    std::cout << "\nYou have added a new task to your to do list.\n";
}

void RemoveTask()
{
    std::cout << "Enter Task you want to remove: \n";
    std::string task;
    std::getline(std::cin, task);
 
    std::vector<std::string>::iterator it = std::find(taskList.begin(), taskList.end(), task);
    if (it != taskList.end())
    {
        taskList.erase(it);
        std::cout << "Task Not Found" << std::endl;
        return;
    }
 

    std::cout << std::endl;
    std::cout << "You have removed a task from your to do list." << std::endl;

}

void ViewList()
{
    std::cout << "Tasks: " << std::endl;
    for (int i = 0; i < taskList.size(); i++) 
    {
       std::cout << taskList[i] << std::endl;
    }
    std::cout << std::endl;
}


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
