/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 27/04/2026
Objetivo    : fazer um sequenciamento alfabetico intercalando maiusculas e minusculas
Aprendizado : melhor entendimento de oque reakmente são as bibliotecas e avanço em uso de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char t[51];
    while (gets(t) != NULL) {
        int u = 1;
        for (int i = 0; i < strlen(t); i++) {
            if (t[i] != ' ') {
                if (u) {
                    printf("%c", toupper(t[i]));
                    u = 0;
                } else {
                    printf("%c", tolower(t[i]));
                    u = 1;
                }
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
