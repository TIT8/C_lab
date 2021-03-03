/* 
 * Corso di Fondamenti di Informatica
 * Esercizio di laboratorio
 */

#include <stdio.h>

#define SOGLIA 1e-6
/* se il valore assoluto della differenza tra due float è meno di SOGLIA, essi
 * essi verranno considerati uguali. Notare che il valore dato a SOGLIA e'
 * arbitrario e NON deriva da considerazioni sulla struttura della macchina. */
 
int main(void)
{
  float Lato1, Lato2, Lato3;
  /* i lati del triangolo */
  
  printf("\nInserisci lunghezza del primo lato: ");
  scanf("%f", &Lato1);
  
  printf("\nInserisci lunghezza del secondo lato: ");
  scanf("%f", &Lato2);
   
  printf("\nInserisci lunghezza del terzo lato: ");
  scanf("%f", &Lato3);
  
  /*** controllo che sia effettivamente un triangolo: ***/
  if ( (Lato1+Lato2 <= Lato3) ||
       (Lato2+Lato3 <= Lato1) ||
       (Lato1+Lato3 <= Lato2) )
  {
   printf("\nQuesto non e' un triangolo!\n");
  }
  else
  {
    if ( ( ( (Lato1-Lato2) < SOGLIA ) && ( (Lato1-Lato2) > -SOGLIA ) ) &&
         ( ( (Lato2-Lato3) < SOGLIA ) && ( (Lato2-Lato3) > -SOGLIA ) )    )
    /* notare che cio' implica che sia anche Lato1 == Lato3 */
    {   
      printf("\nIl triangolo e' equilatero.\n");
    }
    else
    /* il triangolo non e' equilatero, dunque e' isoscele o scaleno */
    {
      if ( ( ( (Lato1-Lato2) < SOGLIA ) && ( (Lato1-Lato2) > -SOGLIA ) ) ||
           ( ( (Lato2-Lato3) < SOGLIA ) && ( (Lato2-Lato3) > -SOGLIA ) ) ||
           ( ( (Lato1-Lato3) < SOGLIA ) && ( (Lato1-Lato3) > -SOGLIA ) )    )
      {
        printf("\nIl triangolo e' isoscele.\n");
      }
      else
      {
        printf("\nIl triangolo e' scaleno.\n");  
      }
    }
  }

  return 0;
}
