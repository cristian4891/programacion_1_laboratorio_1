#include <stdio.h>
#include <stdlib.h>


//float division(float numero1_1,float numero2_2);
//
//float main(float numero1_1,float numero2_2)
//{
// float numero1;
// float numero2;
// float total1;
//
// printf("Ingrese un numero: ");
// scanf("%f",&numero1);
// printf("Ingrese el divisor: ");
// scanf("%f",&numero2);
// total1=division(numero1,numero2);
// printf("El resultado es: %.2f",total1);
// return 0;
//
//}
//float division(float numero1_1,float numero2_2)
//{
//    float total1_1;
//    if(numero2_2==0)
//        {
//            printf("Error, el divisor no puede ser 0, reingrese el numero: ");
//            scanf("%f",&numero2_2);
//        }
//    else
//        {
//            total1_1=numero1_1/numero2_2;
//        }
//    return total1_1;
//}

//float suma(float x,float y);
//
//float main()
//{
//   float numero1,numero2,sumando;
//   printf("Ingrese un numero: ");
//   scanf("%f",&numero1);
//   printf("Ingrese otro numero: ");
//   scanf("%f",&numero2);
//   sumando=suma(numero1,numero2);
//   printf("La suma es: %.2f",sumando);
//
//}
//
//    float suma(float x,float y)
//    {
//        float suma;
//        suma=x+y;
//        return suma;
//    }


//float resta (float x , float y);
//float main()
//{
//   float numero1,numero2,restando;
//   printf("Ingrese un numero: ");
//   scanf("%f",&numero1);
//   printf("Ingrese otro numero: ");
//   scanf("%f",&numero2);
//   restando=resta(numero1,numero2);
//   printf("La resta es: %.2f",restando);
//   return 0;
//
//}
//float resta (float x , float y)
//{
//    float resta;
//    resta=x-y;
//    return resta;
//}


float multiplicacion (float x , float y);
float main()
{
   float numero1,numero2,multiplicando;
   printf("Ingrese un numero: ");
   scanf("%f",&numero1);
   printf("Ingrese otro numero: ");
   scanf("%f",&numero2);
   multiplicando=multiplicacion(numero1,numero2);
   printf("La multiplicacion es: %.2f",multiplicando);
   return 0;

}

float multiplicacion (float x , float y)
{
    float multiplicacion;
    multiplicacion=x*y;
    return multiplicacion;
}
