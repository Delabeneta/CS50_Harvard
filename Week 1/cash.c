#include <cs50.h>
#include <math.h>
#include <stdio.h>


int main(void)
{
    float cents;
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;
    int dolares;

    do // while the user don't write a number biger that 0, it'll repeat "change owner"
    {
        cents = get_float("Change owner: ");
    }

    while (cents < 0);


    // here i am removing decimais houses
    dolares = round(cents * 100);


    // i'll split the  inteiro troco for quarters. His resto de divisão
    // it'll be using for others contas, like a dividend. and the coin number it'll be
    // the new divisor

    int cont_quarters = dolares / quarters;
    //printf("\n %i moeda de 25 centavos", cont_quarters);

    int cont_dimes = (dolares % quarters) / dimes;
    //printf("\n %i moeda de 10 centavos", cont_dimes);

    int cont_nickels = ((dolares % quarters) % dimes) / nickels;
    //printf("\n %i moeda de 5 centavos", cont_nickels);

    int cont_pennies = (((dolares % quarters) % dimes) % nickels) / pennies;
    //printf("\n %i moeda de 1 centavos", cont_pennies);

    int soma = cont_quarters + cont_dimes + cont_nickels + cont_pennies;
    printf("%i\n", soma);
}
