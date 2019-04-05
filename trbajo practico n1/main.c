#include <stdlib.h>
#include <stdio.h>
#include "CALCULADORA.H"
#include "CALCULADORA.C"

int main()
{

        char opcion;
        float a;
        float b;
        float i=1;
       float fact=1;
       float fact2=1;
       float funcionsuma;
       float funcionresta;
       float funcionmultiplicacion;
       float funciondivision;

        do
     {
         printf( "\n   --------------------------------------------------------------------------------------------------- " );
        printf( "\n                    -----CALCULADORA PARA OPERACIONES CON 2 NUMEROS (CON O SIN COMA)----- " );
        printf( "\n\n    1.Sumar + " );
        printf( "\n    2.Restar - " );
        printf( "\n    3.Multiplicar * ");
        printf( "\n    4.Dividir / ");
        printf( "\n    5.calcular factorial." );
        printf ("\n    6.salir.\n");
        printf( "\n    A=PRIMER NUMERO(x)" );
         printf( "\n    B=SEGUNDO NUMERO(y)" );


    do{
        printf( "\n   elegir una opcion del 1 al 6  : " );
            scanf( "%c", &opcion);
            break;
            break;
    }while ( opcion < '1' || opcion > '6' );

calculadora(opcion, a, b);

    }while(opcion!='6' );



 return 0;
}















