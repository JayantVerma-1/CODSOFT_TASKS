#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void displayMenu();
void addTask(vector<string> &tasks);
void viewTasks(const vector<string> &tasks);
void deleteTask(vector<string> &tasks);

int main()
{
    vector<string> tasks;
    char choice;

    do
    {
        displayMenu();
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case '1':
            addTask(tasks);
            break;
        case '2':
            viewTasks(tasks);
            break;
        case '3':
            deleteTask(tasks);
            break;
        case '4':
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
            break;
        }
    } while (choice != '4');

    return 0;
}

void displayMenu()
{
    cout << "\n To-Do List Manager \n";
    cout << "1. Add a Task\n";
    cout << "2. View all Tasks\n";
    cout << "3. Delete a Task\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

void addTask(vector<string> &tasks)
{
    string task;
    cout << "Enter task to add: ";
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added successfully.\n";
}

void viewTasks(const vector<string> &tasks)
{
    if (tasks.empty())
    {
        cout << "No tasks available.\n";
    }
    else
    {
        cout << "Tasks:\n";
        for (size_t i = 0; i < tasks.size(); ++i)
        {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

void deleteTask(vector<string> &tasks)
{
    if (tasks.empty())
    {
        cout << "No tasks available to delete.\n";
        return;
    }

    int index;
    viewTasks(tasks);
    cout << "Enter index of task to delete: ";
    cin >> index;

    if (index < 1 || index > static_cast<int>(tasks.size()))
    {
        cout << "Invalid , try again.\n";
    }
    else
    {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Deleted successfully.\n";
    }
}