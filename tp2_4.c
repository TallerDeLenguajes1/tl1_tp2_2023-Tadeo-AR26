#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct compu{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
} typedef compu;

void cargarComputadoras(compu *PC);
void mostrarComputadoras(compu *PC);
void computadoraMasVieja(compu *PC);
void mayorVelocidad(compu *PC);

int main(){
    int i;
    compu *PC;
    PC = (compu *)malloc(5*sizeof(compu));
    cargarComputadoras(&PC[0]);
    mostrarComputadoras(&PC[0]);
    computadoraMasVieja(&PC[0]);
    mayorVelocidad(&PC[0]);
    getchar();
    getchar();

    return 0;
}

void cargarComputadoras(compu *PC){
    int i, aux;
    char tipos[6][10]= {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    for(i = 0; i < 5; i++){
        PC->velocidad = 1+rand()%3;
        PC->anio = 2015+rand()%9;
        PC->cantidad= 1+rand()%8;
        aux = 5+rand()%6;
        PC->tipo_cpu = tipos[aux];
        
        PC++;
    }
}

void mostrarComputadoras(compu *PC){
    int i;
    for(i = 0; i < 5; i++){
        printf("PC %d\n", i+1);
        printf("%dGHz ", PC[i].velocidad);
        printf("%d ", PC[i].anio);
        printf("Nucleos: %d ", PC[i].cantidad);
        printf("Procesador: ");
        puts(PC[i].tipo_cpu);
        fflush(stdin);
    }
}

void computadoraMasVieja(compu *PC){
    int anio, num, i;
    anio = PC[0].anio;
    for(i = 0; i < 5; i++){
        if(anio >= PC[i].anio){
            anio = PC[i].anio;
            num = i;
        }
    }
    printf("\nLa PC mas vieja es la numero %d, anio %d\n", num+1, anio);
}

void mayorVelocidad(compu *PC){
    int i, vel, num;
    vel = PC[0].velocidad;
    for(i = 0; i < 5; i++){
        if(vel <= PC[i].velocidad){
            vel = PC[i].velocidad;
            num = i;
        }
    }
    printf("La PC con mayor velocidad es la numero %d, %d GHz\n", num+1, vel);
}
