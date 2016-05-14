/**
* Caesar
* Get a key and string to code with caesar code
* Print coded string
*/
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv [])
{
    // check if arguments more than 2 or 0
    if (argv[2] != NULL || argv[1] == NULL)
    {
        printf ("More than 1 or lack of arguments!\n");
        return 1;
    }
    // transform argument to int
    int k = atoi(argv[1]);
    k = k % 26;
    // get string to code  
    char x;
    string text = GetString();
    // coding
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // check if character is letter
        if (isalpha(text[i]))
        {
            x = text[i] + k;
            if (isalpha(x))
                printf ("%c",x);
            else 
            {   
                x = x - 26;
                printf ("%c",x);
            } 
        }
        // dont code non letters
        if (isalpha(text[i]) == false)
        {
            printf ("%c",text[i]);
        }    
    }
   printf ("\n");
}
