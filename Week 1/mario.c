#include <stdio.h>
#include <cs50.h>

int main()
{
    int altura;
    do
    {
        altura = get_int("Height: ");
    }
    while (altura < 1 || altura > 8);

    // contador para guiar o espaço e a #.
    // Ser i = 0; altura = 1 representaria a segunda linha.
    for (int i = 1; i <= altura; i++)
    {

        // put space before #.
        for (int i_contador = 1; i_contador <= altura - i; i_contador++)

        {
            printf(" ");

        }
        // use a contagem do primeiro for para esta #.
        // 1º linha só tem uma # e i = 1
        for (int i_cont = 1; i_cont <= i; i_cont++)

        {
            printf("#");

        }
        printf("\n");


    }




}
