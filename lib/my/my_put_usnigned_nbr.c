/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** my_put_usnigned_nbr.c
*/

void my_putchar(char c);

void my_put_usnigned_nbr(unsigned int nb)
{
    unsigned int units;
    if (nb < 10) {
        my_putchar(nb + 48);
    }
    else {
        units = (nb % 10);
        nb = (nb - units) / 10;
        my_put_usnigned_nbr(nb);
        my_putchar(units + 48);
    }
}
