#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    // File path
    string filePath = "C:\\Users\\Md Shakil\\Desktop\\codes\\random_students.txt";

    // Open the file
    ifstream file(filePath);

    if (!file) {
        cerr << "Error: Unable to open file!" << endl;
        return 1;
    }

    // Variables to store data and search queries
    string line, name, id, cgpa;
    string searchQuery;
    bool found = false;

    // Ask the user for input
    cout << "Enter the name or ID to search: ";
    cin >> searchQuery;

    // Read the file line by line
    while (getline(file, line)) {
        stringstream ss(line); // Split the line
        getline(ss, name, ',');
        getline(ss, id, ',');
        getline(ss, cgpa, ',');

        // Check if the search query matches name or ID
        if (name == searchQuery || id == searchQuery) {
            cout << "Student Found:" << endl;
            cout << "Name: " << name << ", ID: " << id << ", CGPA: " << cgpa << endl;
            found = true;
            break;
        }
    }

    // Close the file
    file.close();

    if (!found) {
        cout << "No student found with the name or ID: " << searchQuery << endl;
    }

    return 0;
}
