/*
    Escreva um programa que leia três inteiros diferentes do teclado, depois 
    apresente a soma, a média, o produto, o menor e o maior 
    desses números. Use apenas a forma de seleção única da 
    instrução if que você aprendeu neste capítulo.
*/

#include <stdio.h>

int main ( void )
{
    int firstNumber,
        secondNumber,
        thirdNumber,
        sum,
        product,
        smallestNumber,
        higherNumber;

    printf( "Digite o primeiro número.\n" );
    scanf( "%d", &firstNumber );

    printf( "Digite o segundo número.\n" );
    scanf( "%d", &secondNumber );

    printf( "Digite o terceiro número.\n" );
    scanf( "%d", &thirdNumber );


    sum = firstNumber + secondNumber + thirdNumber;
    product = firstNumber * secondNumber * thirdNumber;


    if ( firstNumber < secondNumber )
    {

        if ( firstNumber < thirdNumber )
        {
            smallestNumber = firstNumber;

            if ( secondNumber > thirdNumber ) {
                higherNumber = secondNumber;
            }

            if ( thirdNumber > secondNumber ) {
                higherNumber = thirdNumber;
            }

        }

    }

    if ( secondNumber < firstNumber )
    {

        if ( secondNumber < thirdNumber )
        {
            smallestNumber = secondNumber;

            if ( firstNumber > thirdNumber ) {
                higherNumber = firstNumber;
            }

            if ( thirdNumber > firstNumber ) {
                higherNumber = thirdNumber;
            }
            
        }

    }

    if ( thirdNumber < firstNumber )
    {

        if ( thirdNumber < secondNumber )
        {

            smallestNumber = thirdNumber;

            if ( firstNumber > secondNumber ) {
                higherNumber = firstNumber;
            }

            if ( secondNumber > firstNumber ) {
                higherNumber = secondNumber;
            }
            
        }

    }


    printf( "A soma é %d\n", sum );
    printf( "A média é %d\n", sum / 3 );
    printf( "O produto é %d\n", product );
    printf( "O menor é %d\n", smallestNumber );
    printf( "O maior é %d\n", higherNumber );   

    return 0;
}