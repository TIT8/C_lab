#include <stdio.h>
#define CAPIENZA 4
#define TERMINATORE '-'

typedef struct
{
  char Dati[CAPIENZA];
  int Utili;
} TipoL; /* tipo lista sequenziale utile per contenere una sequenza di char */

typedef enum {false, true} boolean;

int main()
{
  TipoL Lista;
  /* lista sequenziale di char inseriti dall'utente */
  boolean FineInput;
  /* controlla la fine della fase di input */
  int ContaStampati;
  /* numero di elementi della lista stampati a schermo */

  /*** FASE DI INPUT ***/
  Lista.Utili = 0;
  /* svuota la lista */

  printf("\n\nInserisci da 0 a %d caratteri minuscoli diversi tra loro.", CAPIENZA);
  printf("\n[Il carattere '%c' termina l'input. Ogni altro carattere sara' ignorato.]\n", TERMINATORE);

  FineInput = false;
  while ((false == FineInput) && (Lista.Utili < CAPIENZA))
  {
    scanf("%c", &Lista.Dati[Lista.Utili]);
    scanf("%*c");
    /* elimina il carattere '\n' inserito dall'utente premendo <enter> e che
     * altrimenti verrebbe letto alla prossima iterazione del ciclo */

    if ( (Lista.Dati[Lista.Utili] >= 'a') && (Lista.Dati[Lista.Utili] <= 'z') )
    /* se il valore inserito è utile */
    {
      ++Lista.Utili;
    }
    else
    {
      if ( TERMINATORE == Lista.Dati[Lista.Utili] )
      {
        FineInput = true;
      }
      else
      {
        printf("Il carattere '%c' non e' valido ed e' stato ignorato.\n", Lista.Dati[Lista.Utili]); 
      }
    }
  }

  /*** FASE DI STAMPA ***/
  printf("\n\nContenuto della lista:\n{ ");
  for (ContaStampati = 0; ContaStampati < Lista.Utili; ++ContaStampati)
  {
    printf("%c ", Lista.Dati[ContaStampati]);
  }
  printf("}\n");

  return (0);
}
