/*
    Escreva um programa que peça ao usuário que digite dois inteiros,
    obtenha os números e depois imprima o maior número seguido das 
    palavras ‘é maior’. Se os números forem iguais,
    imprima a mensagem “Esses números são iguais”.
*/

#include <stdio.h>

int main( void )
{
    int primeiroNumero, segundoNumero;

    printf( "Digite o primeiro número inteiro.\n" );
    scanf( "%d", &primeiroNumero );
    
    printf( "Digite o segundo número inteiro.\n" );
    scanf( "%d", &segundoNumero );

    if ( primeiroNumero > segundoNumero ) {
        printf( "%d é maior\n", primeiroNumero );
    }

    if ( segundoNumero > primeiroNumero ) {
        printf( "%d é maior\n", segundoNumero );
    }

    if ( primeiroNumero == segundoNumero ) {
        printf( "Esses números são iguais." );
    }

    return 0;
} //fim main