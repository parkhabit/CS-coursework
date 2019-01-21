#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int shift(char c);

int main(int argc, string argv[])
{
    //if the user does not enter an argument correctly
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    
    //saves the argument in a variable
    string arg = argv[1];
    for (int i = 0, arg_length = strlen(arg); i < arg_length; i++)
    {
        //checks if the argument is a character & not a number
        if (arg[i] >= 48 && arg[i] <= 57)
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
//     int key = shift(argv[1][0]);
    
    string plaintext = get_string("plaintext: ");
    int counter = 0;
    for (int j = 0, plain_length = strlen(plaintext); j < plain_length; j++)
    {
        int key = shift(argv[1][counter]);
        if (islower(plaintext[j]) || isupper(plaintext[j]))
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

            int arg_length = strlen(arg);
            // increases or resets the counter
            if (counter < arg_length - 1)
            {
                counter = counter + 1;
            }
            else 
            {
                counter = 0;
            }
        } 
    }
    printf("ciphertext: %s\n", plaintext);
}

int shift(char c)
{
    // if lower case
    if (islower(c))
    {
        c = c - 97;
    }
    //if upper case
    if (isupper(c))
    {
        c = c - 65;
    }
    return c;
}
