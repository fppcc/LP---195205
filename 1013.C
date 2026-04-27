/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 27/04/2026
Objetivo    : descobrir o maior entre três numeros 
Aprendizado : usaar manipulação da linguagem c para definir maior entre variaveis
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int m;
    if (a > b) {
        m = a;
    } else {
        m = b;
    }
    
    if (c > m) {
        m = c;
    }
    
    printf("%d eh o maior\n", m);
    return 0;
}
