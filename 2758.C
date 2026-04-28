/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2758
Data        : 27/04/2026
Objetivo    : criar variaveis com precisão simples e dupla 
Aprendizado : entendimento sobre float e double (diferença de casas decimais)
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    float n1, n2;
    double d1, d2;
    scanf("%f %f %lf %lf", &n1, &n2, &d1, &d2);
    printf("A = %f, B = %f\nC = %lf, D = %lf\n", n1, n2, d1, d2);
    printf("A = %.1f, B = %.1f\nC = %.1f, D = %.1f\n", n1, n2, d1, d2);
    printf("A = %.2f, B = %.2f\nC = %.2f, D = %.2f\n", n1, n2, d1, d2);
    printf("A = %.3f, B = %.3f\nC = %.3f, D = %.3f\n", n1, n2, d1, d2);
    printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n", n1, n2, d1, d2);
    printf("A = %.0f, B = %.0f\nC = %.0f, D = %.0f\n", n1, n2, d1, d2);
    return 0;
}
