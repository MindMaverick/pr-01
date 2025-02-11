#include <string>
#include <iomanip>
#include <iostream>

// today im learning about pointers in cpp files

using namespace std;

int main()
{

    // declaring an integer variable
    int x = 10;

    // declaring a pointer to an integer
    int *ptr;

    // assigning the address of x to ptr
    ptr = &x;

    // printing the value of x using ptr
    cout << "Value of x: " << *ptr << endl;
    // print the memory address of x using ptr
    cout << "Memory address of x: " << ptr << endl;

    // changing the value of x using ptr
    *ptr = 20;
    
    // print the memory address of updated x using ptr
    cout << "Memory address of updated v x: " << ptr << endl;

    // printing the updated value of x
    cout << "Updated value of x: " << x << endl;

    return 0;
}