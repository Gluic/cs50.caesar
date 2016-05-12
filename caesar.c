/**
* Caesar
* Get a key and strin to code with caesar code
* Print coded string
*/
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv [])
{
    if (argv[2] != NULL || argv[1] == NULL)
        return 1;
    int k = atoi(argv[1]);
    
    char x;
    string text = GetString();
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            x = text[i] + k;
            x = x + '0';
            printf ("%c",x);
        }
        
        if (isalpha(text[i]) == false)
        {
            printf ("%c",text[i]);
        }    
    }
   printf ("\n");
}
