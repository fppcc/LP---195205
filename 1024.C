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
    scanf("%d", &n);
    getchar(); // consome o '\n'

    while (n--) {
        char str[1001];

        fgets(str, sizeof(str), stdin);

        int tam = strlen(str);

        if (str[tam - 1] == '\n') {
            str[tam - 1] = '\0';
            tam--;
        }

        // Passo 1
        for (int i = 0; i < tam; i++) {
            if ((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z')) {
                str[i] += 3;
            }
        }

        // Passo 2
        for (int i = 0; i < tam / 2; i++) {
            char aux = str[i];
            str[i] = str[tam - 1 - i];
            str[tam - 1 - i] = aux;
        }

        // Passo 3
        for (int i = tam / 2; i < tam; i++) {
            str[i] -= 1;
        }

        printf("%s\n", str);
    }

    return 0;
}
