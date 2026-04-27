/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 27/04/2026
Objetivo    : realizar uma soma de numeros impares consecutivos 
Aprendizado : usar o comando while e entendi melhor sobre i++ e ++i
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int x, y, i, s = 0;
    scanf("%d %d", &x, &y);
    
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    
    i = x + 1;
    while (i < y) {
        if (i % 2 != 0) {
            s = s + i;
        }
        i++;
    }
    
    printf("%d\n", s);
    return 0;
}
