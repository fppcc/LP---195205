/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 09/06/2026
Objetivo    : Determinar o menor valor de m para que a região 13 seja a
               última a ser eliminada.
Aprendizado : Simulação do problema de Josephus utilizando recursão.
-------------------------------------------------------------------------- */





#include <iostream>

using namespace std;

int josephus(int n, int k)
{
    if (n == 1)
        return 0;

    return (josephus(n - 1, k) + k) % n;
}

bool regiao13Ultima(int n, int m)
{
    int pos = 0;

    for (int pessoas = 2; pessoas <= n - 1; pessoas++)
        pos = (pos + m) % pessoas;

    return pos == 11; // índice da região 13 (começando em 0)
}

int main()
{
    int n;

    while (cin >> n && n != 0)
    {
        int m = 1;

        while (!regiao13Ultima(n, m))
            m++;

        cout << m << endl;
    }

    return 0;
}
