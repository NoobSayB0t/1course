﻿#include <stdio.h>
void main()
{
    char s[256];
    int i, count;
    puts("Enter string: ");
    gets_s(s);

    for (count = i = 0; s[i] != 0; i++)
    {
        if (s[i] == '(')
            count++;
        if (s[i] == ')')
            count--;

        if (count < 0) // если закрывающая скобка встречается раньше открывающей
        { 
            puts("Not Ok\n");
            return;
        }
    }

    if (count == 0)
        puts("Ok\n");
    else
        puts("Not Ok\n");
}
