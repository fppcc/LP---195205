/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 27/04/2026
Objetivo    : realizar o problema da "cifra de Cesar"
Aprendizado : melhor entendimento sobre manipulação de strings 
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {
    int n, p;
    char w[51];
    scanf("%d", &n);
    
    while (n > 0) {
        scanf("%s %d", w, &p);
        for (int i = 0; i < strlen(w); i++) {
            char l = w[i];
            for (int j = 0; j < p; j++) {
                l = l - 1;
                if (l < 'A') {
                    l = 'Z';
                }
            }
            printf("%c", l);
        }
        printf("\n");
        n--;
    }
    return 0;
}
