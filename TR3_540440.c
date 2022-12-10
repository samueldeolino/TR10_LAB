#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
    //VariÃ¡veis que podem ser usadas
    unsigned int x[200];
    int y;
    int z;
    int w;
    int i;
    //#########################

    // Zerando o bit-set.
    for(i = 0; i <= 199; i++){
        x[i]= 0;
    }

    // Faz a coleta dos números digitados pelo usuário.
    while(1){
        printf("Digite um numero! "); // 
        scanf("%i", &z);
        if(z == -1){ // Para sair do while
            break;
        }
        else{ // Definindo a posição do vetor onde o número será armazenado
            w = z/32;
            x[w] = x[w] | (1 << (z - 32*w));
        }
    }

    z = 0;
    y = 0;
    
    // Imprimir os números armazenados.
    while(y <= 199){ 
        for(z; z <= 31; z++){ // Percorrendo o vetor bit-set
            if(1 & (x[y] >> z)){ // Verificando posiçao bit a bit p/ poder imprimir
                printf("%i \n", (z+(32*y))); 
            }
    }
    y++;
    z = 0;
    }
    
    //#########################
    return 0;  
}

