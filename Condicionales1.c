#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1, num2;
    system("cls");
    printf("Ingrese el primer numero:\n");
    if(scanf("%lf", &num1) != 1){
        printf("Error: ingrese un numero real valido \n");
        return 1;
    }
    printf("Ingrese el segundo numero:\n");
    if(scanf("%lf", &num2) != 1){
        printf("Error: ingrese un numero real valido \n");
        return 1;
    }

    double suma = num1 + num2;
    double resta = num1 - num2;
    double mult = num1 * num2;
    
    if(num2 == 0){
        printf("Error: Nose puede dividir entre cero. \n");
        return 1;
    }
    double divi = num1 / num2;

    printf("---- Resultados ----\n");
    printf("Suma:  %.4lf\n", suma);
    printf("Resta: %.4lf\n", resta);
    printf("Multiplicacion: %.4lf\n", mult);
    printf("Division: %.4lf\n", divi);

    return 0;}