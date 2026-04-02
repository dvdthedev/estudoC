#include <stdio.h>
#include <locale.h> 

int soma(int a, int b) {
    return a + b;
}

int parOuImpar(int a, int b){
    int c = a + b;
    if(c % 2 == 0){
        return 1;
    } else{
        return 0;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    //Crie um programa em C que declare variáveis de cada um dos tipos básicos atribua valores as variáveis criadas e, em seguida, imprima seus valores. 

/*     // Tipos Básicos em C
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

    // Crie um programa em C que peça ao usuário que insira um caractere e, em seguida, imprima o código ASCII correspondente ao caractere digitado. 

    printf("Digite um caractere para converter em ascii: \n");

    char letraEscolhida; */

    //scanf(" %c", &letraEscolhida);

    //printf("O código ASCII de '%c' é: %d\n", letraEscolhida, letraEscolhida);

    //Crie um programa em C que peça ao usuário que insira dois números inteiros e imprima a soma, a diferença, o produto e o quociente. 

/*     printf("Digite o primeiro numero: \n");

    int num1;

    scanf(" %i", &num1);

    printf("Digite o segundo numero: \n");

    int num2;

    scanf(" %i", &num2);

    float divisao = num1 / num2;

    printf("Soma do numero %i com %i = %i \n", num1, num2, (num1+num2));

    printf("A diferenca entre %i e %i = %i \n", num1, num2, (num1 - num2));

    printf("O produto de %i x %i = %i \n", num1, num2, (num1 * num2));

    printf("O quociente entre %i e %i = %d, %f \n", num1, num2, (num1 / num2), divisao); */

    //Crie um programa em C que peça ao usuário que insira três números inteiros, calcule a média como um número de ponto flutuante e imprima o resultado. 

  /*   int num1, num2, num3;
    printf("Digite o primeiro numero: \n");
    scanf(" %i", &num1);
    printf("Digite o segundo numero: \n");
    scanf(" %i", &num2);
    printf("Digite o terceiro numero: \n");
    scanf(" %i", &num3);

    float media = (num1 + num2 + num3) / 3.0;

    printf("A media dos numeros %i, %i e %i = %f \n", num1, num2, num3, media); */

    /* Crie um programa em C que declare uma variável int e uma variável char. Atribua a eles valores
fornecidos pelo usuário. Em seguida, incremente cada um várias vezes (o número de vezes
também é fornecido pelo usuário) e imprima os resultados. */
/* 
    char letra;
    int numero;
    printf("Digite um numero inteiro: \n");
    scanf(" %i", &numero);
    printf("Digite um caractere: \n");
    scanf(" %c", &letra);
    int vezes;
    printf("Digite o numero de vezes para incrementar: \n");
    scanf(" %i", &vezes);
    for(int i = 0; i < vezes; i++){
        numero++;
        letra++;
    }

    printf("O numero incrementado %i vezes é: %i \n", vezes, numero);
    printf("O caractere incrementado %i vezes é: %c \n", vezes, letra); */

    //Crie uma função que recebe dois números inteiros e retorna a soma deles. Utilize essa funçãoem seu programa principal. 

/*     int num1, num2;
    printf("Digite o primeiro numero: \n"); 
    scanf(" %i", &num1);
    printf("Digite o segundo numero: \n");
    scanf(" %i", &num2);
    int resultado = soma(num1, num2);
    printf("A soma de %i e %i é: %i \n", num1, num2, resultado);

 */

//Crie uma função chamada "parOuImpar" que recebe um número inteiro e imprime se ele é par ou ímpar. Use esta função em seu programa principal. 
int num1, num2;
    printf("Digite o primeiro numero: \n"); 
    scanf(" %i", &num1);
    printf("Digite o segundo numero: \n");
    scanf(" %i", &num2);
    int res = parOuImpar(num1, num2);
    if(res == 1){
        printf("a soma de %i com %i é um numero par,  %i", num1, num2, num1+num2);
    } else {
        printf("a soma de %i com %i é um numero impar,  %i", num1, num2, num1+num2);
    }

    return 0;
}