//
//  main.c
//  numeriArmstrong
//
//  Created by Luca Pastore on 07/11/2020.
//


#include <stdio.h>
#include <math.h>

#define N 100

void cerca_stampa_armstrong(int A[], int dim){

    int temp[10];
    int temp_dim = 0;
    int token = 0;  //variabile sentinella che ci permette di uscire dal for
    int var =0;  // variabile di appoggio dove andiamo ad effettuare la potenza
    int k;
    int mantienm;  // variabile d'appoggio per evitare di perdere il valore di A[]

    int i, j;
    
    for(i = 0; i < dim; i++) //loopa l'array
    {

        mantienm = A[i]; // salvataggio dell'elemento A[i] in mantienm poichè verrà modificato
        for(j = 0; token == 0; j++)
        {

            temp[j] = mantienm % 10; // si andrà a prendere la cifra meno significativa del numero, ossia quella a destra
            temp_dim++; //viene incrementata la dimensione dell'array

            if ((mantienm/10) == 0) // se abbiamo finito le cifre del numero, col token= 1 usciamo dal ciclo
            {
                token = 1;
            }
            else{
                mantienm = mantienm /10; //vengono prese le cifre più significative rispetto alle unità
            }

        }

      
        
        for(k =0;k<temp_dim;k++)
        {
            
            var += pow(temp[k],temp_dim); //si effettua la potenza di ogni singola cifra del numero e si somma a var
        }
        
        if(var != A[i])  // se la somma delle potenze è diversa al numero originario, quest'ultimo viene azzerato
        {
            A[i] = 0;
        }
            

        
        //si azzerano le variabili per poi ricominciare
        temp_dim = 0;
        token = 0;
        var = 0;

        }


    return;
}



int main (void){

    //passo l'array con i valori già inseriti
    int vett[N] = {57, 23, 24678050, 24678051, 88593477, 146511208, 472335975, 534494836, 912985153,43};
    int dim_vett = 10;



    //si richiama la procedura
    cerca_stampa_armstrong(vett,dim_vett);
    
    
    
    //si procede alla stampa dell'array con i relativi valori impostati a 0; vengono quindi visualizzati solo i numeri di Armstrong 
    for(int i=0;i<dim_vett;i++)
    {
        printf("%d \n", vett[i]);
    }

   
}
