/* 
 * Corso di Fondamenti di Informatica
 * Esercizio:
 * strutture dati per partita a scacchi.
 */

/* Esempio di uso dei tipi di dato user-defined: definizione delle
 * strutture dati usata da un programma relativo al gioco degli scacchi.
 * (N.B. questo programma non fa nulla di utile.) */

#define LATO_SCACCHIERA 8
/* numero di caselle per lato della scacchiera */

int main()
{
  typedef enum {Bianco, Nero} Colore;

  typedef enum {pedone, torre, alfiere, cavallo, re, regina, nessuno} Pezzo;
  /* notare che il valore "nessuno" e' necessario per poter descrivere le
   * caselle vuote della scacchiera. Sarebbe stato anche possibile non 
   * definirlo e utilizzare invece (per segnalare che una casella e' vuota)
   * un ulteriore valore del tipo Colore, chiamato ad esempio "Vuoto" */

  typedef struct 
  {
    Pezzo   PezzoPresente;
    Colore  ColoreDelPezzo;
  } Casella;
  /* usato per definire il contenuto di una casella di una scacchiera per
   * il gioco degli scacchi */

  Casella Scacchiera[LATO_SCACCHIERA][LATO_SCACCHIERA];
  /* questo array bidimensionale rappresenta lo stato della scacchiera; per
   * convenzione l'elemento di indici [0][0] è quello (guardando la scacchiera
   * dall'alto) all'estrema sinistra del lato adiacente al giocatore bianco,
   * il primo indice rappresenta la posizione lungo un asse che va dal bianco
   * verso il nero, e il secondo indice la posizione lungo la direzione 
   * perpendicolare alla precedente (valori massimi sul lato destro della
   * scacchiera come visto dal giocatore bianco) */

  /*** due esempi di assegnamento ***/

  /*** aggiunta di un pezzo: ***/
  Scacchiera[7][5].ColoreDelPezzo = Nero;
  Scacchiera[7][5].PezzoPresente = pedone;
  /* notare che è necessario dare un valore ad ENTRAMBI i campi dell'elemento
   * Scacchiera[7][5] dell'array */

  /*** esecuzione di una mossa: ***/
  Scacchiera[4][3] = Scacchiera[4][2];
  /* copio i dati da una casella all'altra: notare che stiamo copiando tutti
   * i campi di una struct con una singola operazione */
  Scacchiera[4][2].PezzoPresente = nessuno;
  /* non è necessario specificare il colore, dal momento che la casella viene
   * indicata come vuota tramite il valore Nessuno del campo PezzoPresente */
  
  return 0;
}
