/* 
 * Corso di Fondamenti di Informatica
 * Esercizio di laboratorio
 */

#include<stdio.h>

int main(void)
{
  const float Pi = 3.14159;
  float Raggio;
  
  printf("\n\nInserisci il raggio del cerchio: ");
  scanf("%f", &Raggio);
  
  printf("Circonferenza: %f", Raggio*2*Pi);
  printf("\nArea: %f", Raggio*Raggio*Pi);
  
  return 0;
}
