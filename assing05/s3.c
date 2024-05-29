#include <stdio.h>

#define SIZE 3

char win_check(char matrix[SIZE][SIZE])
{
    int i, j;

    for (i = 0; i < SIZE; i++)
    {
        if (matrix[i][0] != ' ' && matrix[i][0] == matrix[i][1] && matrix[i][1] == matrix[i][2])
        {
            return matrix[i][0];
        }
    }

    // Check columns
    for (j = 0; j < SIZE; j++)
    {
        if (matrix[0][j] != ' ' && matrix[0][j] == matrix[1][j] && matrix[1][j] == matrix[2][j])
        {
            return matrix[0][j];
        }
    }

    // diagonals
    if (matrix[0][0] != ' ' && matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
    {
        return matrix[0][0];
    }

    if (matrix[0][2] != ' ' && matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
    {
        return matrix[0][2];
    }

    // If no winner
    return 'D';
}

int main()
{
    char board[SIZE][SIZE] = {
        {'X', 'O', 'X'},
        {'O', 'X', 'O'},
        {'O', 'X', 'X'}};

    char result = win_check(board);
    if (result == 'D')
    {
        printf("The game is a draw.\n");
    }
    else
    {
        printf("The winner is %c.\n", result);
    }

    return 0;
}
