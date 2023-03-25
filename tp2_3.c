#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main(){
    int i,j;
    int mt[N][M], *puntero_mt;
    puntero_mt = &mt[0][0];
    for(i = 0;i<N; i++){
        for(j = 0;j<M; j++){
            *puntero_mt=1+rand()%100;
            printf("%d ", *puntero_mt);
            puntero_mt++;
        }
    printf("\n");
    }
}