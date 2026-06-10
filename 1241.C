/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/
Data        : 09/06/2026
Objetivo    : 
Aprendizado : 
-------------------------------------------------------------------------- */



#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char a[1001], b[1001];

    scanf("%d", &n);

    while (n--) {
        scanf("%s %s", a, b);

        int ta = strlen(a);
        int tb = strlen(b);

        if (tb > ta) {
            printf("nao encaixa\n");
            continue;
        }

        int encaixa = 1;

        for (int i = 0; i < tb; i++) {
            if (a[ta - tb + i] != b[i]) {
                encaixa = 0;
                break;
            }
        }

        if (encaixa)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }

    return 0;
}
