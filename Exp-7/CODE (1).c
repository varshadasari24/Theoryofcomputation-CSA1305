#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int n, i;
    int zeros = 0, ones = 0;

    printf("Enter the binary string: ");
    scanf("%s", str);

    n = strlen(str);

    // Check for valid symbols
    for (i = 0; i < n; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            printf("Invalid Input! Only 0 and 1 are allowed.\n");
            return 0;
        }
    }

    // Count leading 0's
    i = 0;
    while (i < n && str[i] == '0')
    {
        zeros++;
        i++;
    }

    // Remaining characters must all be 1's
    while (i < n)
    {
        if (str[i] != '1')
        {
            printf("Rejected\n");
            return 0;
        }
        ones++;
        i++;
    }

    // Check equal number of 0's and 1's
    if (zeros == ones)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
