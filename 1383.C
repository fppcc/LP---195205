/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Felipe Reis Da Silva
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 22/06/2026
Objetivo    : Realizar um scanner de sudoku
Aprendizado : .
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int k = 1; k <= n; k++) {
        int v[9][9];
        int cont = 0;
        
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                scanf("%d", &v[i][j]);
            }
        }
        
        for(int i = 0; i < 9; i++){
            int c[10] = {0};
            for(int j = 0; j < 9; j++){
                int val = v[i][j];
                if(c[val] == 1){
                    cont++;
                }
                else{
                    c[val] = 1;
                }
            }
        }
        
        for (int j = 0; j < 9; j++){
            int c[10] = {0};
            for (int i = 0; i < 9; i++){
                int val = v[i][j];
                if(c[val] == 1){
                    cont++;
                }
                else{
                    c[val] = 1;
                }
            }
        }
        
        for(int i = 0; i < 9; i += 3){
            for(int j = 0; j < 9; j += 3){
                int c[10] = {0};
                for(int x = 0; x < 3; x++){
                    for(int y = 0; y < 3; y++){
                        int val = v[i + x][j + y];
                        if(c[val] == 1){
                            cont++;
                        }
                        else{
                            c[val] = 1;
                        }
                    }
                }
            }
        }
        
        printf("Instancia %d\n", k);
        if(cont == 0){
            printf("SIM\n\n");
        }
        else{
            printf("NAO\n\n");
        }
    }
    
    return 0;
}
