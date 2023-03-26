/*
    Escreva um programa que peça ao usuário que digite dois números, obtenha esses números e 
    imprima a soma, o produto, a diferença, o quociente e o 
    módulo (resto da divisão).
*/

#include <stdio.h>

int main( void )
{
    int primeiroNumero, segundoNumero;

    printf( "Digite o primeiro inteiro.\n" );
    scanf( "%d", &primeiroNumero );

    printf( "Digite o segundo número inteiro.\n" );
    scanf( "%d", &segundoNumero );

    printf( "Soma: %d\nProduto: %d\nDiferença: %d\nQuociente: %d\nMódulo: %d",
        primeiroNumero + segundoNumero,
        primeiroNumero * segundoNumero,
        primeiroNumero - segundoNumero,
        primeiroNumero / segundoNumero,
        primeiroNumero % segundoNumero);

    return 0;        
} //fim main