#include <stdio.h>
#include <stdlib.h>

struct no {
    struct no *esq;
    int val;
    struct no *dir;
};

void preOrdem(struct no *r);
void posOrdem(struct no *r);
void emOrdem(struct no *r);

int main(){

    return 0;
}

void preOrdem(struct no *r){
    if(r != NULL){
        printf("%d", r -> val);
        preOrdem(r -> esq);
        preOrdem(r -> dir);
    }
}

void posOrdem(struct no *r){
    if(r != NULL){
        posOrdem(r -> esq);
        posOrdem(r -> dir);
        printf("%d", r -> val);
    }
}

void emOrdem(struct no *r){
    if(r != NULL){
        emOrdem(r -> esq);
        printf("%d", r -> val);
        emOrdem(r -> dir);
    }
}

