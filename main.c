#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>

int main(){
    //Declaração das variáveis
    int i;
    float vet1[2],vet2[2],mod1,mod2,cos,prod;

    srand(time(NULL));
    //Atribuindo valores inteiros aleatórios para x e y do vetor 1 e do vetor 2
    for(i=0;i<2;i++){
        vet1[i] = rand() % 10;
        vet2[i] = rand() % 10;
    }

    for(i=0;i<2;i++){
        printf("Vetor 1[%d]= %.1f\n",i,vet1[i]);
        printf("Vetor 2[%d]= %.1f\n",i,vet2[i]);
    }
    //Cálculo do módulo do primeiro vetor
    mod1 = sqrt(pow(vet1[0],2)+pow(vet1[1],2));
    printf("O valor do |V1| eh %.2f\n",mod1);

    //Cálculo do módulo do segundo vetor
    mod2 = sqrt(pow(vet2[0],2)+pow(vet2[1],2));
    printf("O valor do|V2| eh %.2f\n",mod2);

    //Cálculo do produto interno de A e B
    prod = (vet1[0]*vet2[0] + vet1[1]*vet2[1]);

    //Cálculo do cos de V1 e V2
    cos = prod /(mod1 * mod2);

    printf("O valor do cos de V1 e V2 eh %.2f",cos);
    return 0;
}
