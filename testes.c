# include <studio.h>
# include <string.h>

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
    printf("Fatorial de %d eh: %d", valor, resultado);
    return 0;
}
