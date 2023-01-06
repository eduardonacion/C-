#include <stdio.h>
#include <stdlib.h>


void passingByValue (int i, int x);
void passingByAddress (int *i, int *x);

int main()
{
    int tuna = 20;
    int yes = 30;

    passingByValue(tuna, yes);
    printf("passing by value, tuna is now  %d\n", tuna);
    printf("passing by value, tuna is now  %d\n", yes);
        
    passingByAddress(&tuna, &yes);       
    printf("passing by address, tuna is now  %d\n", tuna);
    printf("passing by address, tuna is now  %d\n", yes);

    return 0;
}
void passingByValue(int i, int x)
{
    i = 99;
    x = 100;

    return;
}
void passingByAddress(int *i, int *x)
{
    *i = 64;
    *x = 70;

    return;
}