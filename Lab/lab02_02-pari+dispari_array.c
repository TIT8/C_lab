/* 
 * Corso di Fondamenti di Informatica
 * Esercizio di laboratorio
 */

#include <stdio.h>
#define MAX_ELEM 10
/* numero massimo di elementi degli array */

int main()
{
  int Ingresso[MAX_ELEM], Pari[MAX_ELEM], Dispari[MAX_ELEM];
  /* i tre array richiesti dall'esercizio */
  
  int PariInseriti, DispariInseriti;
  /* numero di elementi inseriti negli array Pari e Dispari */

  int ValoreInserito;
  /* ultimo numero intero inserito dall'utente */
  int Cont;
  /* conta il numero di valori inseriti dall'utente oppure il numero di
   * elementi di un array che sono stati gia' stampati */

  PariInseriti = 0;
  DispariInseriti = 0;

  /*** inserimento dei numeri nei vettori: ***/
  
  for (Cont = 0; Cont < MAX_ELEM; ++Cont)
  {
    printf("\nInserisci un numero (#%d di %d) ", Cont+1, MAX_ELEM);
    scanf("%d", &ValoreInserito);

    Ingresso[Cont] = ValoreInserito;
    
    if (0 == ValoreInserito%2)
    /* il numero e' pari */
    {
      Pari[PariInseriti] = ValoreInserito;
      ++PariInseriti;
    }
    else
    /* il numero e' dispari */
    {
      Dispari[DispariInseriti] = ValoreInserito;
      ++DispariInseriti;
    }
  }
    
    /*** stampa dei vettori: ***/

  printf("\nNumeri inseriti: { ");
  for (Cont = 0; Cont < MAX_ELEM; ++Cont)
  {
    printf("%d", Ingresso[Cont]);
    
    if (Cont < MAX_ELEM-1)
    /* l'elemento corrente non e' l'ultimo */
    {
      printf(", ");
    }
  }
  printf(" }");

  printf("\nNumeri pari:     { ");
  for (Cont = 0; Cont < PariInseriti; ++Cont)
  {
    printf("%d", Pari[Cont]);
    
    if (Cont < PariInseriti-1)
    /* l'elemento corrente non e' l'ultimo */
    {
      printf(", ");
    }
  }
  printf(" }");
    
  printf("\nNumeri dispari:  { ");
  for (Cont = 0; Cont < DispariInseriti; ++Cont)
  {
    printf("%d", Dispari[Cont]);
    
    if (Cont < DispariInseriti-1)
    /* l'elemento corrente non e' l'ultimo */
    {
      printf(", ");
    }
  }
  printf(" }\n\n");
  
  return 0; 
}
