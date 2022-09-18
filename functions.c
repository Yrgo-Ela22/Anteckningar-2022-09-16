/********************************************************************************
* functions.c: Demonstration av egenskapade funktioner i C.
* 
*              En funktiodefinition har följande syntax i C:
* 
*              returtyp namn(funktionsparametrar)
*              {
*                 Här skrivs funktionens innehåll.
*              }      
* 
*              Returtypen indikerar datatypen på det värde som returneras
*              när funktionen avslutas, exempelvis int för heltal eller
*              double för flyttal. Ifall inget returvärde skall returneras
*              skall returtypen void användas. För att returnera data används
*              nyckelordet return följt av värdet som skall returneras. 
* 
*              Som exempel, för att returnera flyttalet 3.4 från en funktion
*              med returtypen double kan följande instruktion skrivas:
*              return 3.4;
*
*              För voidfunktioner, där inget värde returneras, är nyckelordet 
*              return valbart, men kan användas för att tydliggöra var 
*              funktionen avslutas.
* 
*              I parentesen efter funktionsnamnet skrivs funktionsparametrar.
*              Funktionsparametrarna anges datatyp på eventuell data som
*              passeras till funktionen. En funktion kan ha valfritt antal
*              funktionsparametrar. Ifall funktionsparametrar saknas skall
*              nyckelordet void skrivs i parentesen, alternativt kan parentesen
*              hållas tom.
* 
*              Funktionens början och slut markeras via måsvingar { }. Mellan
*              dessa måsvingar skrivs funktionens innehåll.
* 
*              returtyp namn(funktionsparametrar) kallas funktionshuvudet
*              och ger information om vad som returneras, vad funktionen
*              heter samt vilka parametrar som skall passeras till funktionen.
* 
*              Resten av funktionen kallas funktionskroppen och utgörs av
*              funktionens innehåll.       
* 
*              Funktioner som anropas måste antingen definieras eller deklareras
*              innan de anropas. Detta kan genomföras genom att placera
*              funktionsdefinitionen (funktionshuvudet + funktionskroppen)
*              ovanför funktionsanropet, alternativt så kan funktionen
*              deklareras innan anropet och sedan defininieras på annan plats.
* 
*              En funktionsdeklaration består enbart av funktionshuvudet,
*              avslutat med ett semikolon, såsom nedan:            
*              returtyp namn(funktionsparametrar);
* 
*              ------------------------------------------------------------------
*              OBS! Nedanstående information utgör lite extra information,
*              som kommer behandlas i framtiden, men som inte används här.
*              ------------------------------------------------------------------
* 
*              Funktioner är som default externa, vilket innebär att de är
*              åtkomliga utanför aktuell fil. Funktioner kan hållas lokala
*              till en given källkodsfil via nyckelordet static, vilket som
*              en tumregel bör göras för funktioner som enbart skall användas 
*              lokalt (vilket förenklar för kompilatorn att optimera koden).
*              Sådana funktioner kallas statiska. 
* 
*              En statisk funktion deklareras enligt nedan:
*              static returtyp namn(funktionsparametrar);
* 
*              Statiska funktioner med väldigt lite innehåll kan sättas till
*              inline-funktioner via nyckelordet inline för att föreslå för
*              kompilatorn att funktionens innehåll skall klistras in på
*              plats där funktionen anropas i stället för ett regelrätt anrop.
*              Detta är fördelaktigt, då anrop samt återhopp från en liten
*              funktion kan kräva fler instruktionscykler än att genomföra
*              funktionens innehåll. Detta fungerar dock enbart för statiska
*              funktioner.
* 
*              En inline-funktion deklareras enligt nedan:
*              static inline returtyp namn(funktionsparametrar);
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* get_sum: Returnerar summan av tre angivna flyttal.
*
*          - x: Det första flyttalet.
*          - y: Det andra flyttalet.
*          - z: Det tredje flyttalet.
********************************************************************************/
double get_sum(const double x,
               const double y,
               const double z)
{
   return x + y + z;
}

/********************************************************************************
* print_numbers: Skriver ut tre flyttal på var sin rad.
* 
*                - x: Det första flyttalet.
*                - y: Det andra flyttalet.
*                - z: Det tredje flyttalet.
********************************************************************************/
void print_numbers(const double x, 
                   const double y, 
                   const double z)
{
   printf("x = %lg\n", x);
   printf("y = %lg\n", y);
   printf("z = %lg\n", z);
   return;
}

/********************************************************************************
* assign_numbers: Tilldelar tre flyttal på angivna adresser.
*
*                 - x: Pekare till det första flyttalet.
*                 - y: Pekare till det andra flyttalet.
*                 - z: Pekare till det tredje flyttalet.
********************************************************************************/
void assign_numbers(double* x, 
                    double* y, 
                    double* z)
{
   *x = 3;
   *y = 4;
   *z = 5;
   return;
}

/********************************************************************************
* main: Deklarerar tre flyttalsvariabler a, b samt c och tilldelar flyttal till
*       dessa genom att anropa funktionen assign_numbers med variablernas 
*       respektive adress. Tilldelade flyttal skrivs sedan ut i terminalen 
*       genom att anropa funktionen print_numbers med kopior av variabler
*       a, b och c som ingående argument.
********************************************************************************/
int main(void)
{
   double a, b, c;
   assign_numbers(&a, &b, &c);
   print_numbers(a, b, c);
   return 0;
}



