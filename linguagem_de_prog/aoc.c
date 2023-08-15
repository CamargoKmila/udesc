#include<stdio.h>
#define M 4000
int mat[M][M];

int main(){
    for(int i =0;i < M;i++){
        for(int j=0;j<M;j++){
            mat[i][j]=42;
        }
    }
    printf("fim!");

    return 0;
}

 



// time ./programa
// clock_t begin = clock();

// preenche();

// clock_t end = clock();
// double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
// printf("Segundos: %lf\n",time_spent);
