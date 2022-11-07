#include <studio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void variaveis(){
    int idade;
    float salario = 7500;
    double qtd_atomos;
    bool confirma = false;
    char genero = 'M';
    short int idade = 18;
    float salario = 7500;
    double qtd_atomos = 123456789123;
    char genero = 'F';
    float altura = 1.63;
    
    printf("\n idade: %d",idade);
    printf("\n salario: %f",salario);
    printf("\n qtd_atomos: %f",qtd_atomos);
    printf("\n genero: %c",genero);
    printf("\n altura: %.3f",altura);
    int x = 5;
    int y = 10;
    printf("\n Valor guardado em x:%d",x);
    printf("\n Valor guardado em y:%d",y);
    printf("\n Endereco de x: %x",&x);
    printf("\n Endereco de y: %x",&y);
    
    float valor1=0, valor2=0;
    printf("\n Digite o primeiro valor:");
    scanf("%f",&valor1);
    printf("\n Digite o segundo valor:");
    scanf("%f",&valor2);
    printf("Variavel 1 = %.2f",valor1);
    printf("Variavel 2 = %.2f",valor3);
    
    #define pi 3.14
    const float g = 9.80;
    printf("\n pi = %f",pi);
    printf("\n g = %f",g);
    #define _USE_MATH_DEFINES
    M_PI;
    printf("\n pi = %f",M_PI);
    int x = 10, y = 5;
    float peso = 75.5;
    char genero = 'M';

    printf("\n Espaco alocado para x = %d",sizeof(x));
    printf("\n Espaco alocado para y = %d",sizeof(y));
    printf("\n Espaco alocado para peso %d",sizeof(peso));
    printf("\n Espaco alocado para genero = %d",sizeof(genero));
}

// void main(void)
// {
//     char s1[80], s2[80];
//     gets(s1);
//     gets(s2);
//     printf("comprimentos: %d %d\n",strlen(s1),strlen(s2));
//     if (!strcmp(s1, s2)) printf("As strings são iguais\n");
//     strcat(s1, s2);
//     printf("%s\n, s1");
//     strcpy(s1,"Isso é um teste.\n");
//     printf(s1);
//     if (strchr("alo",'o')) printf("o está em alo\n");
//     if (strstr("ola aqui", "ola")) printf ("ola encontrado")
// }

int fatorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * fatorial(n-1);
}

int main()
{
    int resultado;
    int valor = 8;
    resultado = fatorial(valor);
    printf("Fatorial de %d = %d", valor, resultado);
    return 0;
}
