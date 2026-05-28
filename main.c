#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
    int inicio1, fim1;   /* 1º intervalo */
    int inicio2, fim2;   /* 2º intervalo (opcional) */
    int numIntervalos;   /* 1 ou 2 */
} Disp;

typedef struct nodePessoa {
    char nome[30];
    int numAulas;
    Disp disponiblidade[7];
    struct nodePessoa *next;
} nodePessoa;

void adicionaPessoa(nodePessoa *head) {
    while (head != NULL) {
        head = head->next;
    }
    head->numAulas = 0;
    head->next=NULL;
    strcpy(head->nome,"nome");
    return;
    
};
int pessoaExiste (nodePessoa P) {};
void adicionaPessoa (char nome[], int ) {};


main() {

}