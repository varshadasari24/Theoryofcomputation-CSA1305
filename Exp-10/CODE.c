#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char str[MAX], stack[MAX];
    int top = -1;
    int i, len;
    int bStarted = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if(str[i] == 'a')
        {
            if(bStarted)
            {
                printf("Rejected\n");
                return 0;
            }
            stack[++top] = 'A';      // Push
        }
        else if(str[i] == 'b')
        {
            bStarted = 1;

            if(top == -1)
            {
                printf("Rejected\n");
                return 0;
            }
            top--;                   // Pop
        }
        else
        {
            printf("Rejected\n");
            return 0;
        }
    }

    if(top == -1)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
