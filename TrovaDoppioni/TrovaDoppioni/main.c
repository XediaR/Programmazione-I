//
//  main.c
//  TrovaDoppioni
//
//  Created by Luca Pastore on 08/11/2020.
//

/*
 ANALISI E SPECIFICHE
 Si intende realizzare un programma che, dato un array di numeri inseriti dall'utente, stampi quali sono i numeri che si ripetono due o più volte
 
 
 Ricerca_array
 
 Dati di input: array riempito, dimensione
 Dati di output: i numeri ripetuti all'interno dell'array
 Pre-condizione: MOCC A MAMMT
 Post-condizione: i numeri stampati devono avere almeno 2 occorrenze nell'array
 
 

 
 */
#include <stdio.h>
#define N 100

void Ricerca_array(int vett[], int dim )
{
    int token = 0;
    int array_appoggio[N];
    int dim_appoggio = 0;
   
    
    for(int i=0;i<dim;i++)
    {
        
        for(int k=i+1;k<dim && token ==0;k++)
        {
           if(vett[i]==vett[k])
           {
               int j=0;
               while(j<dim_appoggio && vett[i]!= array_appoggio[j]) j++;
              
               if(j==dim_appoggio)
               {
                   
                   array_appoggio[dim_appoggio] = vett[i];
                   dim_appoggio++;
               }
            
               token=1;
           }
            
        }
        token =0;
    }
    
    for(int i=0;i<dim_appoggio;i++)
    {
        printf(" %d - numero: %d \n",i+1,array_appoggio[i]);
    }
    
    return;
}
int main(void) {
    
    int vett[N], dim;
    
    printf("Hey Capo! Scegli la dimensione del tuo array: ");
    scanf("%d",&dim);
    
    for(int i=0;i<dim;i++)
    {
        printf("Inserisci il %d numero: ",i+1);
        scanf("%d",&vett[i]);
    }
   
    Ricerca_array(vett,dim);
    
   
    
    return 0;
}
