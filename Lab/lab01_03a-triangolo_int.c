/* 
 * Corso di Fondamenti di Informatica
 * Esercizio di laboratorio
 */

#include <stdio.h>

int main(void)
{
  int Lato1, Lato2, Lato3;
  /* i lati del triangolo */
  
  printf("\nInserisci lunghezza del primo lato: ");
  scanf("%d", &Lato1);
  
  printf("\nInserisci lunghezza del secondo lato: ");
  scanf("%d", &Lato2);
   
  printf("\nInserisci lunghezza del terzo lato: ");
  scanf("%d", &Lato3);
  
  /*** controllo che sia effettivamente un triangolo: ***/
  if ( (Lato1+Lato2 <= Lato3) ||
       (Lato2+Lato3 <= Lato1) ||
       (Lato1+Lato3 <= Lato2) )
  {
   printf("\nQuesto non e' un triangolo!\n");
  }
  else
  {
    if ( (Lato1 == Lato2) && (Lato2 == Lato3) )
    /* notare che cio' implica che sia anche Lato1 == Lato3 */
    {   
      printf("\nIl triangolo e' equilatero.\n");
    }
    else
    /* il triangolo non e' equilatero, dunque e' isoscele o scaleno */
    {
      if ( (Lato1 == Lato2) || (Lato1 == Lato3) || (Lato2 == Lato3) )
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
