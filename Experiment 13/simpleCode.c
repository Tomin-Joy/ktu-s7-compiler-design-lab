#include <stdio.h>
struct exp
{
    int pos;
    char op;
} oper[50];
int main()
{
    char str[50], a[50];
    int i, j = 0, k;
    printf("Enter the expession : ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '*')
        {
            oper[j].pos = i;
            oper[j++].op = str[i];
        }
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '/')
        {
            oper[j].pos = i;
            oper[j++].op = str[i];
        }
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '+')
        {
            oper[j].pos = i;
            oper[j++].op = str[i];
        }
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '-')
        {
            oper[j].pos = i;
            oper[j++].op = str[i];
        }
    }
    for (i = 0; i < j; i++)
    {
        printf("%c = %c %c %c\n", (90 - i), str[(oper[i].pos) - 1], oper[i].op, str[(oper[i].pos) + 1]);
        str[(oper[i].pos) - 1] = (90 - i);
        str[(oper[i].pos)] = (90 - i);
        str[(oper[i].pos) + 1] = (90 - i);
    }
}
