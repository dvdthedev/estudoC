#include <stdio.h>
#include <locale.h> 
#include <string.h>

struct Endereco {
    char rua[50];
    int num;
    char cidade[50]; // Mudado de int para char[]
};

struct Pessoa {
    char nome[50];
    int idade;
    struct Endereco moradia;
};

struct Aluno {
char nome[50];
int idade;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Aluno alunos[4];

    for(int i = 0; i < 4; i++){
        printf("Insira o nome do aluno: \n");
        scanf("%s", alunos[i].nome);
    
        printf("Insira a idade do aluno: \n");
        scanf("%i", &alunos[i].idade);

    }

    for(int i = 0; i < 4; i++){
        if(alunos[i].idade >= 18){
            printf("Aluno: %s \nIdade: %i \n", alunos[i].nome, alunos[i].idade);
        }
    }


   /*  struct Pessoa pessoas[2];
    
    strcpy(pessoas[0].nome, "Carlos");
    pessoas[0].idade = 30;
    strcpy(pessoas[0].moradia.rua, "Avenida dos Cachorros");
    strcpy(pessoas[0].moradia.cidade, "São Paulo");
    pessoas[0].moradia.num = 777; // Atribuição direta para int

    strcpy(pessoas[1].nome, "Deivid");
    pessoas[1].idade = 55;
    strcpy(pessoas[1].moradia.rua, "Avenida dos Padeiros");
    strcpy(pessoas[1].moradia.cidade, "Belo Horizonte");
    pessoas[1].moradia.num = 999; // Atribuição direta para int */

   
/*     if(pessoas[0].idade > pessoas[1].idade){
        printf("%s é mais velho do que %s, ele tem %i anos a mais.", 
                pessoas[0].nome, pessoas[1].nome, pessoas[0].idade - pessoas[1].idade);
    } else {
        printf("%s é mais velho do que %s, ele tem %i anos a mais.", 
                pessoas[1].nome, pessoas[0].nome, pessoas[1].idade - pessoas[0].idade);
    }
 */
  /*   for(int i = 0; i < 2; i++){
        printf("%s, idade: %i \n Endereço: \n Rua: %s, \n Número: %i, \n Cidade: %s\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].moradia.rua, pessoas[i].moradia.num, pessoas[i].moradia.cidade);
    } */


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

/* 
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
    } */

/*     double numeros[3];

    printf("Digite o primeiro numero: \n");


    scanf(" %lg", &numeros[0]);

    printf("Digite o segundo numero: \n");


    scanf(" %lg", &numeros[1]);

    printf("Digite o terceiro numero: \n");

    scanf(" %lg", &numeros[2]);

    printf("%lg , %lg, %lg\n", numeros[0], numeros[1], numeros[2]);

    double min = numeros[0];
    double max = numeros[0];

    for(int i = 0; i < 3; i++){
        if(numeros[i] > max){
            max = numeros[i];
        }
        if(numeros[i] < min){
            min = numeros[i];
        } 
    }

    printf("O maior número é : %lg\nO menor número é : %lg", max, min);
     */

  /*   char nome[30];

    printf("Digite seu nome: ");

    int tam = strlen(nome);
    scanf("%s", nome);
    for(int i = tam ; i >= 0; i--){
        printf("%c", nome[i]);
    } */

/*     char str1[15];
    char str2[15];

    printf("Digite uma palavra: ");
    scanf("%s", str1);
    printf("Digite outra palavra: ");
    scanf("%s", str2);

    strncat(str1, str2, 30);

    printf("%s", str1); */



    return 0;

}