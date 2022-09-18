/********************************************************************************
* main.c: Demonstration av villkorssatser och loopar i C.
* 
*         F�r att realisera satser som bara exekverar en g�ng ifall ett givet
*         villkor �r sant anv�nds prim�rt if-else satsen, som m�jligg�r att
*         ett flertal olika villkor kan testas och implementeras.
* 
*         If-else satsen anv�nds f�r att generera villkor enligt nedan:
* 
*         Om x �r sant, genomf�r plan A.
*         Annars om y �r sant, genomf�r plan B.
*         Annars (f�r �vriga fall) genomf�r plan C.
*
*         Ovanst�ende villkor kan realiseras via f�ljande kod.
* 
*         if (x)
*         {
*            // Kod f�r att genomf�ra plan A.
*         }
*         else if (y)
*         {
*            // Kod f�r att genomf�ra plan B.
*         }
*         else
*         {
*            // Kod f�r att genomf�ra plan C.
*         }
* 
*         Valfritt antal villkor kan l�ggas till i en s�dan sats.
* 
*         F�r att realisera satser som exekverar s� l�nge ett givet villkor
*         �r sant anv�nds s� kallade loopar, prim�rt via while prim�rt if-else satsen, som m�jligg�r att
*         ett flertal olika villkor kan testas och implementeras.
* 
*         F�r att realisera loopar, allts� satser som exekverar s� l�nge ett 
*         givet villkor �r sant, anv�nds normalt while-satsen eller for-satsen,
*         varav while-satsen �r mer vanlig f�r kontinuerliga loopar, exempelvis 
*         s�dana som genomf�rs under ett helt program, medan
*         for-satser anv�nds f�r att generera loopar ett visst antal varv,
*         iteration genom arrayer och liknande.
* 
*         F�r att implementera en kontinuerlig loop kr�vs enbart att villkoret
*         ej �r lika med 0, vilket normalt implementeras via villkoret 1. Som
*         exempel, en kontinuerlig while-sats definieras enligt nedan:
* 
*         while (1)
*         {
*         }
* 
*         Om while-satsen enbart skall exekvera tio g�nger, s� kan en r�knare
*         implementeras via en variabel i, som r�knas upp fr�n 0 till denna n�r
*         v�rdet 10. I slutet av while-satsen sker inkrementering med ++-operatorn:
* 
*         int i = 0; // R�knare till while-satsen.
* 
*         while (i < 10) // Loop som eekverar tio g�nger.
*         {
*            i++; // Inkrementerar i (�kar i med ett).
*         }
* 
*         Ovanst�ende fungerar bra, men det kan l�tt bli r�rigt ifall ett 
*         flertal loopar implementeras, s�rskilt ifall n�stlade loopar anv�nds
*         (loopar inuti loopar). En mer komprimerad variant av ovanst�ende 
*         kan realiseras via for-satsen, d�r r�knaren/iteratorn, villkoret samt 
*         inkrementeringen definieras som villkor, separerade med semikolon:
* 
*         for (int i = 0; i < 10; ++i) // Loop som exekverar tio g�nger.
*         {
*         }
* 
*         while-satsen f�redras allts� prim�rt f�r kontinuerliga loopar, annars
*         f�redras prim�rt for-satsen.
* 
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* main: L�ser in temperaturen fr�n terminalen fem g�nger. Om temperaturen 
*       �verstiger 30 grader eller understiger 20 grader s� regleras denna 
*       till 25 grader, annars g�rs ingenting.
********************************************************************************/
int main(void)
{
   int temp = 0;

   for (int i = 0; i < 5; ++i)
   {
      printf("Please enter the room temperature:\n");

      scanf_s("%d", &temp);

      if (temp > 30)
      {
         temp = 25;
      }
      else if (temp < 20)
      {
         temp = 25;
      }

      printf("\nThe temperature is %d degrees!\n\n", temp);
   }

   printf("Bye!\n\n");
   return 0;
}