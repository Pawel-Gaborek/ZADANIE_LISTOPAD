//
//  GABOREK_LISTOPAD_NR-3.c
//  GABOREK_LISTOPAD_NR-3
//
//  Created by Paweł Gaborek on 19/11/2018.
//  Copyright © 2018 Paweł Gaborek. All rights reserved.
//
//
//  3. Funkcje, podstawy
//  Funkcja (metoda) to wydzielony fragment kodu, który można wielokrotnie używać w kilku miejscach programu. Dzieki temu podczas zmiany w kodzie funkcji, nie musimy modyfikować kodu w każdym momencie jego wywołania - zmiana następuje tylko w deklaracji ciała funkcji. Funkcje mogą zwracać wynik jakiejś operacji (int, float, bool itp) lub nie zwracać niczego (void) - w zależności od swojego zadania. Funkcje mogą pobierać parametry (jeśli jest to wymagane dla ich logiki). Funkcje powinny zawsze być względnie małe i mieć jeden konkretny cel. Duże funckje z dużą ilością odpowiedzialności są uznawane za nieprawidłowo zaprojektowane. Własne metody należy pisać NAD funkcją main. Możliwe jest pisanie sygnatur funkcji nad main() i ich ciała pod main(), na zasadzie:
//  #include <stdio.h>
//  int MojaFunkcja(int, int); // uwaga - w sygnaturze nie trzeba podawać nazw parametrów (argumentów), a tylko ich typy
//  int main()
//  {
//      int parametr1 = 5;
//      int parametr2 = 10;
//      int wynik = MojaFunkcja(parametr1, parametr2);
//      printf("%d", wynik); // 15
//  }
//  int MojaFunkcja(int x, int y)
//  {
//      return x + y;
//  }
//  Uwaga - proszę zwrócić uwagę, że nazwy parametrów w ciele funkcji (x, y) NIE MUSZĄ nazywać się tak samo w momencie wywołania, w
//  main - tu dla przykładu użyto parametr1 i parametr2.
//  Zadania:
//  3.1. Napisać metodę void NewLine(). Powinna ona wypisać na ekran pojedynczą pustą linię. Użyć tej metodę w main().
//  3.2. Napisać metodę void NewLines(int count). Powinna ona wypisać tyle nowych linii, ile zostało podanych W PARAMETRZE count (należy użyć pętli for). Użyć metodę w main()
//  3.3. Napisać metodę void WriteBiggerNumber(int x, int y). Metoda powinna pobrać 2 parametry i zwrócić większy z nich. Wykorzystać funckję w metodzie main(). UWAGA - pobieranie liczb od użytkownika powinno odbyć się w funkcji main(), a NIE w WriteBiggerNumber! Do funkcji należy jedynie przesłać pobrane wcześniej parametry.
//  3.4. Napisać metodę Multiply(int x, int y) . Metoda powinna ZWRÓCIĆ (słowo kluczowe return) iloczyn dwóch parametrów. Uwaga! Metoda
//  NIE POWINNA wypisywać wyniku - powinien on być wyświetlony w funkcji main!



#include "GABOREK_LISTOPAD_NR-3.h"
#include <stdio.h>
#include <stdlib.h>





    
/*************************************************************************************************
Zmienne dla zadania nr 3.1 (punkt 3.1)
*************************************************************************************************/



/*************************************************************************************************
Zmienne dla zadania nr 3.2 (punkt 3.2)
*************************************************************************************************/


    
/*************************************************************************************************
Zmienne dla zadania nr 3.3 (punkt 3.3)
*************************************************************************************************/

    
    
/*************************************************************************************************
Zmienne dla zadania nr 3.4 (punkt 3.4)
*************************************************************************************************/

    
    
    
/*************************************************************************************************
Zadanie nr 3.1 (punkt 3.1)
*************************************************************************************************/
#include <stdio.h>
int newline(int);
int main()
{
    int pustalinia;
    printf("\n", pustalinia);
}
int newline(int x)
{
    return x;
}
/*************************************************************************************************
Zadanie nr 3.2 (punkt 3.2)
*************************************************************************************************/




/*************************************************************************************************
Zadanie nr 3.3 (punkt 3.3)
*************************************************************************************************/





/*************************************************************************************************
Zadanie nr 3.4 (punkt 3.4)
*************************************************************************************************/


