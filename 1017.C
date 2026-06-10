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

float calcularLitros(int tempo, int velocidade)
{
    float distancia = tempo * velocidade;
    return distancia / 12.0;
}

int main()
{
    int tempo, velocidade;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    printf("%.3f\n", calcularLitros(tempo, velocidade));

    return 0;
}
