#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class alupotol
{
public:
    // Public members
    string Name;
    string Id;

private:
    // Private members
    int Age;
    char BloodGroup;

public:
    // Constructor to initialize private members
    alupotol(int age, char bloodGroup) : Age(age), BloodGroup(bloodGroup) {}

    // Getters and setters for private members (optional)
    int getAge() const
    {
        if (Age > 0)
        {
            return Age;
        }
        else
        {
            throw invalid_argument("Age must be a positive integer.");
        }
    }
    char getBloodGroup() const
    {
        return BloodGroup;
    }
    void setAge(int age)
    {
        Age = age;
    }
    void setBloodGroup(char bloodGroup)
    {
        BloodGroup = bloodGroup;
    }
};
int main()
{ // Create an object and initialize private members via constructor
    int age;
    char bloodGroup;
    cout << "enter the age" << endl;
    cin >> age;
    cout << "enter the blood group" << endl;
    cin >> bloodGroup;
    alupotol people1(age, bloodGroup);
    string name;
    cout << "enter the name" << endl;
    cin >> name;
    string id;
    cout << "enter the id" << endl;
    cin >> id;
    // Assign values to public members
    people1.Name = name;
    people1.Id = id;
    // Output the members using both public and private accessors
    cout << left << setw(20) << "Name: " << people1.Name << endl;
    cout << setw(20) << "ID: " << people1.Id << endl;
    cout << setw(20) << "Age: " << people1.getAge() << endl;
    cout << setw(20) << "Blood Group: " << people1.getBloodGroup() << endl;

    return 0;
}
