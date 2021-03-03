/* 
 * Corso di Fondamenti di Informatica
 * Esercizio di laboratorio
 */

#include<stdio.h>

int main(void)
{
  float Raggio;
  const float Pi = 3.14159;
  
  printf("\n\nInserisci il raggio del cerchio: ");
  scanf("%f", &Raggio);
  
  while (Raggio >= 0)
  {
    printf("Circonferenza: %f", Raggio*2*Pi);
    printf("\nArea: %f", Raggio*Raggio*Pi);
    
    printf("\n\nInserisci il raggio del cerchio: ");
    scanf("%f", &Raggio);
  }
  
  scanf("%*c");
  return 0;
}
