#include <stdlib.h>
#include <stdio.h>
#include "CALCULADORA.H"

float calculadora (char opcion, float a, float b)
{
    float i=1;
    float fact=1;
    float fact2=1;
    float funcionsuma; /*esta funcion es para sumar dos numeros*/
    float funcionresta; /*esta funcion es para restar dos numeros*/
    float funcionmultiplicacion; /*esta funcion es para multiplicar dos numeros*/
    float funciondivision; /*esta funcion es para dividir dos numeros*/

        switch ( opcion )
        {

            case '1': printf( "\n   Introduzca primer numero a sumar: " );
                      scanf( "%f", &a);
                      printf( "\n   Introduzca segundo numero a sumar: " );
                      scanf( "%f", &b);
                      printf(" -A = %.2f", a);
                     printf(" -B = %.2f", b);
                    funcionsuma=a+b;
                        printf( "\n LA OPERACION ES  %.2f + %.2f Y EL RESULTADO ES= %.2f\n", a, b ,funcionsuma );

                    printf( "   El calculo fue hecho ,<< INICIAMOS DE VUELTA  >>  :  " );
                                  scanf( "%c", &opcion);
                      break;


            case '2': printf( "\n   Introduzca primer numero a restar: " );
                      scanf( "%f", &a);
                      printf( "\n   Introduzca segundo numero a restar: " );
                      scanf( "%f", &b);
                      printf(" -A = %.2f", a);
                      printf(" -B = %.2f", b);
                      funcionresta=a-b;
                      printf( "\n LA OPERACION ES %.2f - %.2f Y EL RESULTADO ES = %.2f\n", a, b, funcionresta );
                      printf( "   El calculo fue hecho ,<< INICIAMOS DE VUELTA  >>  :  " );
                      scanf( "%c", &opcion);
                      break;


            case '3': printf( "\n   Introduzca primer operando: " );
                      scanf( "%f", &a);
                      printf( "\n   Introduzca segundo operando: " );
                      scanf( "%f", &b);
                      printf(" -A = %.2f", a);
                      printf(" -B = %.2f", b);
                  funcionmultiplicacion=a * b;
                      printf( "\n  LA OPERACION ES %.2f * %.2f Y EL RESULTADO ES= %.2f\n", a, b, funcionmultiplicacion );
                    printf( "   El calculo fue hecho ,<< INICIAMOS DE VUELTA  >>  :  " );
                                  scanf( "%c", &opcion);
                      break;

                      case '4':
                    printf( "\n   Introduzca dividendo: " );
                    scanf( "%f", &a);
                    printf( "\n   Introduzca divisor: " );
                    scanf( "%f", &b);
                     printf(" -A = %.2f", a);
                     printf(" -B = %.2f", b);
                     funciondivision=a / b;
                    if ( b != 0 )
                        {
                            printf( "\n  LA OPERACION ES %.2f / %.2f Y EL RESULTADO ES= %.2f \n", a , b , funciondivision );
                        }else
                        {
                            printf( "\n   ERROR: No se puede dividir entre cero.\n" );

                         }
                         printf( "   El calculo fue hecho ,<< INICIAMOS DE VUELTA  >>  :  " );
                                  scanf( "%c", &opcion);
                         break;
                           case '5':/*esta funcion es para sacar el factorial de dos numeros*/

                            printf( "\n   Introduzca el primer numero a pasar a factorial: " );
                            scanf( "%f", &a);
                            printf( "\n   Introduzca segundo numero a pasar a factorial: " );
                            scanf( "%f", &b);

                            printf(".....................................................................................................................");

                            printf("     [A]  = %.2f", a);

                           printf("      [B]  = %.2f                                                                                           ", b);

                                for(i=1; i<=a; i++)

                              fact = fact * i;


                      printf( "  El factorial del primer numero es %.2f \n",fact);
                             for(i=1; i<=b; i++)

                                 fact2 = fact2* i;

                       printf( "   El factorial del segundo numero es %.2f \n",fact2);



                                printf( "   El calculo fue hecho ,<< INICIAMOS DE VUELTA  >>  :  " );
                                scanf( "%c", &opcion);
                              break;

        }
return 0;

}







