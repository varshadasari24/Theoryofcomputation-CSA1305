#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, valid = 1, found = 0;

    printf("Enter a binary string: ");
    scanf("%s", str);

    len = strlen(str);

    /* Check whether the string contains only 0 and 1 */
    for(i = 0; i < len; i++)
    {
        if(str[i] != '0' && str[i] != '1')
        {
            valid = 0;
            break;
        }
    }

    if(valid == 0)
    {
        printf("Rejected\n");
        return 0;
    }

    /* Check for the substring "101" */
    for(i = 0; i <= len - 3; i++)
    {
        if(str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1')
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
