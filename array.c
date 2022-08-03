#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

/*
FUNÇÃO PARA INVESTIGAR SE O NUMERO ESTÁ NO ARRAY
*/
bool isItThere (int X, int *Array){
    bool located = false;


    for(int i = 0; i < 5; i++){
        printf("Array[%d] = %d\n", i, Array[i]);
        if (X == Array[i]){
            //printf("-->%d<--\n", Array[i]);
            located = true;
        }
    }

    return located;
}

/*FUNÇÃO PARA PRINTAR SE O NUMERO ESTÁ No ARRAY*/

void printIsItThere (bool isThere){
    bool located = false;
    located = isThere;

    if(located == false){
        printf("O numero não está no array\n");
    }
    else{
        printf("O numero está no array\n");
    }
}

/*IDENTIFICAR MAIOR NUMERO*/

int maiorNumero(int *Array){
    int maior = Array[0];
    for(int i = 1; i < 5; i++){
        if(maior < Array[i]){
            maior = Array[i];
        }
    }
    return maior;
}

/*PRINTAR MAIOR NUMERO*/

int printMaior(int Maior){
    printf("O maior número do Array é:  %d\n", Maior);
}

int main(){
    int Array[5];
    int X = 0;
    printf("Digite uma array de inteiros:   \n");
    /*PREENCHER O ARRAY*/
        for(int i = 0; i < 5; i++){
            int Z = 0;
            printf("Digite o valor do numero na posição %d: \n", i);
            scanf("%d", &Z);
            Array[i] = Z;
        }

    /*SELECIONAR NUMERO A SER PROCURADO*/
    printf("Qual número deseja procurar?    \n");
        scanf("%d", &X);
    
    /*ENVIANDO PARÂMETROS AO MÉTODO LOCALIZAR NUMERO*/
    printIsItThere(isItThere(X, Array));
    bool located = false;

    /*ENVIANDO PARÂMETROS AO MÉTODO LOCALIZAR MAIOR NUMERO*/
    printMaior(maiorNumero(Array));
}