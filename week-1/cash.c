#include <stdio.h>
#include <math.h>

int main(void)
{
    //User must not input negative number
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars <= 0.00); 
    
    int change = round(dollars * 100);
    
    int coins = 0;

    //Finds out how many 25c coins returned
    while (change > 24)
    {
        change = change - 25;
        coins = coins + 1;
    }
    
    //Finds out how many 10c coins returned
    while (change > 9)
    {
        change = change - 10;
        coins = coins + 1;
    }
    
    //Finds out how many 5c coins returned
    while (change > 4)
    {
        change = change - 5;
        coins = coins + 1;
    }
    
    //Finds out how many 1c coins returned
    while (change > 0)
    {
        change = change - 1;
        coins = coins + 1;
    }
    
    printf("%i\n", coins);
}