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
  /* lista sequenziale di caratteri inseriti dall'utente */
  boolean FineInput;
  /* controlla la fine della fase di input */
  int ContaStampati;
  /* numero di elementi della lista stampati a schermo */
  int ContaElementi;
  /* conta gli elementi della lista gia' esaminati */
  boolean GiaPresente;
  /* vale true se nuovo elemento e' un duplicato di un elemento
   * gia' presente nella lista */

  /*** FASE DI INPUT ***/
  Lista.Utili = 0;
  /* svuota la lista */

  printf("\n\nInserisci da 0 a %d caratteri minuscoli diversi tra loro.", CAPIENZA);
  printf("\n[Il carattere '%c' termina l'input. Ogni altro carattere sara' ignorato.]\n", TERMINATORE);

  FineInput = false;
  while ((false == FineInput) && Lista.Utili < CAPIENZA)
  {
    scanf("%c", &Lista.Dati[Lista.Utili]);
    scanf("%*c");
    /* elimina il carattere '\n' inserito dall'utente premendo <enter> e che
     * altrimenti verrebbe letto alla prossima iterazione del ciclo */

    if ( (Lista.Dati[Lista.Utili] >= 'a') && (Lista.Dati[Lista.Utili] <= 'z') )
    /* se il valore inserito è utile */
    {
      /* verifica se il valore inserito era già presente */
      ContaElementi = 0;
      GiaPresente = false;
      
      while (ContaElementi < Lista.Utili)
      {
        /* printf("\nDEBUG: sto esaminando l'elemento di indice %d \n", ContaElementi); */
        
        if (Lista.Dati[ContaElementi] == Lista.Dati[Lista.Utili])
        /* se l'elemento in esame e' identico a quello che si vuole
         * inserire nella lista sequenziale */
        {
          GiaPresente = true;
        }
        ++ContaElementi;
      }

      if (false == GiaPresente)
      {
        ++Lista.Utili;
        /* solo se Lista.Utili viene incrementato si completa
         * effettivamente l'inserimento del nuovo elemento */
      }
      else
      {
        printf("Il carattere '%c' e' un doppione ed e' stato ignorato.\n", Lista.Dati[Lista.Utili]);
      }
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
