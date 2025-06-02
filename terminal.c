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