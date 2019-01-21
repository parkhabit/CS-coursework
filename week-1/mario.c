// Creates Mario pyramids with #s based on user input
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // User must input an int between 1 and 8
    int height = 0;
    while (height < 1 || height > 8)
    {
        height = get_int("Height: ");
    }
    
    int space = height;
    int counter = 1;
    int counterb = 1;
    for (int i = 0; i < height; i++)
    {
        // Prints needed white space before hashes
        for (int j = 0; j < space - 1; j++)
        {
            printf(" ");
        }
        
        // Prints hashes needed
        for (int k = 0; k < counter; k++)
        {
            printf("#");
        }
        counter = counter + 1;
        
        // Prints middle space
        printf("  ");
        
        // Prints hashes for rhs of pyramid
        for (int l = 0; l < counterb; l++)
        {
            printf("#");
        }
        counterb = counterb + 1;
        space = space - 1;
        printf("\n");
    }
}