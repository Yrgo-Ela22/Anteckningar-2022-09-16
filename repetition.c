/********************************************************************************
* repetition.c: Repetitionsuppgift innefattande utskrift och inmatning av
*               heltal och flyttal.
*
*               -----------------------------------------------------------------
*               Lite information om ännu en datatyp, char.
*               -----------------------------------------------------------------
*               Datatypen char (character) används för enstaka tecken. Därmed
*               gäller att en datamedlem av datatypen char enbart kan lagra
*               ett tecken.

*               Som exempel, en charvariabel döpt c1 kan deklareras och
*               tilldelas ett frågetecken enligt nedan:
*
*               char c1 = '?';
*
*               Notera att apostrofer '' används runt tecknet, vilket indikerar
*               för kompilatorn att det rör sig om ett enskilt tecken. Detta
*               kan jämföras mot strängar, där citattecken "" används för att
*               indikera att det rör sig om multipla tecken.
*
*               Enstaka tecken skrivs ut och läses in via formatspecificerare
*               %c, så för att skriva ut innehållet lagrat av charvariabel c1
*               ovan kan följande utskrift genomföras:
*
*               printf("The character stored by variable c1 is %c\n", c1);
*
*               För inmatning kan funktionen scanf_s användas, där antalet
*               tecken som skall läsas in måste anges som tredje parameter,
*               vilket för scanf_s genomförs för alla datatyper där tecken
*               matas in (strängar och charvariabler):
*
*               scanf_s("%c", &c1, 1); // Enbart för Visual Studio.
*
*               Om en annan kompilator används kan funktionen scanf användas
*               och då skall antalet tecken som skall läsas in inte anges:
*
*               scanf("%c", &c1); // Standardfunktionen för inläsning.
*
*               Det är också möjligt att läsa in enstaka tecken via funktionen
*               getchar (get character), som returnerar inläst tecken:
*
*               const char c1 = getchar();
*
*               Exempelvis kan användaren ombedes mata in ett tecken från
*               tangentbordet, som sedan skrivs ut enligt nedan:
*
*               printf("Enter a character\n");
*               const char c1 = getchar();
*               printf("\nYou entered the character %c!\n\n", c1);
********************************************************************************/
#include <stdio.h>

/* Funktionsdeklarationer: */
void print_numbers(const int x,
                   const double y);

/****************************************************************************
* main: Programmets startpunkt. Deklarerar variabler a och b.
****************************************************************************/
int main(void)
{
   int a = 0;
   double b = 0;

   printf("Enter an integer:\n");
   scanf_s("%d", &a);

   printf("\nEnter a floating point number:\n");
   scanf_s("%lg", &b);

   printf("\n");

   print_numbers(a, b);

   return 0;
}

/****************************************************************************
* print_numbers: Skriver ut summan, differensen, produkten samt kvoten
*                av ett heltal och ett flyttal.
*
*                - x: Angivet heltal.
*                - y: Angivet flyttal.
****************************************************************************/
void print_numbers(const int x,
                   const double y)
{
   printf("%d + %lg = %lg\n", x, y, x + y);
   printf("%d - %lg = %lg\n", x, y, x - y);
   printf("%d * %lg = %lg\n", x, y, x * y);
   printf("%d / %lg = %lg\n", x, y, x / y);
   return;
}