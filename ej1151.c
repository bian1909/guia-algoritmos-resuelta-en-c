#include <stdio.h>
#include <math.h>

int main (){
    float P, C, R;
    int A, N; 

    printf("bienvenido al sistema para calcular el precio de un producto en años futuros.\n");
    printf("por favor, ingrese el precio del producto de interes:\n");
    scanf("%f", &C);
    printf("ingrese el año actual \n");
    scanf("%d", &A);
    printf("ingrese el año de interes \n");
    scanf("%d", &N);
    printf("la tasa de inflacion es de un 4 porciento anual \n");
    R = 0.04;

    P = C*pow(1 + R, N - A); 
    
    printf("//////////////////////////////////////////////////////");
    printf("el precio en ese año será de: %f \n", P);
    return 0;
}