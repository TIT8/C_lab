#include <stdio.h>
#define CAPIENZA 6

typedef struct
{
  char Dati[CAPIENZA];
  int Utili;
} TipoL;
/* tipo lista sequenziale utile per contenere una sequenza di char */

int main()
{
  TipoL Lista;
  /* lista sequenziale di char inseriti dall'utente */
  int ContaStampati;
  /* numero di elementi della lista stampati a schermo */

  /*** FASE DI INPUT ***/
  Lista.Utili = 0;
  /* svuota la lista */
  printf("\n\nInserisci %d caratteri minuscoli diversi tra loro.\n", CAPIENZA);

  while (Lista.Utili < CAPIENZA)
  {
    scanf("%c", &Lista.Dati[Lista.Utili]);
    scanf("%*c");
    /* elimina il carattere '\n' inserito dall'utente premendo <enter> e che
     * altrimenti verrebbe letto alla prossima iterazione del ciclo */
    ++Lista.Utili;
  }

  /*** FASE DI STAMPA ***/
  printf("\n\nContenuto della lista sequenziale:\n{ ");
  for (ContaStampati = 0; ContaStampati < Lista.Utili; ++ContaStampati)
  {
    printf("%c ", Lista.Dati[ContaStampati]);
  }
  printf("}\n");

  return (0);
}
