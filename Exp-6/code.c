#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int n, i;
    int leadingZeros = 0, trailingZeros = 0;

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

    // Count leading zeros
    i = 0;
    while (i < n && str[i] == '0')
    {
        leadingZeros++;
        i++;
    }

    // Count trailing zeros
    i = n - 1;
    while (i >= 0 && str[i] == '0')
    {
        trailingZeros++;
        i--;
    }

    // Check if leading and trailing zeros are equal
    if (leadingZeros != trailingZeros)
    {
        printf("Rejected\n");
        return 0;
    }

    // Check if middle part contains only 1's
    for (i = leadingZeros; i < n - trailingZeros; i++)
    {
        if (str[i] != '1')
        {
            printf("Rejected\n");
            return 0;
        }
    }

    printf("Accepted\n");

    return 0;
}
