/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 09/06/2026
Objetivo    : Separar números em vetores de pares e ímpares e exibi-los
               quando atingirem 5 posições.
Aprendizado : Manipulação de vetores, contadores e estruturas de repetição.
-------------------------------------------------------------------------- */





#include <stdio.h>

int main()
{
    int par[5], impar[5];
    int contPar = 0, contImpar = 0;
    int valor;

    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &valor);

        if (valor % 2 == 0)
        {
            par[contPar++] = valor;

            if (contPar == 5)
            {
                for (int j = 0; j < 5; j++)
                    printf("par[%d] = %d\n", j, par[j]);

                contPar = 0;
            }
        }
        else
        {
            impar[contImpar++] = valor;

            if (contImpar == 5)
            {
                for (int j = 0; j < 5; j++)
                    printf("impar[%d] = %d\n", j, impar[j]);

                contImpar = 0;
            }
        }
    }

    for (int i = 0; i < contImpar; i++)
        printf("impar[%d] = %d\n", i, impar[i]);

    for (int i = 0; i < contPar; i++)
        printf("par[%d] = %d\n", i, par[i]);

    return 0;
}
