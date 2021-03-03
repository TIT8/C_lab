/* 
 * Corso di Fondamenti di Informatica
 * Esercizio: tema d'esame
 */

/* 
Si consideri il programma C sotto riportato. Lo studente risponda con un breve
testo a ciascuna delle seguenti domande:

1. Quali sono le operazioni eseguite dal programma?

2. Se si elimina la parola "typedef" dall'istruzione indicata con (1), il
   processo di compilazione termina con un errore oppure va comunque a buon
   fine? Perché?
*/

#include <stdio.h>
#define MAX 5

typedef struct  /* (1) */
{
  int Dati[MAX];
  int Utili;
} TL;

int main()
{
  TL L;
  int Conta;

  L.Utili = 0;
  while (L.Utili < MAX)
  {
    scanf("%d", &(L.Dati[L.Utili]));
    ++L.Utili;
  }

  for (Conta = 0; Conta < L.Utili; ++Conta)
  {
    printf("%d ", L.Dati[Conta]);
  }

  return (0);
}
