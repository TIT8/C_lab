/* 
 * Corso di Fondamenti di Informatica
 * Esercizio di laboratorio
 */

#include <stdio.h>
#define MAX_ELEM 10
/* numero massimo di elementi delle liste sequenziali */

typedef struct
{
  int Elementi[MAX_ELEM];
  /* contiene gli elementi della lista sequenziale */
  int NumElementi;  
  /* numero di elementi della lista sequenziale */
} TipoListaSeq;
/* tipo di dato usato per le liste sequenziali */
 
int main()
{
  TipoListaSeq Ingresso, Pari, Dispari;
  /* le tre liste sequenziali richieste dall'esercizio */

  int ValoreInserito;
  /* ultimo numero intero inserito dall'utente */
  int Cont;
  /* conta il numero di valori inseriti dall'utente oppure il numero di
   * elementi di un array che sono stati gia' stampati */

  Ingresso.NumElementi = 0;    
  Pari.NumElementi = 0;
  Dispari.NumElementi = 0;
 
  /*** inserimento dei numeri nei vettori: */
  
  for (Cont = 0; Cont < MAX_ELEM; ++Cont)
  {
    printf("\nInserisci un numero (#%d di %d) ", Cont+1, MAX_ELEM);
    scanf("%d", &ValoreInserito);

    Ingresso.Elementi[Ingresso.NumElementi] = ValoreInserito;
    ++Ingresso.NumElementi;
    
    if (0 == ValoreInserito%2)
    /* il numero e' pari */
    {
      Pari.Elementi[Pari.NumElementi] = ValoreInserito;
      ++Pari.NumElementi;
    }
    else
    /* il numero e' dispari */
    {
      Dispari.Elementi[Dispari.NumElementi] = ValoreInserito;
      ++Dispari.NumElementi;    
    }
  }
    
    /*** stampa dei vettori: ***/

  printf("\nNumeri inseriti: { ");
  for (Cont = 0; Cont < Ingresso.NumElementi; ++Cont)
  {
    printf("%d", Ingresso.Elementi[Cont]);
    
    if (Cont < Ingresso.NumElementi-1)
    /* l'elemento corrente non e' l'ultimo */
    {
      printf(", ");
    }
  }
  printf(" }");

  printf("\nNumeri pari:     { ");
  for (Cont = 0; Cont < Pari.NumElementi; ++Cont)
  {
    printf("%d", Pari.Elementi[Cont]);
    
    if (Cont < Pari.NumElementi-1)
    /* l'elemento corrente non e' l'ultimo */
    {
      printf(", ");
    }
  }
  printf(" }");
    
  printf("\nNumeri dispari:  { ");
  for (Cont = 0; Cont < Dispari.NumElementi; ++Cont)
  {
    printf("%d", Dispari.Elementi[Cont]);
    
    if (Cont < Dispari.NumElementi-1)
    /* l'elemento corrente non e' l'ultimo */
    {
      printf(", ");
    }
  }
  printf(" }\n\n");
  
  return 0; 
}
