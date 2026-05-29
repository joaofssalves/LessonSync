#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//Notas: criar funcao para 

typedef struct {
    int inicio1, fim1;   /* 1º intervalo */
    int inicio2, fim2;   /* 2º intervalo (opcional) */
    int numIntervalos;   /* 1 ou 2 */
} Disp;

typedef struct nodePessoa {
    char nome[30];
    int numAulas;
    Disp disponiblidade[7];
    int data;                       //numero de dias desde 1/1/2000
    struct nodePessoa *next;
} nodePessoa;

int dataCtoT(int data) {

}

void adicionaPessoa(nodePessoa *head, char nome[], Disp dispo[], int data) {
    int i;
    while (head->next != NULL) {
        head = head->next;
    }
    nodePessoa *novo = (nodePessoa *) malloc(sizeof( nodePessoa));

    head->next = novo; 
    novo->numAulas = 0;
    novo->next=NULL;
    strcpy(novo->nome,nome);
    for (i=0; i==6; i++) {
        novo->disponiblidade[i].inicio1 = dispo[i].inicio1;
        novo->disponiblidade[i].fim1 = dispo[i].fim1;
        novo->data=data;
        if (novo->disponiblidade[i].numIntervalos==2) {
            novo->disponiblidade[i].inicio2 = dispo[i].inicio2;
            novo->disponiblidade[i].fim2 = dispo[i].fim2;
        }
    } 
    return;
};

int pessoaExiste (nodePessoa *head) {};
void adicionaPessoa (char nome[], int ) {};


main() {

}