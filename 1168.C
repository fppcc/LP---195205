/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 09/06/2026
Objetivo    : Calcular a quantidade de LEDs necessária para exibir um
               número informado.
Aprendizado : Utilização da estrutura switch e manipulação de strings.
-------------------------------------------------------------------------- */





#include <stdio.h>

int main()
{
    int n;
    char numero[101];

    scanf("%d", &n);

    while (n--)
    {
        int leds = 0;

        scanf("%s", numero);

        for (int i = 0; numero[i] != '\0'; i++)
        {
            switch (numero[i])
            {
                case '1':
                    leds += 2;
                    break;

                case '2':
                case '3':
                case '5':
                    leds += 5;
                    break;

                case '4':
                    leds += 4;
                    break;

                case '6':
                case '9':
                case '0':
                    leds += 6;
                    break;

                case '7':
                    leds += 3;
                    break;

                case '8':
                    leds += 7;
                    break;
            }
        }

        printf("%d leds\n", leds);
    }

    return 0;
}
