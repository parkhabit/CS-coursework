#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//doesn't yet handle if the user inputs a number greater than 26, doesn't loop round the alphabet
int main(int argc, string argv[])
{
    //if the user does not enter an argument correctly
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        printf("\n");
        return 1;
    }
    
    //saves the argument in a variable
    string arg = argv[1];
    for (int i = 0, arg_length = strlen(arg); i < arg_length; i++)
    {
        //checks if the argument is a character & not a number
        if (arg[i] < 48 || arg[i] > 57)
        {
            printf("Usage: ./caesar key");
            printf("\n");
            return 1;
        }
    }
    
    //saves the argument as a int in key variable
    int key = atoi(argv[1]);
    
    string plaintext = get_string("plaintext: ");
    printf("outside");
    for (int j = 0, plain_length = strlen(plaintext); j < plain_length; j++)
    {
        //encrypt if lower case
        if (islower(plaintext[j]))
        {
            plaintext[j] = (((plaintext[j] - 97) + key) % 26) + 97;
        }
        //encrypt if upper case
        else if (isupper(plaintext[j]))
        {
            plaintext[j] = (((plaintext[j] - 65) + key) % 26) + 65;
        }
    }
    printf("ciphertext: %s\n", plaintext);
}
