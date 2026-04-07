#include <stdio.h>
#include <locale.h> 
int main() {
    setlocale(LC_ALL, "Portuguese");

/* 
    // Tipos Básicos em C
    char letra = 'G';                // Caractere
    int idade = 25;                  // Inteiro
    float altura = 1.75;             // Ponto flutuante (precisão simples)
    double pi = 3.1415926535;        // Ponto flutuante (precisão dupla)

    // Impressão dos valores
    printf("--- Tipos Básicos ---\n");
    printf("Char: %c\n", letra);
    printf("Int: %d\n", idade);
    printf("Float: %.2f\n", altura); // %.2f limita a 2 casas decimais
    printf("Double: %g\n", pi);      // %g escolhe a melhor representação
 */

 /*    int numeros[4];
    numeros[0] = 1;
    numeros[1] = 11;
    numeros[2] = 6;
    numeros[3] = 9;
    numeros[4] = 10;
    for(int i = 4; i >= 0; i--){
        printf("%d \n", numeros[i]);
    } */


    int numeros[10];
    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;
    numeros[4] = 5;  
    numeros[5] = 6;
    numeros[6] = 7;
    numeros[7] = 8;
    numeros[8] = 9;
    numeros[9] = 10;
    int result = 0;
   
    for(int i = 0; i < 10; i++){
        //printf("%d\n", numeros[i]);
        result += numeros[i];
        printf("%d\n", result);
    }

    
    return 0;

}