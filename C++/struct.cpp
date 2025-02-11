#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int GRID_SIZE = 5; // Size of the grid (5x5)

// Function to display the grid
void displayGrid(int playerX, int playerY, int treasureX, int treasureY)
{
    for (int y = 0; y < GRID_SIZE; y++)
    {
        for (int x = 0; x < GRID_SIZE; x++)
        {
            if (x == playerX && y == playerY)
            {
                cout << "P "; // Player
            }
            else if (x == treasureX && y == treasureY)
            {
                cout << "T "; // Treasure
            }
            else
            {
                cout << ". "; // Empty space
            }
        }
        cout << endl;
    }
}

int main()
{
    srand(time(0)); // Seed the random number generator

    // Initialize player and treasure positions
    int playerX = 0, playerY = 0;
    int treasureX = rand() % GRID_SIZE;
    int treasureY = rand() % GRID_SIZE;

    cout << "Welcome to the Treasure Hunt Game!" << endl;
    cout << "Find the treasure (T) on the grid by moving the player (P)." << endl;
    cout << "Use WASD to move (Up, Left, Down, Right)." << endl;

    while (true)
    {
        // Display the grid
        displayGrid(playerX, playerY, treasureX, treasureY);

        // Check if the player found the treasure
        if (playerX == treasureX && playerY == treasureY)
        {
            cout << "Congratulations! You found the treasure!" << endl;
            break;
        }

        // Get player input
        char input;
        cout << "Enter your move (WASD): ";
        cin >> input;

        // Move the player
        switch (tolower(input))
        {
        case 'w': // Up
            if (playerY > 0)
                playerY--;
            break;
        case 'a': // Left
            if (playerX > 0)
                playerX--;
            break;
        case 's': // Down
            if (playerY < GRID_SIZE - 1)
                playerY++;
            break;
        case 'd': // Right
            if (playerX < GRID_SIZE - 1)
                playerX++;
            break;
        default:
            cout << "Invalid input! Use WASD to move." << endl;
        }
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}