/********************************************************************************
* repetition.c: Repetitionsuppgift innefattande utskrift och inmatning av
*               heltal och flyttal.
*
*               -----------------------------------------------------------------
*               Lite information om �nnu en datatyp, char.
*               -----------------------------------------------------------------
*               Datatypen char (character) anv�nds f�r enstaka tecken. D�rmed
*               g�ller att en datamedlem av datatypen char enbart kan lagra
*               ett tecken.

*               Som exempel, en charvariabel d�pt c1 kan deklareras och
*               tilldelas ett fr�getecken enligt nedan:
*
*               char c1 = '?';
*
*               Notera att apostrofer '' anv�nds runt tecknet, vilket indikerar
*               f�r kompilatorn att det r�r sig om ett enskilt tecken. Detta
*               kan j�mf�ras mot str�ngar, d�r citattecken "" anv�nds f�r att
*               indikera att det r�r sig om multipla tecken.
*
*               Enstaka tecken skrivs ut och l�ses in via formatspecificerare
*               %c, s� f�r att skriva ut inneh�llet lagrat av charvariabel c1
*               ovan kan f�ljande utskrift genomf�ras:
*
*               printf("The character stored by variable c1 is %c\n", c1);
*
*               F�r inmatning kan funktionen scanf_s anv�ndas, d�r antalet
*               tecken som skall l�sas in m�ste anges som tredje parameter,
*               vilket f�r scanf_s genomf�rs f�r alla datatyper d�r tecken
*               matas in (str�ngar och charvariabler):
*
*               scanf_s("%c", &c1, 1); // Enbart f�r Visual Studio.
*
*               Om en annan kompilator anv�nds kan funktionen scanf anv�ndas
*               och d� skall antalet tecken som skall l�sas in inte anges:
*
*               scanf("%c", &c1); // Standardfunktionen f�r inl�sning.
*
*               Det �r ocks� m�jligt att l�sa in enstaka tecken via funktionen
*               getchar (get character), som returnerar inl�st tecken:
*
*               const char c1 = getchar();
*
*               Exempelvis kan anv�ndaren ombedes mata in ett tecken fr�n
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