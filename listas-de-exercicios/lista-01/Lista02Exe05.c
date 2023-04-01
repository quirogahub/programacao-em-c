/*
    Escreva um programa que leia cinco inteiros e depois determine e imprima o maior
    e o menor inteiro no grupo. Use apenas as técnicas de programação que você aprendeu neste capítulo.
*/

#include <stdio.h>

int main ( void )
{
    int numeroUm, numeroDois, numeroTres, numeroQuatro, numeroCinco,
        menorNumero, maiorNumero;

    printf( "Digite cinco números inteiros.\n" );
    scanf( "%d", &numeroUm );
    scanf( "%d", &numeroDois );
    scanf( "%d", &numeroTres );
    scanf( "%d", &numeroQuatro );
    scanf( "%d", &numeroCinco );

// ENCONTRAR O MENOR
// testar se o numeroUm é o menor
    if ( numeroUm < numeroDois )
    {
        if ( numeroUm < numeroTres )
        {
            if ( numeroUm < numeroQuatro )
            {
                if ( numeroUm < numeroCinco )
                {
                    menorNumero = numeroUm;
                }
            }
        }
    }

// testar se o numeroDois é o menor
    if ( numeroDois < numeroUm )
    {
        if ( numeroDois < numeroTres )
        {
            if ( numeroDois < numeroQuatro )
            {
                if ( numeroDois < numeroCinco )
                {
                    menorNumero = numeroDois;
                }
            }
        }
    }

// testar se o numeroTres é o menor
    if ( numeroTres < numeroUm )
    {
        if ( numeroTres < numeroDois )
        {
            if ( numeroTres < numeroQuatro )
            {
                if ( numeroTres < numeroCinco )
                {
                    menorNumero = numeroTres;
                }
            }
        }
    }

// testar se o numeroQuatro é o menor
    if ( numeroQuatro < numeroUm )
    {
        if ( numeroQuatro < numeroDois )
        {
            if ( numeroQuatro < numeroTres )
            {
                if ( numeroQuatro < numeroCinco )
                {
                    menorNumero = numeroQuatro;
                }
            }
        }
    }

// testar se o numeroQuatro é o menor
    if ( numeroCinco < numeroUm )
    {
        if ( numeroCinco < numeroDois )
        {
            if ( numeroCinco < numeroTres )
            {
                if ( numeroCinco < numeroQuatro )
                {
                    menorNumero = numeroCinco;
                }
            }
        }
    }

// ENCONTRAR O MAIOR                
// testar se o numeroUm é o maior
    if ( numeroUm > numeroDois )
    {
        if ( numeroUm > numeroTres )
        {
            if ( numeroUm > numeroQuatro )
            {
                if ( numeroUm > numeroCinco )
                {
                    maiorNumero = numeroUm;
                }
            }
        }
    }

// testar se o numeroDois é o maior
    if ( numeroDois > numeroUm )
    {
        if ( numeroDois > numeroTres )
        {
            if ( numeroDois > numeroQuatro )
            {
                if ( numeroDois > numeroCinco )
                {
                    maiorNumero = numeroDois;
                }
            }
        }
    }

// testar se o numeroTres é o maior
    if ( numeroTres > numeroUm )
    {
        if ( numeroTres > numeroDois )
        {
            if ( numeroTres > numeroQuatro )
            {
                if ( numeroTres > numeroCinco )
                {
                    maiorNumero = numeroTres;
                }
            }
        }
    }

// testar se o numeroQuatro é o maior
    if ( numeroQuatro > numeroUm )
    {
        if ( numeroQuatro > numeroDois )
        {
            if ( numeroQuatro > numeroTres )
            {
                if ( numeroQuatro > numeroCinco )
                {
                    maiorNumero = numeroQuatro;
                }
            }
        }
    }

// testar se o numeroCinco é o maior
    if ( numeroCinco > numeroUm )
    {
        if ( numeroCinco > numeroDois )
        {
            if ( numeroCinco > numeroTres )
            {
                if ( numeroCinco > numeroQuatro )
                {
                    maiorNumero = numeroCinco;
                }
            }
        }
    }

    printf( "O maior é %d.\nO menor é %d.", maiorNumero, menorNumero );

    return 0;    
}//fim main