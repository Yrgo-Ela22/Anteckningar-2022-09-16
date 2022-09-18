/********************************************************************************
* functions.c: Demonstration av egenskapade funktioner i C.
* 
*              En funktiodefinition har f�ljande syntax i C:
* 
*              returtyp namn(funktionsparametrar)
*              {
*                 H�r skrivs funktionens inneh�ll.
*              }      
* 
*              Returtypen indikerar datatypen p� det v�rde som returneras
*              n�r funktionen avslutas, exempelvis int f�r heltal eller
*              double f�r flyttal. Ifall inget returv�rde skall returneras
*              skall returtypen void anv�ndas. F�r att returnera data anv�nds
*              nyckelordet return f�ljt av v�rdet som skall returneras. 
* 
*              Som exempel, f�r att returnera flyttalet 3.4 fr�n en funktion
*              med returtypen double kan f�ljande instruktion skrivas:
*              return 3.4;
*
*              F�r voidfunktioner, d�r inget v�rde returneras, �r nyckelordet 
*              return valbart, men kan anv�ndas f�r att tydligg�ra var 
*              funktionen avslutas.
* 
*              I parentesen efter funktionsnamnet skrivs funktionsparametrar.
*              Funktionsparametrarna anges datatyp p� eventuell data som
*              passeras till funktionen. En funktion kan ha valfritt antal
*              funktionsparametrar. Ifall funktionsparametrar saknas skall
*              nyckelordet void skrivs i parentesen, alternativt kan parentesen
*              h�llas tom.
* 
*              Funktionens b�rjan och slut markeras via m�svingar { }. Mellan
*              dessa m�svingar skrivs funktionens inneh�ll.
* 
*              returtyp namn(funktionsparametrar) kallas funktionshuvudet
*              och ger information om vad som returneras, vad funktionen
*              heter samt vilka parametrar som skall passeras till funktionen.
* 
*              Resten av funktionen kallas funktionskroppen och utg�rs av
*              funktionens inneh�ll.       
* 
*              Funktioner som anropas m�ste antingen definieras eller deklareras
*              innan de anropas. Detta kan genomf�ras genom att placera
*              funktionsdefinitionen (funktionshuvudet + funktionskroppen)
*              ovanf�r funktionsanropet, alternativt s� kan funktionen
*              deklareras innan anropet och sedan defininieras p� annan plats.
* 
*              En funktionsdeklaration best�r enbart av funktionshuvudet,
*              avslutat med ett semikolon, s�som nedan:            
*              returtyp namn(funktionsparametrar);
* 
*              ------------------------------------------------------------------
*              OBS! Nedanst�ende information utg�r lite extra information,
*              som kommer behandlas i framtiden, men som inte anv�nds h�r.
*              ------------------------------------------------------------------
* 
*              Funktioner �r som default externa, vilket inneb�r att de �r
*              �tkomliga utanf�r aktuell fil. Funktioner kan h�llas lokala
*              till en given k�llkodsfil via nyckelordet static, vilket som
*              en tumregel b�r g�ras f�r funktioner som enbart skall anv�ndas 
*              lokalt (vilket f�renklar f�r kompilatorn att optimera koden).
*              S�dana funktioner kallas statiska. 
* 
*              En statisk funktion deklareras enligt nedan:
*              static returtyp namn(funktionsparametrar);
* 
*              Statiska funktioner med v�ldigt lite inneh�ll kan s�ttas till
*              inline-funktioner via nyckelordet inline f�r att f�resl� f�r
*              kompilatorn att funktionens inneh�ll skall klistras in p�
*              plats d�r funktionen anropas i st�llet f�r ett regelr�tt anrop.
*              Detta �r f�rdelaktigt, d� anrop samt �terhopp fr�n en liten
*              funktion kan kr�va fler instruktionscykler �n att genomf�ra
*              funktionens inneh�ll. Detta fungerar dock enbart f�r statiska
*              funktioner.
* 
*              En inline-funktion deklareras enligt nedan:
*              static inline returtyp namn(funktionsparametrar);
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* get_sum: Returnerar summan av tre angivna flyttal.
*
*          - x: Det f�rsta flyttalet.
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
* print_numbers: Skriver ut tre flyttal p� var sin rad.
* 
*                - x: Det f�rsta flyttalet.
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
* assign_numbers: Tilldelar tre flyttal p� angivna adresser.
*
*                 - x: Pekare till det f�rsta flyttalet.
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
*       a, b och c som ing�ende argument.
********************************************************************************/
int main(void)
{
   double a, b, c;
   assign_numbers(&a, &b, &c);
   print_numbers(a, b, c);
   return 0;
}



