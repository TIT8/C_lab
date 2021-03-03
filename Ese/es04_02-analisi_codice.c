/* 
 * Corso di Fondamenti di Informatica
 * Esercizio: tema d'esame
 */
 
/* 
Si consideri il programma C sotto riportato, modificato in modo che alla riga di programma indicata con "@@@" gli elementi dell'array siano uguagliati alle 6 cifre del numero di matricola dello studente anziché a zero. Allo studente si chiede:
  1. di spiegare molto brevemente (1-2 frasi) qual è l'operazione eseguita dal programma così modificato;
  2. di indicare cosa stampa a schermo il programma. 
*/

#include <stdio.h>

int main()
{
  int Matricola[6] = { 8, 4, 4, 5, 1, 0 };  /* @@@ */
  /* nota: questo e' il metodo standard per inizializzare gli elementi di un 
   * array al momento della dichiarazione della variabile array: lista degli
   * elementi separati da virgole e racchiusi tra parentesi graffe */
  int ElementoCorrente;
  int CifraConsiderata;

  for (CifraConsiderata = 0; CifraConsiderata < 10; ++CifraConsiderata)
  {
    printf ("\n%d: ", CifraConsiderata);
  
    for (ElementoCorrente = 0; ElementoCorrente < 6; ++ElementoCorrente)
    {
      if (Matricola[ElementoCorrente] == CifraConsiderata) 
      {
        printf ("*");
      }
    }
  }
    
  return (0);
}

