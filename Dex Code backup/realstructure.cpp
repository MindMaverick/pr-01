#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct alupotol
{

    string Name;
    string Id;
    int Age;
    char BloodGroup;
};

int main()
{
    alupotol people1;

    // Assign values to the structure members
    people1.Name = "John Doe";
    people1.Id = "12345ax@";
    people1.Age = 30;
    people1.BloodGroup = 'O';

    // Output the structure members
    cout << left << setw(20) << "Name: " << people1.Name << endl;
    cout << setw(20) << "ID: " << people1.Id << endl;
    cout << setw(20) << "Age: " << people1.Age << endl;
    cout << setw(20) << "Blood Group: " << people1.BloodGroup << endl;

    return 0;
}
