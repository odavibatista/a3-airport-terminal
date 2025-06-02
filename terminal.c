#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Flight {
    struct No* previous;
    char origem[20];
    char destino[20];
    char numero[10];
    char data[11]; // Formato: YYYY-MM-DD
    char hora[6];  // Formato: HH:MM
    char companhia[20];
    char tipo[20]; //  "Econômico", "Primeira Classe"
    char status[20]; // "Aguardando Embarque", "Atrasado", "Cancelado"
    struct No* next;
} No;

Flight* generateAddress(char origem[20], char destino[20], char numero[10], char data[11], char hora[6], char companhia[20], char tipo[20], char status[20]) {
    Flight* newFlight = (Flight*) malloc(sizeof(Flight));
    if (newFlight == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
    }
    strcpy(newFlight->origem, origem);
    strcpy(newFlight->destino, destino);
    strcpy(newFlight->numero, numero);
    strcpy(newFlight->data, data);
    strcpy(newFlight->hora, hora);
    strcpy(newFlight->companhia, companhia);
    strcpy(newFlight->tipo, tipo);
    strcpy(newFlight->status, status);
    newFlight->previous = NULL;
    newFlight->next = NULL;
    return newFlight;
}

int main()
{
    int opcao = -1;
    char origem[20];
    char destino[20];
    char numero[10];
    char data[11]; // Formato: YYYY-MM-DD
    char hora[6];  // Formato: HH:MM
    char companhia[20];
    char tipo[20]; // "Econômico", "Primeira Classe"
    char status[20]; // "Aguardando Embarque", "Atrasado", "Cancelado"
    Flight* start = NULL;
    Flight* end = NULL;

    while( option != 0){
        printf( "\n\n------Menu------\n");
        printf( " 1 - Inserir novo voo na lista \n");
        printf( " 2 - Remover voo da lista \n");
        printf( " 3 - Mudar status do voo \n");
        printf( " 4 - Mostrar o terminal \n");
        printf( " 0 - Sair \n");
        printf( " Digite sua escolha:  ");
        scanf( "%d" , &option );
    }
}
