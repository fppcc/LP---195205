/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 09/06/2026
Objetivo    : Determinar o Máximo Divisor Comum (MDC) entre dois números
               utilizando recursão.
Aprendizado : Aplicação do algoritmo de Euclides de forma recursiva.
-------------------------------------------------------------------------- */





#include <stdio.h>

int mdc(int a, int b)
{
    if (b == 0)
        return a;

    return mdc(b, a % b);
}

int main()
{
    int n, a, b;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &a, &b);

        printf("%d\n", mdc(a, b));
    }

    return 0;
}
