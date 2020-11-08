//
//  main.c
//  Array numeri consecutivi
//
//  Created by Luca Pastore on 07/11/2020.
//

/*
 ---------------------------------------------------------------------------------------
 
 ANALISI E SPECIFICHE
 Si intende realizzare un programma che, dato un array di n elementi, tramite una funzione
(compatta1) che riceve l'array in ingresso, restituisce la lunghezza dell'array privo
 di ripetizioni.
 
 ---------------------------------------------------------------------------------------
 FUNZIONE Compatta1
 
 Dati in ingresso: indrizzo dell'array e la sua dimensione
 Pre-condizione: L'array non deve essere vuoto e che deve essere di interi
 Dati in uscita: la dimensione dell'array modificato
 Post-condizione: la dimensione deve essere minore o uguale di quella iniziale e l'array
 deve possedere elementi non ripetuti nel caso fossero presenti.
 
 ---------------------------------------------------------------------------------------
 
 
 */
    
#include <stdio.h>
#define N 100


int compatta1(int A[], int lunghezza)
{
    
    int i,j;
    
    for(i=0;i<lunghezza;i++)
    {
        if(A[i] == A[i+1])
        {
            for(j=i+1;j<lunghezza;j++)
            {
                A[j] = A[j+1];
            }
            lunghezza--;
            i--;
        }
    }
    
    return lunghezza;
    
}

int main(void) {
    
    int array[N], lunghezza;
    
    printf("Salve bell'ommo, dammi la dimensione del tuo array: ");
    scanf("%d",&lunghezza);
    
    for(int i=0; i<lunghezza;i++)
    {
        printf("Inserisci il %d numero: ", i+1);
        scanf("%d", &array[i]);
    }
    
   printf("Il numero e' %d \n: " , compatta1(array,lunghezza));
    
    
    

        
}
