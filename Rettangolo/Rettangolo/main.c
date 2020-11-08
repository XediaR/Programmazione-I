//
//  main.c
//  Rettangolo
//
//  Created by Luca Pastore on 07/11/2020.
//


/* ANALISI E SPECIFICHE
Realizzare un programma che, dati in input lunghezza e altezza di un rettangolo, stampi a video il rettangolo formato da asterischi
 
 Stampa_rettangolo
 
 Dati input: lunghezza e l'altezza del rettangolo
 Dati in output: nulla
 Pre-condizione: i lati devono essere maggiori o uguali ad 1 e diversi tra loro
 Post-condizione: nulla
 Descrizione: Stampa tanti asterischi messi in modo tale da formare un rettangolo a,b
 
 */

/*
  * * * *
  *     *
  *     *
 
 */

#include <stdio.h>


void stampa_rettangolo (int lunghezza, int altezza)
{
    for(int i=0;i<lunghezza;i++) //si va a formare la prima riga di asterischi
    {
        printf("*");
    }
    
    for(int j=0;j<altezza-2;j++) // va da capo e mi costruisce la riga verticale
    {
        printf("\n");
        printf("*");
        
        for(int k=0;k<lunghezza-2;k++) // va a mettere gli spazi sulla riga orizzontale
        {
            printf(" ");
        }
        printf("*");
        
    }
    
    printf("\n");
        
    
    for(int i=0;i<lunghezza;i++) //si va a formare l'ultima riga di asterischi
    {
        printf("*");
    }
    
    return;
}

int main(void)
{
        
    int lunghezza, altezza;
    
    printf("Inserisci la lunghezza del tuo rettangolo: ");
    scanf("%d", &lunghezza);
    
    printf(" \n Inserisci l'altezza del tuo rettangolo: ");
    scanf("%d",&altezza);
    
    stampa_rettangolo(lunghezza, altezza);
    printf("\n");
    return 0;
    
}
