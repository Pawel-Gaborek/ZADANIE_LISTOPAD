//
//  GABOREK_LISTOPAD_NR-1.c
//  GABOREK_LISTOPAD_NR-1
//
//  Created by Paweł Gaborek on 19/11/2018.
//  Copyright © 2018 Paweł Gaborek. All rights reserved.
//
//
//  Zmienne, komunikacja z użytkownikiem. Instrukcje warunkowe
//  Uwaga! Należy pamiętać o dodaniu odpowiednich nagłówków do funkcji. Dla std::cin i std::cout jest to <iostream>, a dla printf i scanf jest to <stdio.h> lub <cstdio.h>
//  1.1. Zadeklarować zmienne typu int, float, char. Przypisać do nich wartość, wyświetlić je na ekran.
//  1.2. Wyświetlić zmienną typu int na ekran. Należy użyć metody printf i konstrukcji %d
//  1.3. Pobrać od użytkownika liczbę x. Wyświetlić kwadrat liczby x.
//  1.4. Zapoznać się z instrukcjami warunkowymi (if, else if, else oraz switch). Pobrać od używkownika liczbę i wyświetlić informację, czy jest ona: mniejsza, większa, czy równa 0.
//  1.5. Pobrać od użytkownika 3 liczby (x1, x2, x3). Wyświetlić informację, która z tych liczb jest największa.
//  1.6. Napisać prosty kalkulator. Należy pobrać od użytkownika 2 liczby oraz operator (jeden z czterech: mnożenie, dzielenie, dodawanie, odejmowanie). Wymagane jest utworzenie prostego menu użytkownika. Uwaga - należy pamiętać o ułamkach (1/3 powinno dać 0.33, a nie 0)

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int i;  // liczby zalkowite                                                        (punkt 1.1)
    i = 415; // nadalem wartosc zmiennej "i"                                           (punkt 1.1)
    float w; // liczby rzeczywiste pojedynczej precyzji                                (punkt 1.1)
    w = 233; // nadalem wartosc zmiennej "w"                                           (punkt 1.1)
    char m; // pojedyncza liczba                                                       (punkt 1.1)
    m = 'S'; // nadalem wartosc zmiennej "m"                                           (punkt 1.1)
    int t; // pojedyncza liczba                                                        (punkt 1.2)
    t=23; // nadalem wartosc zmiennej "t"                                              (punkt 1.2)
    long long int x; // typ zmiennej o duzej wartosci                                  (punkt 1.3)
    
    long long int Wynik; // Wykonanie operacji potegowania                             (punkt 1.3)
    int q; // Wartosc zmiennej do instrukcji if , else , switch                        (punkt 1.4)
    int g, h, s; // Przypisuje zmiennym odpowiedni typ zmiennej                        (punkt 1.5)
    
    float Liczba1, Liczba2; // Przypisuje typ zmiennej                                 (punkt 1.6)
    char operator; // Przypisuje typ zmiennej                                          (punkt 1.6)
    float wynik1; // Przypisuje typ zmiennej                                           (punkt 1.6)
    float wynik2; // Przypisuje typ zmiennej                                           (punkt 1.6)
    float wynik3; // Przypisuje typ zmiennej                                           (punkt 1.6)
    float wynik4; // Przypisuje typ zmiennej                                           (punkt 1.6)
    
    printf ("Zmienna nr 1=%d\n", i); // uzylem formantu dla int                        (punkt 1.1)
    printf ("Zmienna nr 2=%f\n", w); // uzylem formantu dla float                      (punkt 1.1)
    printf ("Zmienna nr 3=%c\n", m); // uzylem formantu dla char                       (punkt 1.1)
    
    printf ("Wartosc dla T wynosi = %d\n", t); // uzylem formantu %d dla int           (punkt 1.2)
    puts ("Teraz mozesz obliczyc kwadrat liczby"); // Wyswietlilem kominukat           (punkt 1.3)
    printf ("Podaj liczbe x: "); // Informacja by podac liczbe                         (punkt 1.3)
    scanf ("%lli", &x); // Wprowadzam liczbe                                           (punkt 1.3)
    Wynik = x * x; printf ("%lli\n", Wynik); // Wprowadzam wzor i podaje wynik         (punkt 1.3)
    puts ("Gratulacje, wlasnie otrzymales wynik mnozenia !\n"); // Komunikat           (punkt 1.3)
    
    puts ("Teraz nastepny punkt programu\n"); // Rozpoczenie                           (punkt 1.4)
    printf ("Podaj liczbe ''q'' celem porównania: \n"); // Polecenie                   (punkt 1.4)
    scanf ("%d",&q); // Pobranie od uzytkownika liczby                                 (punkt 1.4)
    if ( q > 0 ) // Uzycie instrukcji jesli                                            (punkt 1.4)
        printf ( "Wartosc 'q’ jest wieksza od zera \n" ); //                           (punkt 1.4)
    if ( q < 0 ) // Uzycie instrukcji jesli                                            (punkt 1.4)
        printf ( "Wartosc ’q’ jest mniejsza od zera \n" ); //                          (punkt 1.4)
    if ( q == 0 ) // Uzycie instrukcji jesli                                           (punkt 1.4)
        printf ( "Wartosc ’q’ jest rowna zero \n" ); //                                (punkt 1.4)
    
    puts ("Teraz nastepny punkt programu\n"); // Nastepny podpunkt                     (punkt 1.5)
    printf ("Podaj trzy kolejne wartosci zmiennych ''G'', ''H'', ''S''\n"); //         (punkt 1.5)
    scanf ("%d %d %d", &g, &h, &s); // Pobranie liczb celem porownania                 (punkt 1.5)
    if (( g<h ) && (s<h)) // Uzycie instrukcji jesli                                   (punkt 1.5)
        printf ( "Zmienna ''H'' jest najwieksza\n" ); //                               (punkt 1.5)
    if (( h<g ) && (s<g)) // Uzycie instrukcji jesli                                   (punkt 1.5)
        printf ( "Zmienna ''G'' jest najwieksza\n" ); //                               (punkt 1.5)
    if (( g<s ) && (h<s)) // Uzycie instrukcji jesli                                   (punkt 1.5)
        printf ( "Zmienna ''S'' jest najwieksza\n" );
    if (( g==s ) && (h==s) && (g==h))  // Uzycie instrukcji jesli
        printf ( "Wszystkie liczby sa rowne\n" );
    
    puts ("Teraz nastepny punkt programu - kalkulator\n");
    printf ("Teraz mozesz dokonac prostych operacji, dodawanie, odejmowanie, dzielenie, mnozenie. Wprowadz dwie liczby oraz operator\n");
    {
        printf ("Podaj liczbe, operator i znowu liczbe\n");
        printf ("Po wprowadzeniu każdego znaku użyj klawisza ''ENTER''\n");
        scanf ("%f %c %f", &Liczba1, &operator, &Liczba2);
        switch (operator)
        {
            case '+':
                wynik1 = Liczba1 + Liczba2; printf ("%f\n", wynik1);
                break;
            case '-':
                wynik2 = Liczba1 - Liczba2; printf ("%f\n", wynik2);
                break;
            case '*':
                wynik3 = Liczba1 * Liczba2; printf ("%f\n", wynik3);
                break;
            case '/':
                if (Liczba2 == 0)
                    printf ("Dzielenie przez zero\n");
                else
                    wynik4 = Liczba1 / Liczba2; printf ("%f\n", wynik4);
                break;
            default:
                printf ("Nieznany operator\n");
                break;
        }
        puts ("Gratulacje !!! Wlasnie dotarles do konca zadania nr 1 - listopad");
    }
    return EXIT_SUCCESS ;
}

