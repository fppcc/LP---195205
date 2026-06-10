/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 09/06/2026
Objetivo    : Verificar se uma grade de Sudoku está correta.
Aprendizado : Manipulação de matrizes, vetores de contagem e validação
               de linhas, colunas e submatrizes.
-------------------------------------------------------------------------- */





#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int instancia = 1; instancia <= n; instancia++)
    {
        int sudoku[9][9];
        int valido = 1;

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%d", &sudoku[i][j]);
            }
        }

        /* Verifica linhas */
        for (int i = 0; i < 9 && valido; i++)
        {
            int cont[10] = {0};

            for (int j = 0; j < 9; j++)
            {
                cont[sudoku[i][j]]++;
            }

            for (int k = 1; k <= 9; k++)
            {
                if (cont[k] != 1)
                {
                    valido = 0;
                    break;
                }
            }
        }

        /* Verifica colunas */
        for (int j = 0; j < 9 && valido; j++)
        {
            int cont[10] = {0};

            for (int i = 0; i < 9; i++)
            {
                cont[sudoku[i][j]]++;
            }

            for (int k = 1; k <= 9; k++)
            {
                if (cont[k] != 1)
                {
                    valido = 0;
                    break;
                }
            }
        }

        /* Verifica blocos 3x3 */
        for (int linha = 0; linha < 9 && valido; linha += 3)
        {
            for (int coluna = 0; coluna < 9 && valido; coluna += 3)
            {
                int cont[10] = {0};

                for (int i = linha; i < linha + 3; i++)
                {
                    for (int j = coluna; j < coluna + 3; j++)
                    {
                        cont[sudoku[i][j]]++;
                    }
                }

                for (int k = 1; k <= 9; k++)
                {
                    if (cont[k] != 1)
                    {
                        valido = 0;
                        break;
                    }
                }
            }
        }

        printf("Instancia %d\n", instancia);

        if (valido)
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }

    return 0;
}
