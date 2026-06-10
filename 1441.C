/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 09/06/2026
Objetivo    : Determinar o comprimento da sequência de Collatz utilizando
               recursão.
Aprendizado : Aplicação de funções recursivas em sequências matemáticas.
-------------------------------------------------------------------------- */





#include <stdio.h>

int collatz(long long n)
{
    if (n == 1)
        return 1;

    if (n % 2 == 0)
        return 1 + collatz(n / 2);

    return 1 + collatz(3 * n + 1);
}

int main()
{
    int a, b;

    while (scanf("%d %d", &a, &b) && (a != 0 || b != 0))
    {
        int inicio = a;
        int fim = b;

        if (inicio > fim)
        {
            int aux = inicio;
            inicio = fim;
            fim = aux;
        }

        int maior = 0;
        int resposta = inicio;

        for (int i = inicio; i <= fim; i++)
        {
            int tamanho = collatz(i);

            if (tamanho > maior)
            {
                maior = tamanho;
                resposta = i;
            }
        }

        printf("Between %d and %d, %d generates the longest sequence of %d values.\n",
               a, b, resposta, maior);
    }

    return 0;
}
