/********************************************************************************
* pointers.c: Demonstration av pekare i C.
* 
*             Pekare utgör datamedlemmar som pekar på adresser till andra
*             datamedlemmar. Exempelvis kan en intpekare (int*) peka på
*             adressen till en intvariabel (int).
* 
*             En pekare har följande syntax:
*             datatyp* namn = adress.
* 
*             Pekarens datatyp skall sättas till samma datatyp som 
*             datamedlemmen den pekar på, exempelvis double* ifall pekaren
*             skall peka på en variabel av datatypen double, const int* ifall
*             pekaren skall peka på en konstant av dataypen int.
* 
*             För att peka på adressen till en given datamedlem används den
*             så kallade adressoperatorn &, där exempelvis &x betyder adressen
*             till datamedlemmen x.
* 
*             Som exempel, låt en variabel av datatypen double döpt x
*             deklareras enligt nedan och initieras med startvärde 3.4:
*             double x = 3.4;
* 
*             Låt sedan en pekare döpt ptr1 peka på adressen till x via
*             nedanstående instruktion:
*             double* ptr1 = &x;
* 
*             Innehållet på adressen som ptr1 pekar på kan kommas åt via den
*             så kallade dereferensoperatorn *, där *ptr1 betyder innehållet
*             på adressen som ptr1 pekar på, dvs. innehållet i variabel x.
* 
*             Som exempel, via dereferensoperatorn * kan innehållet lagrat av 
*             variabel x ändras till 7.3 enligt nedan:
*             *ptr1 = 7.3;
* 
*             För pekare ptr1 gäller följande:
*             ptr1  => adressen som ptr1 pekar på (adressen till x).
*             *ptr1 => innehållet på adressen som ptr1 pekar på (innehållet
*                      lagrat av variabel x).
*             &ptr1 => adressen till pekaren ptr1, dvs. adressen där ptr1
*                      är lagrad på.
* 
*             För utskrift av adresser används formatspecificerare %p (pointer).
*             Som exempel, för att skriva ut adressen till en variabel döpt
*             x kan följande utskrift genomföras:
*             printf("The variable x is stored at address %p!\n", &x);
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* main: Deklarerar en intvariabel döpt x och tilldelas startvärdet 3. Därefter
*       deklareras en intpekare ptr1, som pekar på adressen till x. Sedan
*       deklareras en dubbelpekare ptr2, som pekar på adressen till ptr1.
*       Information om de olika datamedlemmarnas adresser samt innehåll skrivs
*       ut i terminalen. Värdet på variabel x ändras till 5 och sedan 7 via
*       dereferens av intpekare ptr1 (*ptr1 samt dubbelpekare ptr2 (**ptr2).
********************************************************************************/
int main(void)
{
   int x = 3;
   int* ptr1 = &x;
   int** ptr2 = &ptr1;

   printf("x is stored at address %p!\n", &x);
   printf("The pointer ptr1 is pointing at the address of x: %p!\n", ptr1);
   printf("The value at this address is currently %d!\n\n", *ptr1);

   *ptr1 = 5;
   printf("x is now changed to %d indirectly via pointer ptr1!\n\n", x);

   printf("The pointer ptr1 is stored at address %p!\n", &ptr1);
   printf("The pointer ptr2 is pointing at the address of ptr1: %p!\n\n", ptr2);
   
   **ptr2 = 7;
   printf("x is now changed to %d indirectly via pointer ptr2!\n\n", x);

   printf("The pointer ptr2 is stored at address %p!\n", &ptr2);
   return 0;
}