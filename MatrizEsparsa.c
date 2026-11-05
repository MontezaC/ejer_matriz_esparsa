#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct{
    int fila;
    int col;
    double valor;
}ElementoEsparso;

int main(){
    srand(time(NULL));
    int m,n,p;
    printf("Se realizara la multiplicacion de (A)MxN * (B)NxP\n");
    do{
        printf("Ingrese M: ");
        scanf("%d",&m);
    }while(m<=0||m>1000);
    do{
        printf("Ingrese N: ");
        scanf("%d",&n);
    }while(n<=0||n>1000);
    do{
        printf("Ingrese P: ");
        scanf("%d",&p);
    }while(p<=0||p>1000);
    //A
    FILE *archivoA;
    archivoA=fopen("matriz_a.txt","w");
    fprintf(archivoA,"%d %d\n",m,n);
    for(int i=0;i<m*n*0.05;i++){
        int fil=rand()%m;
        int col=rand()%n;
        double val=(rand()%100)+1.0;
        fprintf(archivoA,"%d %d %.2f\n",fil,col,val);
    }
    fclose(archivoA);
    //B
    FILE *archivoB;
    archivoB=fopen("matriz_b.txt","w");
    fprintf(archivoB,"%d %d\n",n,p);
    for(int i=0;i<n*p*0.05;i++){
        int fil=rand()%n;
        int col=rand()%p;
        double val=(rand()%100)+1.0;
        fprintf(archivoB,"%d %d %.2f\n",fil,col,val);
    }
    fclose(archivoB);
    return 0;
}