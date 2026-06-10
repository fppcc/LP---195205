/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 09/06/2026
Objetivo    : Organizar camisetas por cor, tamanho e nome do aluno.
Aprendizado : Utilização de structs, ordenação e comparação de strings.
-------------------------------------------------------------------------- */





#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[100];
    char cor[10];
    char tamanho;
} Camiseta;

int comparar(const void *a, const void *b)
{
    Camiseta *c1 = (Camiseta *)a;
    Camiseta *c2 = (Camiseta *)b;

    int cor = strcmp(c1->cor, c2->cor);

    if (cor != 0)
        return cor;

    if (c1->tamanho != c2->tamanho)
        return c2->tamanho - c1->tamanho; // G > M > P

    return strcmp(c1->nome, c2->nome);
}

int main()
{
    int n;
    int primeira = 1;

    while (scanf("%d", &n) && n != 0)
    {
        getchar();

        Camiseta camisetas[n];

        for (int i = 0; i < n; i++)
        {
            fgets(camisetas[i].nome, sizeof(camisetas[i].nome), stdin);
            camisetas[i].nome[strcspn(camisetas[i].nome, "\n")] = '\0';

            scanf("%s %c",
                  camisetas[i].cor,
                  &camisetas[i].tamanho);

            getchar();
        }

        qsort(camisetas, n, sizeof(Camiseta), comparar);

        if (!primeira)
            printf("\n");

        primeira = 0;

        for (int i = 0; i < n; i++)
        {
            printf("%s %c %s\n",
                   camisetas[i].cor,
                   camisetas[i].tamanho,
                   camisetas[i].nome);
        }
    }

    return 0;
}
