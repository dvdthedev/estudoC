#include <stdio.h>
#include <locale.h> 

int main() {
    setlocale(LC_ALL, "Portuguese");

    //Crie um programa em C que declare variáveis de cada um dos tipos básicos atribua valores as variáveis criadas e, em seguida, imprima seus valores. 

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

    // Crie um programa em C que peça ao usuário que insira um caractere e, em seguida, imprima o código ASCII correspondente ao caractere digitado. 

    printf("Digite um caractere para converter em ascii: \n");

    char letraEscolhida;

    //scanf(" %c", &letraEscolhida);

    //printf("O código ASCII de '%c' é: %d\n", letraEscolhida, letraEscolhida);

    //Crie um programa em C que peça ao usuário que insira dois números inteiros e imprima a soma, a diferença, o produto e o quociente. 

    printf("Digite o primeiro numero: \n");

    int num1;

    scanf(" %i", &num1);

    printf("Digite o segundo numero: \n");

    int num2;

    scanf(" %i", &num2);

    float divisao = num1 / num2;

    printf("Soma do numero %i com %i = %i \n", num1, num2, (num1+num2));

    printf("A diferenca entre %i e %i = %i \n", num1, num2, (num1 - num2));

    printf("O produto de %i x %i = %i \n", num1, num2, (num1 * num2));

    printf("O quociente entre %i e %i = %d, %f \n", num1, num2, (num1 / num2), divisao);



    return 0;
}