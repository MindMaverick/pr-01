#include <stdio.h>
#include <string.h>

int main()
{
    int numberOfStrings;
    printf("Enter the number of strings: ");
    scanf("%d%*c", &numberOfStrings);

    char strings[numberOfStrings][100];
    char longest[100] = "";
    int maxLength = 0;

    for (int i = 0; i < numberOfStrings; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], 100, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';

        if (strlen(strings[i]) > maxLength)
        {
            maxLength = strlen(strings[i]);
            strcpy(longest, strings[i]);
        }
    }

    printf("The longest string is: %s\n", longest);

    return 0;
}
