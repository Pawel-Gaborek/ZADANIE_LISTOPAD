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




#include <stdio.h>
#include <stdlib.h>

/*************************************************************************************************
 Funkcja dla zadania nr 3.1 (punkt 3.1), poniżej zdefiniowałem pierwsza funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

int newline (char pustalinia)               // podalem nazwe mojej funkcji typ zmiennej i nazwe
{                                          // rozpoczyna się ciało funkcji
    char wdf;
    wdf = printf ("/n");
    return pustalinia;                 // program ma zwrócić pusta linie
}                                          // koniec ciala funkcji

/*************************************************************************************************
 Funkcja dla zadania nr 3.2 (punkt 3.2), poniżej zdefiniowałem druga funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

int NewLines (int count)                   // nazywam wlasna funkcje newlines, podaje tym zmiennej oraz nazwe
{                                          // rozpoczyna cialo mojej funkcji
    int i;                                 // Definiuje typ zmiennej lokalnej dla początku pętli
    for (i=0; i < count; i++)
        printf ("\n");
    return count;                          // Zwraca rezultat
}                                          // koniec ciala mojej funkcji

/*************************************************************************************************
 Funkcja dla zadania nr 3.3 (punkt 3.3), poniżej zdefiniowałem trzecia funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

int WriteBiggerNumber (int a, int b)       // podaje nazwe mojej funkcji, oraz typy zmiennych i nazwy
{                                          // rozpoczynam cialo funkcji, uzylem metody if else
    if (a>b)
        printf ( "Zmienna ''x'' jest  wieksza od ''y''\n");
    if (a<b)
        printf ( "Zmienna ''y'' jest  wieksza od ''x''\n");
    return a, b;
}                                          // koniec ciala funkcji

/*************************************************************************************************
 Funkcja dla zadania nr 3.4 (punkt 3.4), poniżej zdefiniowałem pierwsza funkcje do ktorej pozniej
 sie odwolam poprzez STOS w funkcji main.
 *************************************************************************************************/

int Multiply(int xer, int yui)             // nadalem nazwe funkcji, typy i nazwy zmiennych
{                                          // poczatek ciala funkcji
    int m;                                 // instrukcja
    m=xer * yui;                             // instrukcja
    return m;                              // instrukcja
}                                          // koniec ciala funkcji

/*************************************************************************************************
 Zadanie nr 3.1 (punkt 3.1). Ropoczynam glowna funkcje main.
 *************************************************************************************************/

int main(void)
{
    
    // ponizej ogreslilem wszystkie zmienne globalne a takze na dalem im typ zmiennej
    int count;
    int wybor;
    int wmw;
    int wynik31;
    int wynik32;
    int wynik33;
    int wynik34;
    char pustalinia;
    char mmm;
    
    int wyjscie=0;
    char kont;
    int rezultat;               // zmienna dla 3.3
    int aaa, bbb;                   // zmienna dla 3.3
    int w, m;
    int x, y;
    printf ("\nWlasnie uruchomiles program nr 3\n");
    printf ("Glowna funkcje main\n");
    
    while(wyjscie == 0) {
        printf ("\nMasz teraz mozliwosc wyboru ktora czesc programu chcesz uruchomic\n");
        printf ("Mozesz wybrac podprogram nr 3.1, 3.2, 3.3 badz 3.4\n");
        printf ("Aby uruchomic program nr: \n");
        printf ("\n3.1 wybierz ''1'' \n");
        printf ("\n3.2 wybierz ''2'' \n");
        printf ("\n3.3 wybierz ''3'' \n");
        printf ("\n3.4 wybierz ''4'' \n");
        printf ("Po wprowadzeniu odpowiedniej liczby potwierdz klawiszem ''ENTER''\n");
        scanf ("%i", &wybor);
        switch (wybor)
        {
            case 1:
                // rozpoczynam program nr 3.1
                //int wynik31 = newline;
                printf ("Rezultat to pusta linia &c: ", wynik31);
                break;
            case 2:
                // rozpoczynam program nr 3.2
                printf ("Uruchomiles wlasnie kolejny program, zadanie nr 3.2\n");
                printf ("Podaj wartosc parametru ''count'', uzytego w funkcji ''NewLines''\n");
                printf ("W wyniku tego podana wartosc zostanie przeslana poprzez ''STOS'' do funkcji i otrzymasz wynik\n");
                printf ("Twoja wartosc dla parametru ''count'' to: \n");
                scanf ("%i", &wmw);
                int wynik32 = NewLines(wmw);
                printf ("Rezultatem dzialania programu bylo wyrzucenie i% pustych linijek", count);
                printf ("%i", &wmw);
                printf ("pustych linijek\n", wmw);
                printf ("Wlasnie zakonczyles dzialanie programu nr 3.2\n");
                break;
            case 3:
                // rozpoczynam program nr 3.3
                printf ("Uruchomiles wlasnie kolejny program, zadanie nr 3.3\n");
                printf ("Podaj wartosc parametru ''x'' oraz ''y'', uzytego w funkcji ''WriteBigerNumber''\n");
                printf ("W wyniku tego podana wartosc zostanie przeslana poprzez ''STOS'' do funkcji i otrzymasz wynik\n");
                printf ("Ktora liczba jest wieksza\n");
                printf ("Twoja wartosc dla parametru ''x'' to: \n");
                scanf ("%i", &aaa);
                printf ("Twoja wartosc dla parametru ''y'' to: \n");
                scanf ("%i", &bbb);
                wynik33 = WriteBiggerNumber(aaa, bbb);
                printf ("\nWlasnie zakonczyles dzialanie programu nr 3.3\n");
                break;
            case 4:
                // rozpoczynam program nr 3.4
                printf ("Uruchomiles wlasnie kolejny program, zadanie nr 3.4\n");
                printf ("W tym programie otrzymasz wynik mnizenia dwoch liczb\n");
                printf ("W wyniku tego pobrana wartosc zostanie przeslana poprzez ''STOS'' do funkcji i otrzymasz wynik\n");
                printf ("Twoja wartosc dla parametru ''x'' to: \n");
                scanf ("%i", &x);
                printf ("Twoja wartosc dla parametru ''y'' to: \n");
                scanf ("%i", &y);
                wynik34 = Multiply(x, y);
                printf ("Gratulacje !!! Twoj wynik mnnoznia to: %i\n", wynik34);
                printf ("\nWlasnie zakonczyles dzialanie programu nr 3.2\n");
                break;
            default:
                printf ("Nieznany operator\n");
                break;
                // teraz przechodze do mozliwosci wyboru czy chce ponownie uruchomic ktoras czesc programu (podprogramy)
                // czy zakonczyc calkiem dzialanie programu
        }
        printf ("\nGratulacje !!! Wlasnie zakonczyles dzialanie wybranego przez siebie programu nr 3.%i\n", wybor);
        while(1)
        {
            printf("\nCzy chcesz ponownie uruchomic program\n");
            printf("ktory poprzez odwolanie sie funkcji wlasnej poprzez STOS wykona opreacje ??\n");
            printf("Dla tak wpisz ''t'', dla nie wpisz ''n'': \n");
            getchar();
            scanf("%c", &kont);
            if(kont == 't')
            {
                break;
            }
            else if(kont == 'n')
            {
                wyjscie = 1;
                break;
            }
            else
            {
                printf("Podales bledna litere!\n");
            }
        }
        printf ("\nSzkoda ze nie chcesz sprawdzic jak dzialaja pozostale podprogramy programu nr 3\n");
        printf ("\nMoze nastepnym razem. Powodzenia !!!\n");
    }
}
