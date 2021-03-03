/* 
 * Corso di Fondamenti di Informatica
 * Esercizio:
 * Informatica (CIV): tema d'esame del 25 Febbraio 2011
 */

/* Cosa stampa a schermo il seguente programma C? */

#include <stdio.h>

int main()
{
  int i;

  for(i=0;i<12;i++)
  {
    printf("\t%d", i);
	  if (i>=5) i++;
	}
	
	printf("\n");
	
	for(i=12;i>=1;i--)
  {
    printf("\t%d", i);
	  if ( (i%5==0) || (i%6==0)) i--;
	}
	
	printf("\n");
	
	for(i=12;i>=1;i--)
  {
    printf("\t%d", i);
	  if (i%5==0) i=i+1;
	}
	
	printf("\n");
	return (0);
}

/* 
log di esecuzione:
  0	1	2	3	4	5	7	9	11
  12	10	8	7	6	4	3	2	1
  12	11	10	10	10	10	10	10... (ciclo infinito)
*/


