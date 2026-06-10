/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 09/06/2026
Objetivo    : Determinar a posição sobrevivente no problema de Josephus.
Aprendizado : Utilização de recursão para resolver problemas de eliminação
               circular.
-------------------------------------------------------------------------- */





#include <iostream>

using namespace std;

int josephus(int n, int k)
{
    if (n == 1)
        return 1;

    return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main()
{
    int casos;
    cin >> casos;

    for (int i = 1; i <= casos; i++)
    {
        int n, k;
        cin >> n >> k;

        cout << "Case " << i << ": "
             << josephus(n, k) << endl;
    }

    return 0;
}
