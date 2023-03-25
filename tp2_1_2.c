#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20


int main(){
    int i;
    srand(time(NULL));
    double vt[N], *punt_vt;
    punt_vt = &vt[0];
    for(i = 0;i<N; i++){
        *punt_vt = 1+rand()%100;
        printf("%.2f ", *punt_vt);
        punt_vt++;
    }
}
