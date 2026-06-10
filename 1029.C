/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 09/06/2026
Objetivo    : Calcular o Fibonacci de forma recursiva e informar a
               quantidade de chamadas realizadas pela função.
Aprendizado : Utilização de funções recursivas e contagem de chamadas.
-------------------------------------------------------------------------- */





#include <stdio.h>

int chamadas;

int fibonacci(int n)
{
    chamadas++;

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int testes, n;

    scanf("%d", &testes);

    while (testes--)
    {
        scanf("%d", &n);

        chamadas = -1;

        int resultado = fibonacci(n);

        printf("fib(%d) = %d calls = %d\n",
               n, chamadas, resultado);
    }

    return 0;
}
