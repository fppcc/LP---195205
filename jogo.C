/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : Jogo Interativo de Sudoku (jogo.c)
Data        : 22/06/2026
Objetivo    : Permitir que o usuário preencha interativamente os zeros do 
               tabuleiro da imagem até completar e validar o jogo.
Aprendizado : Manipulação de matrizes, loops de controle de jogo interativo 
               e validação de submatrizes 3x3.
-------------------------------------------------------------------------- */






#include <stdio.h>
#include <stdlib.h>

#define TAM 9

void mostrarTabuleiro(int m[TAM][TAM]) {
    printf("\n    0 1 2   3 4 5   6 7 8\n");
    printf("  -------------------------\n");
    for (int i = 0; i < TAM; i++) {
        if (i > 0 && i % 3 == 0) {
            printf("  ------+-------+------\n");
        }
        printf("%d | ", i);
        for (int j = 0; j < TAM; j++) {
            if (j > 0 && j % 3 == 0) {
                printf("| ");
            }
            if (m[i][j] == 0) {
                printf(". ");
            } else {
                printf("%d ", m[i][j]);
            }
        }
        printf("|\n");
    }
    printf("  -------------------------\n");
}

int validarSolucao(int m[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (m[i][j] == 0) return 0;
        }
    }

    for (int i = 0; i < TAM; i++) {
        int linha[10] = {0};
        int coluna[10] = {0};
        for (int j = 0; j < TAM; j++) {
            int vl = m[i][j];
            int vc = m[j][i];
            
            if (linha[vl] || coluna[vc]) return 0;
            linha[vl] = 1;
            coluna[vc] = 1;
        }
    }

    for (int L = 0; L < TAM; L += 3) {
        for (int C = 0; C < TAM; C += 3) {
            int bloco[10] = {0};
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int v = m[L + i][C + j];
                    if (bloco[v]) return 0;
                    b[v] = 1;
                }
            }
        }
    }
    return 1;
}

int main() {
    int mat[TAM][TAM] = {0};
    int fixo[TAM][TAM] = {0};

    FILE *f = fopen("input2.txt", "r");
    if (f == NULL) {
        printf("Erro crítico: Não foi possível abrir o arquivo input2.txt!\n");
        return 1;
    }

    int total_lidos = 0;
    while (total_lidos < 81) {
        int num;
        if (fscanf(f, "%d", &num) == 1) {
            int i = total_lidos / TAM;
            int j = total_lidos % TAM;
            
            mat[i][j] = num;
            if (num != 0) {
                fixo[i][j] = 1;
            }
            total_lidos++;
        } else {
            if (fgetc(f) == EOF) {
                break;
            }
        }
    }
    fclose(f);

    int lin, col, val;

    while (1) {
        mostrarTabuleiro(mat);

        int cheio = 1;
        for (int r = 0; r < TAM; r++) {
            for (int o = 0; o < TAM; o++) {
                if (mat[r][o] == 0) cheio = 0;
            }
        }

        if (cheio) {
            if (validarSolucao(mat)) {
                printf("\n=============================================\n");
                printf("  PARABÉNS! Você resolveu o Sudoku com sucesso!");
                printf("\n=============================================\n");
                break;
            } else {
                printf("\n[AVISO] O tabuleiro está cheio, mas há erros na solução. Corrija-os!\n");
            }
        }

        printf("\nDigite: Linha Coluna Valor (Ex: 1 1 2) ou '-1 -1 -1' para sair: ");
        if (scanf("%d %d %d", &lin, &col, &val) != 3) {
            printf("\nEntrada inválida! Digite apenas números.\n");
            while (getchar() != '\n');
            continue;
        }

        if (lin == -1 && col == -1 && val == -1) {
            printf("\nJogo encerrado. Até a próxima!\n");
            break;
        }

        if (lin < 0 || lin >= TAM || col < 0 || col >= TAM || val < 1 || val > 9) {
            printf("\nValores incorretos! Coordenadas de 0 a 8 e Valores de 1 a 9.\n");
            continue;
        }

        if (fixo[lin][col]) {
            printf("\nErro: Você não pode alterar uma posição inicial definida pelo professor!\n");
        } else {
            mat[lin][col] = val;
        }
    }

    return 0;
}
