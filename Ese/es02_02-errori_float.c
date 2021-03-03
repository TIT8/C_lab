/* 
 * Corso di Fondamenti di Informatica
 * Esercizio:
 * programma che evidenzia gli errori intrinseci alla rappresentazione float
 * ed il fatto che non vanno mai fatti confronti di uguaglianza tra valori di
 * tipo float perché il risultato è inaffidabile
 */


/* 
 * Programma di test sulla precisione della rappresentazione a virgola mobile.
 *
 * Viene preso un numero e su di esso vengono eseguite una serie di 
 * moltiplicazioni e divisioni il cui effetto complessivo, in termini 
 * matematici è di lasciare il numero invariato. In realtà il programma
 * verifica che alla fine il numero è cambiato e stampa un messaggio d'errore.
 * Questa discrepanza è dovuta al fatto che ognuna delle operazioni fatte
 * introduce un piccolo errore dovuto al fatto che il tipo di dato float è
 * una rappresentazione APPROSSIMATA di un numero reale, a causa del numero
 * limitato di bit disponibili per rappresentare il dato. A lungo andare,
 * tali errori di rappresentazione si accumulano, causando il problema.
 *
 * Attenzione: il numero di iterazioni necessario per evidenziare l'errore
 * può differire da macchina a macchina. Con la macchina di test i valori sono
 * Valore iniziale: 1.23456776142120361328
 * Valore finale:   1.23456788063049316406
 *
 * NOTA: le istruzioni identificate con "debug" servono solo per controllo.
 *
 */

#include <stdio.h>

int main()

{
  const int NUMERO_ITERAZIONI = 6;
  /* definisce il numero di operazioni compiute; il valore imposto è il
   * minimo che, sulla macchina usata per il test, produce un errore */

  const float COSTANTE_FLOAT = 1.2345678;
  /* un valore arbitrario */

  float VariabileFloat;
  /* usata per rappresentare un numero reale sul quale effettuare una serie
   * di operazioni matematiche */
  int Contatore;

  VariabileFloat = COSTANTE_FLOAT;
  printf("\nValore iniziale: %.20f\n", VariabileFloat);

  Contatore = NUMERO_ITERAZIONI;

  while ( 1 <= Contatore )
    {
      VariabileFloat = VariabileFloat/Contatore;
      printf("\n%d:\t%.20f", Contatore, VariabileFloat);
      --Contatore;
    }

  Contatore = 1;

  printf("\n");

  while ( NUMERO_ITERAZIONI >= Contatore )
    {
      VariabileFloat = VariabileFloat*Contatore;
      printf("\n%d:\t%.20f", Contatore, VariabileFloat);
      ++Contatore;
    }


  if ( COSTANTE_FLOAT != VariabileFloat )
    {
      printf("\n\nNumeri diversi!");
      printf("\nValore finale: %.20f\n", VariabileFloat);
    }

  return(0);
}



