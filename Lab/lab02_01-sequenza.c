/* 
 * Corso di Fondamenti di Informatica
 * Esercizio di laboratorio
 */

#include <stdio.h>

int main(void)
{
  int ValoreInserito;
  /* un numero intero inserito dall'utente, positivo o nullo; nel secondo
   * caso il programma termina */
  int Massimo, Minimo;
  /* valori massimo e minimo tra quelli inseriti fino all'istante presente;
   * Massimo vale -1 fino a che l'utente non ha inserito almeno un numero
   * (si noti che -1 e' sicuramente inferiore a tutti i valori inseriti
   * dall'utente, dal momento che all'utente sono richiesti numeri positivi) */

  Massimo = -1;

  printf("\nInserisci un numero positivo, oppure 0 per terminare: ");
  scanf("%d", &ValoreInserito);

  while ( ValoreInserito != 0 )
  {
    if ( -1 == Massimo ) 
    /* il numero inserito e' il primo della sequenza, quindi non
     * esistono ancora un massimo e un minimo */
    {
      Massimo = ValoreInserito;
      Minimo = ValoreInserito;
    }
    else
    /* esistono gia' un massimo e un minimo */
    {
      if (ValoreInserito > Massimo)
      {
        Massimo = ValoreInserito; 
      }
      
      if (ValoreInserito < Minimo)
      {
        Minimo = ValoreInserito; 
      }
    }
    
    printf("\nInserisci un numero della sequenza (0 per terminare): ");
    scanf("%d", &ValoreInserito);
  }
  
  /* NOTA: quando l'esecuzione del programma arriva qui significa che 
     l'utente ha inserito uno 0, eventualmente dopo aver inserito altri
     valori */
   
  if (Massimo != -1)
  /* cio' accade solo se prima dello 0 sono stati inseriti altri valori */
  {
    printf("\nValore massimo: %d", Massimo);
    printf("\nValore minimo: %d\n", Minimo);
  }
  else
  {
    printf("\nNessun numero inserito.\n");  
  }

  return 0;  
}
