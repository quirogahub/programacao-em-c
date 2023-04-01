/*
    Diâmetro, circunferência e área de um círculo.
    Escreva um programa que leia o raio de um círculo e informe o diâmetro, a circunferência e a área do círculo.
    Utilize o valor constante 3,14159 para p.
    Realize cada um desses cálculos dentro das instruções printf e use o especificador de conversão %f.
    [Nota: neste capítulo, discutimos apenas constantes e variáveis inteiras.
    No Capítulo 3, discutiremos os números em ponto flutuante, ou seja, valores que podem ter pontos decimais.]
*/

#include <stdio.h>

int main ( void )
{
    int raioDoCirculo = 20;

    printf( "O diâmetro é %f", 3.14159 * raioDoCirculo );

    return 0;
}