#include <stdio.h>
#include <stdlib.h>

int main()

//{
//    int numero,suma=0;
//    char respuesta='s';
//
//    while(respuesta=='s')
//
//        {
//            printf("Ingrese un numero: \n");
//            scanf("%d",&numero);
//            suma=suma+numero;
//
//
//            printf("Continuar? \n");
//            scanf("%s",&respuesta);
//
//        }
//        printf("La suma es de: %d",suma);
//
//}
// https://elrincondelc.com/foros/viewtopic.php?t=2510
//{
//    int num,cantpos=0,cantneg=0,i;
//
//    for(i=0;i<10;i++)
//        {
//            printf("Ingrese un numero: \n");
//            scanf("%d",&num);
//            if(num<0)
//                {
//                    printf("El numero %d es negativo. \n",num);
//                    cantneg++;
//                }
//            else
//                {
//                    printf("El numero %d es positivo. \n",num);
//                    cantpos++;
//                }
//        }
//    printf("La cantidad de numeros positivos es de %d, y la cantidad de negativos es de %d. \n",cantpos,cantneg);
//    return 22;
//}

{
    int numero;
    int i;
    int suma;
    int minimo;
    int maximo;
    float promedio;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    suma=numero;
    minimo=numero;
    maximo=numero;

    for(i=0;i<4;i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",&numero);
            suma=suma+numero;
            if(i>1)
                {
                    if(numero<minimo)
                        {
                            minimo=numero;
                        }
                    if(numero>maximo)
                        {
                            maximo=numero;
                        }
                }
        }
    promedio=suma/5;
    printf("El promedio es de: %f",promedio);
}

//{
//    float numeroA;
//    float numeroB;
//    float suma;
//
//
//
//
//    printf("Ingrese un numero: ");
//    scanf("%f",&numeroA);
//    printf("Ingrese un segundo numero: ");
//    scanf("%f",&numeroB);
//    suma=numeroA+numeroB;
//    printf("La suma es de: %f",suma);
//
//    return 0;
//}



