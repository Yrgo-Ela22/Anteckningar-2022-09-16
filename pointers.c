/********************************************************************************
* pointers.c: Demonstration av pekare i C.
* 
*             Pekare utg�r datamedlemmar som pekar p� adresser till andra
*             datamedlemmar. Exempelvis kan en intpekare (int*) peka p�
*             adressen till en intvariabel (int).
* 
*             En pekare har f�ljande syntax:
*             datatyp* namn = adress.
* 
*             Pekarens datatyp skall s�ttas till samma datatyp som 
*             datamedlemmen den pekar p�, exempelvis double* ifall pekaren
*             skall peka p� en variabel av datatypen double, const int* ifall
*             pekaren skall peka p� en konstant av dataypen int.
* 
*             F�r att peka p� adressen till en given datamedlem anv�nds den
*             s� kallade adressoperatorn &, d�r exempelvis &x betyder adressen
*             till datamedlemmen x.
* 
*             Som exempel, l�t en variabel av datatypen double d�pt x
*             deklareras enligt nedan och initieras med startv�rde 3.4:
*             double x = 3.4;
* 
*             L�t sedan en pekare d�pt ptr1 peka p� adressen till x via
*             nedanst�ende instruktion:
*             double* ptr1 = &x;
* 
*             Inneh�llet p� adressen som ptr1 pekar p� kan kommas �t via den
*             s� kallade dereferensoperatorn *, d�r *ptr1 betyder inneh�llet
*             p� adressen som ptr1 pekar p�, dvs. inneh�llet i variabel x.
* 
*             Som exempel, via dereferensoperatorn * kan inneh�llet lagrat av 
*             variabel x �ndras till 7.3 enligt nedan:
*             *ptr1 = 7.3;
* 
*             F�r pekare ptr1 g�ller f�ljande:
*             ptr1  => adressen som ptr1 pekar p� (adressen till x).
*             *ptr1 => inneh�llet p� adressen som ptr1 pekar p� (inneh�llet
*                      lagrat av variabel x).
*             &ptr1 => adressen till pekaren ptr1, dvs. adressen d�r ptr1
*                      �r lagrad p�.
* 
*             F�r utskrift av adresser anv�nds formatspecificerare %p (pointer).
*             Som exempel, f�r att skriva ut adressen till en variabel d�pt
*             x kan f�ljande utskrift genomf�ras:
*             printf("The variable x is stored at address %p!\n", &x);
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* main: Deklarerar en intvariabel d�pt x och tilldelas startv�rdet 3. D�refter
*       deklareras en intpekare ptr1, som pekar p� adressen till x. Sedan
*       deklareras en dubbelpekare ptr2, som pekar p� adressen till ptr1.
*       Information om de olika datamedlemmarnas adresser samt inneh�ll skrivs
*       ut i terminalen. V�rdet p� variabel x �ndras till 5 och sedan 7 via
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