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
Funkcja dla zadania nr 3.1 (punkt 3.1), poniżej zdefiniowałem pierwsza funkcje do ktorej pozniej
sie odwolam poprzez STOS w funkcji main.
*************************************************************************************************/

int newline (int pustalinia)               // nadałem nazwę funkcji pomocniczej typ zmienej i nazwę argumentu
{                                          // rozpoczyna się ciało funkcji
    pustalinia="\n";            // instrukcjie
    return "\n";                     // program ma zwrócić pusta linie, argumet
}

/*************************************************************************************************
Funkcja dla zadania nr 3.2 (punkt 3.2), poniżej zdefiniowałem druga funkcje do ktorej pozniej
sie odwolam poprzez STOS w funkcji main.
*************************************************************************************************/

int NewLines (int count)                   // Argumentem jest "count" oraz "i", nazwa funkcji "newlines"
{
    int i;                                 // Definiuje ztyp miennej lokalnej dla początku pętli
    for (i=0; i < count; i++)              // ciało fuknkcji
        printf ("\n");                     // Wynik funkcji
    return count;                          // Zwraca rezultat
}
    
/*************************************************************************************************
Funkcja dla zadania nr 3.3 (punkt 3.3), poniżej zdefiniowałem trzecia funkcje do ktorej pozniej
sie odwolam poprzez STOS w funkcji main.
*************************************************************************************************/

int WriteBiggerNumber (int qwe)      // Argumentem jest "count" oraz "i", nazwa funkcji
{
    int a, b;
    scanf ("%i", &a);
    scanf ("%i", &b);
    if (a>b)
        printf ( "Zmienna ''x'' jest  wieksza od ''y''\n");
    if (a<b)
        printf ( "Zmienna ''y'' jest  wieksza od ''x''\n");
    return qwe;
}
    
/*************************************************************************************************
 Funkcja dla zadania nr 3.4 (punkt 3.4), poniżej zdefiniowałem pierwsza funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
*************************************************************************************************/



/*************************************************************************************************
Zadanie nr 3.1 (punkt 3.1). Ropoczynam glowna funkcje main.
*************************************************************************************************/

int main(void)
{
    char kont;                                      // definiuje zmienna globalna dla "tak" lub "nie"
    int count;
    printf ("Teraz zostanie uruchmiony zadanie nr 3.1\n");
    {
        printf("\nCzy chcesz uruchomic zadanie nr 3.1? Dla tak wpisz ''t'', dla nie wpisz ''n'': ");
        printf("\nPrzy wyborze ''n'' przejdziesz do kolejnego zadania nr 3.2\n");
        getchar();
        scanf("%c", &kont);
        if(kont == 't')
        {
            printf("Podales bledna litere!\n");
        }
        else if(kont == 'n')
        {
            printf("Szkoda, ze nie chciales uruchomic programu. Powodzenia\n");
            printf("Wlasnie zakonczyles dzialanie programu nr 3.1\n");
        }
        else
        {
            printf("Podales bledna litere!\n");
        }
    }
    printf ("\nZakonczyles program nr 3.1 (punkt 3.1)\n");
    printf ("\n");
    
/*************************************************************************************************
Zadanie nr 3.2 (punkt 3.2)
*************************************************************************************************/

    printf ("Teraz zostanie uruchmione zadanie nr 3.2\n)");
    {
        printf("\nCzy chcesz uruchomic zadanie nr 3.2? Dla tak wpisz ''t'', dla nie wpisz ''n'': ");
        printf("\nPrzy wyborze ''n'' przejdziesz do kolejnego zadania nr 3.3\n");
        getchar();
        scanf("%c", &kont);
        if (kont == 't')
        {
            printf ("Uruchomiles wlasnie kolejny program, zadanie nr 3.2\n");
            printf ("Podaj wartosc parametru ''count'', uzytego w funkcji ''NewLines''\n");
            printf ("W wyniku tego podana wartosc zostanie przeslana poprzez ''STOS'' do funkcji i otrzymasz wynik\n");
            printf ("Twoja wartosc dla parametru ''count'' to: \n");
            scanf ("%i", &count);
            int wynik = NewLines(count);
            printf ("Wlasnie zakonczyles dzialanie programu nr 3.2\n");
            printf ("Rezultatem dzialania programu bylo wyrzucenie i% pustych linijek", count);
            printf ("%i", &count);
            printf ("pustych linijek\n", count);
        }
        else if (kont == 'n')
        {
            printf("Szkoda, ze nie chciales uruchomic programu. Powodzenia\n");
            printf("Wlasnie zakonczyles dzialanie programu nr 3.1\n");
        }
        else
        {
            printf("Podales bledna litere!\n");
        }
    }
    printf ("\nZakonczyles program nr 3.2 (punkt 3.2)\n");
    printf ("\n");
}
    
/*



void main ()                               // Glowna funkcja kodu
{
    int count;
    printf ("Uruchomiles wlasnie kolejny program, zadanie nr 3.2\n");
    printf ("Podaj wartosc parametru ''count'', uzytego w funkcji ''NewLines''\n");
    printf ("W wyniku tego podana wartosc zostanie przeslana poprzez ''STOS'' do funkcji i otrzymasz wynik\n");
    printf ("Twoja wartosc dla parametru ''count'' to: \n");
    scanf ("%i", &count);
    int wynik = NewLines(count);
    printf ("Wlasnie zakonczyles dzialanie programu nr 3.2\n");
    printf ("Rezultatem dzialania programu bylo wyrzucenie i% pustych linijek", count);
    printf ("%i", &count);
    printf ("pustych linijek\n", count);
}
*/

/*************************************************************************************************
Zadanie nr 3.3 (punkt 3.3)
*************************************************************************************************/


/*
void main ()                               // Glowna funkcja kodu
{
    int rezultat;
    printf ("Uruchomiles wlasnie kolejny program, zadanie nr 3.3\n");
    printf ("Podaj wartosc parametru ''xt'' oraz ''y'', uzytego w funkcji ''WriteBigNum''\n");
    printf ("W wyniku tego podana wartosc zostanie przeslana poprzez ''STOS'' do funkcji i otrzymasz wynik\n");
    printf ("Twoja wartosc dla parametru ''x'' oraz ''y'' to: \n");
    rezultat = WriteBiggerNumber;
    printf ("Wlasnie zakonczyles dzialanie programu nr 3.3\n");
}




/*************************************************************************************************
Zadanie nr 3.4 (punkt 3.4)
*************************************************************************************************/


