/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 09/06/2026
Objetivo    : Calcular a quantidade de grãos de trigo no tabuleiro de
               xadrez utilizando números grandes e recursão.
Aprendizado : Uso de recursão, operações com unsigned long long e
               manipulação de valores muito grandes.
-------------------------------------------------------------------------- */





#include <stdio.h>

unsigned long long graos(int casa)
{
    if (casa == 1)
        return 1ULL;

    return 2ULL * graos(casa - 1);
}

int main()
{
    int testes;
    int casas;

    scanf("%d", &testes);

    while (testes--)
    {
        scanf("%d", &casas);

        unsigned long long total = 0;

        for (int i = 1; i <= casas; i++)
            total += graos(i);

        printf("%llu kg\n", total / 12000ULL);
    }

    return 0;
}
