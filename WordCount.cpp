#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch[100];
    int i = 0, num = 0;
    gets(ch);
    char *p = ch;
    while (*p != '\0')
    {
        if (*p != ' ' && *(p + 1) == ' ')
            num++;
        if (*p != ' ' && *(p + 1) == '\0')
            num++;
        p++;
    }
    printf("%d\n", num);
    system("pause");
    return 0;
}