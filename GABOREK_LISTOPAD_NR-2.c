//
//  GABOREK_LISTOPAD_NR-2.c
//  GABOREK_LISTOPAD_NR-2
//
//  Created by Paweł Gaborek on 19/11/2018.
//  Copyright © 2018 Paweł Gaborek. All rights reserved.
//
//
//  Pętle
//  2.1. Zapoznać się z pętlą while. Pętla ta służy do wielokrotnego wykonania fragmentu kodu przez NIEZNANĄ Z GÓRY ilość razy. Pętla
//  wykonuje się zawsze, jeśli warunek jest prawdziwy (ewaluowany do true). Napisać pętlę, w któej użytkownik podaje liczbę x. Należy
//  wyświetlić tę liczbę. Jeżeli użytkownik poda 0, należy zakończyć program.
//  2.2. Przerobić kalkulator z zadania 1.6. Teraz po każdym działaniu program powinien spytać użytkownika, czy ten chce powtórzyć
//  wszystko od początku. Jeśli tak - restartujemy kalkulator i zaczynamy od nowa. Jeśli nie - kończymy program.
//  2.3. Pobrać od użytkownika liczbę x. Należy wyświetlić wszystkie kolejne potęgi liczby x. Zakończyć program, kiedy liczba przekroczy 100 000.
//  2.4. Pobrać od użytkownika liczbę x. Jeśli liczba jest niedodatnia - należy zakończyć program. Następnie należy wyświetlać kolejno (w nowej linii) wszystkie liczby mniejsze od x, aż osiągnięte zostanie 0.
//  2.5. Zapoznać się z instrukcjami continue; i break;. Pierwsza służy do zakończenia iteracji i przejścia do następnej, a druga natychmiast kończy pętlę. Przerobić program z zadania 1.4, aby wyświetlał tylko parzyste liczby (użyć if oraz continue). Jeśli liczba wynosi 40, należy wyjść z pętli i zakończyć program.
//  2.6. Zapoznać się z pętlą for. Pętla służy do wykonania danego fragmentu kodu ZNANĄ Z GÓRY określoną ilość razy. Uwaga - każdą pętlę for można zastąpić pętlą while i wzajemnie. Zwyczajowo obowiazuje zasada, że jeśli ilość iteracji jest znana - używamy for, a jeśli nie jest znana (zależy od użytkownika lub jakiegoś stanu zewnętrznego) - używamy pętli while. Pętla for składa się z: ZMIENNEJ ITERACYJNEJ, czyli stanu początkowego pętli, np. int i = 0. Następnie WARUNKU ZAKOŃCZENIA PĘTLI, np. i<10. Następnie OPERACJI WYKONYWANEJ PO KAŻDEJ ITERACJI - zazwyczaj jest to zwiększenie iteratora o 1, czyli i = i + 1, bądź w skrócie i++. Napisać pętlę for, która wyświetli cyfry od 0 do 9.
//  2.7. Pobrać od użytkownika liczby x i y. Zakładamy, że y > x (zawsze, nie musimy tego sprawdzać). Za pomocą pętli for wypisać liczby między x a y (do przemyślenia - co jest stanem początkowym, a co warunkiem zakończenia pętli?)
//  2.8. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisać wszystkie liczby mniejsze od x, ale większe niż 0.
//  2.9. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisywać CO TRZECIĄ liczbę większą od x. Pętla powinna się zakończyć, jeśli
//  liczba przekroczy 100. Uwaga - proszę nie używać operacji continue i break, a sterować tylko parametrami pętli.



#include <stdio.h>
#include <stdlib.h>






int main (void)
{
    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.1 (punkt 2.1)
     *************************************************************************************************/

    int wyjscie1=0;
    int w1;

    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.2 (punkt 2.2)
     *************************************************************************************************/
    
    float Liczba1, Liczba2;
    char operator;
    float wynik1;
    float wynik2;
    float wynik3;
    float wynik4;
    
    int wyjscie=0;
    char kont;
    
     
    /*************************************************************************************************
     Zmienne dla zadania nr 2.3 (punkt 2.3)
     *************************************************************************************************/
    
    float xwr;
    float mxj;
    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.4 (punkt 2.4)
     *************************************************************************************************/
    
    int mm2;
    int aa2 = 1;
    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.5 (punkt 2.5)
     *************************************************************************************************/
    
    int mm3;
    int aa3 = 1;
    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.6 (punkt 2.6)
     *************************************************************************************************/
    
    int iwe;
    iwe=0;
    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.7 (punkt 2.7)
     *************************************************************************************************/
    
    int iww, mw;
    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.8 (punkt 2.8)
     *************************************************************************************************/
    
    int iwm, mm;
    iwm=1;
    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.9 (punkt 2.9)
     *************************************************************************************************/
    
    int xwm, xm;
    xm=100;
    
/*************************************************************************************************
Zadanie nr 2.1 (punkt 2.1)
*************************************************************************************************/
    printf ("\nZadanie nr 2.1 (punkt 2.1)\n");
    
    while(wyjscie1 == 0) {
        printf ("\nTeraz bedzie program ktorym mozna nieskonczenie wiele razy wyswietlac wpisana liczbe\n");
        printf ("\nPamietaj ze po wpisaniu cyfry zero program zakonczy dzialanie\n");
        printf ("\nPamietaj aby zatwierdzic liczbe potwierdz klawiszem enter\n");
        printf ("\nPodaj liczbe ktora sie wyswietli: ");
        while(1)
        {
            scanf("%i", &w1);
            if (w1 == 0)
            {
                wyjscie1 = 1;
                break;
            }
            else
            {
                printf ("Twoja liczba to: %i \n", w1);
                printf ("\nPodaj liczbe ktora sie wyswietli: ");
            }
        }
    printf ("\nZakonczyles program nr 2.1 (punkt 2.1)\n");
    }

/*************************************************************************************************
Zadanie nr 2.2 (punkt 2.2)
**************************************************************************************************/
    
    printf ("\nZadanie nr 2.2 (punkt 2.2)\n");
    
    while(wyjscie == 0) {
        printf ("\nPodaj liczbe, operator i znowu liczbe\n");
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
        puts ("Gratulacje !!! Wlasnie otrzymales wynik obliczenia matematycznego");
        while(1)
        {
            printf("\nCzy chcesz wykonac kolejne obliczenie? Dla tak wpisz ''t'', dla nie wpisz ''n'': ");
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
        printf ("\nZakonczyles program nr 2.2 (punkt 2.2)\n");
    }

    
/*************************************************************************************************
Zadanie nr 2.3 (punkt 2.3)
**************************************************************************************************/
    
    printf ("\nZadanie nr 2.3 (punkt 2.3)\n");
    printf ("\nProgram wyswietli kolejne potegi wprowadzonej liczby, przy czym potega nie moze byc wieksza niz 100 000\n");
    printf("Podaj podstawe potegi: ");
    scanf("%f", &xwr);
    while (pow(xwr, mxj)<100000)
    {
        printf ("Liczba %f ", xwr);
        printf ("do potegi %f wynosi: ", mxj);
        printf ("%f\n", pow(xwr, mxj));
        mxj++;
    }
    printf ("\nGratulacje, wlasnie otrzymals wynik\n");
    printf ("\nZakonczyles program nr 2.3 (punkt 2.3)\n");
    
    
/*************************************************************************************************
 Zadanie nr 2.4 (punkt 2.4)
 *************************************************************************************************/

    {
        printf ("\nZadanie nr 2.4 (punkt 2.4)\n");
        printf ("\nWprowadz liczbe celem porownania wzgledem zera\n");
        printf ("\nPAMIETAJ !!!\n");
        printf ("\nJezeli podana liczba jest mniejsza od zera to program zakonczy dzialanie\n");
        printf ("\nProgram wyswietli liczby od najwiekszej do najmniejszej\n");
        scanf("\n%i", &mm2);
        if (mm2 > 0)
        {
            while (aa2 <= mm2)
            {
                printf ("%i\n", mm2-aa2);
                ++aa2;
            }
        }
        else
        {
            printf ("Niestety podales liczbe: %i\n", mm2);
            printf ("\nKtora nie jest wieksza od zera\n");
            printf ("\nZakonczyles program nr 2.4 (punkt 2.4)\n");
        }
    }
/*************************************************************************************************
 Zadanie nr 2.5 (punkt 2.5)
 *************************************************************************************************/

  
   
    
    printf ("\nZadanie nr 2.5 (punkt 2.5)\n");
    printf ("\nWprowadz liczbe celem porownania wzgledem zera\n");
    printf ("\nPAMIETAJ !!!\n");
    printf ("\nJezeli podana liczba jest mniejsza od zera to program zakonczy dzialanie\n");
    printf ("\nProgram wyswietli liczby od najwiekszej do najmniejszej - tylko parzyste\n");
    scanf("\n%i", &mm3);
    if (mm3 > 0)
    {
        while (aa3 <= mm3)
        {
            printf ("%i\n", mm3-aa3);
            aa3+=2;
        }
    }
    else
    {
        printf ("Niestety podales liczbe: %i\n", mm3);
        printf ("\nKtora nie jest wieksza od zera\n");
        printf ("\nZakonczyles program nr 2.5 (punkt 2.5)\n");
    }
 

/*************************************************************************************************
 Zadanie nr 2.6 (punkt 2.6)
 *************************************************************************************************/
    
    printf ("\nZadanie nr 2.6 (punkt 2.6)\n");
    printf ("\nProgram wyswietli liczby od zera do dziewieciu\n");
    for (iwe=0 ; iwe <=9 ; )
    {
        printf ("%i\n", iwe);
        iwe++;
    }
    printf ("\nWyswietlono liczby od zera do dziewieciu\n");
    printf ("\nZakonczyles program nr 2.6 (punkt 2.6)\n");
    
    
/*************************************************************************************************
 Zadanie nr 2.7 (punkt 2.7)
 *************************************************************************************************/


    printf ("\nZadanie nr 2.7 (punkt 2.7)\n");
    printf ("\nProgram wyswietli liczby ze zbioru dwóch podanych przez Ciebie liczb\n");
    printf ("\nPamietaj ze pierwsza liczba musi byc mniejsza od drugiej\n");
    printf ("\nPodaj pierwsza liczbe - poczatkowa zbioru\n");
    scanf ("%i", &iww);
    printf ("\nPodaj druga liczbe - ostatnia ze zbioru\n");
    scanf ("%i", &mw);
    for (iww ; iww <=mw ; iww++)
    {
        printf ("%i\n", iww);
        
    }
    printf ("\nWyswietlono liczby od %i", iww);
    printf ("do %i\n", mw);
    printf ("\nZakonczyles program nr 2.7 (punkt 2.7)\n");
    
    
/*************************************************************************************************
 Zadanie nr 2.8 (punkt 2.8)
 *************************************************************************************************/
    
    printf ("\nZadanie nr 2.8 (punkt 2.8)\n");
    printf ("\nProgram wyswietli liczby mniejsze od podanej liczby ale wieksze od zera\n");
    printf ("\nPodaj liczbe: \n");
    scanf ("%i", &mm);
    for (iwm ; iwm < mm ; )
    {
        printf ("%i\n", mm-iwm);
        iwm++;
    }
    printf ("\nWyswietlono liczby mniejsze od %i a wieksze od zera\n", mm);
    printf ("\nZakonczyles program nr 2.8 (punkt 2.8)\n");
    
   

/*************************************************************************************************
 Zadanie nr 2.9 (punkt 2.9)
 *************************************************************************************************/
    
    
    
    printf ("\nZadanie nr 2.9 (punkt 2.9)\n");
    printf ("\nProgram wyswietli co trzecia liczbe wieksza od podanej a mniejsza od 100\n");
    printf ("\nPodaj liczbe: \n");
    scanf ("%i", &xwm);
    
    for (xwm ; xwm <= xm ; )
    {
        printf ("%i\n", xwm);
        xwm+=3;
    }
    printf ("\nWyswietlono co trzecia liczbe wieksza od %i a mniejsza od 100\n", xwm);
    printf ("\nZakonczyles program nr 2.9 (punkt 2.9)\n");
    
    return 0;
    
}


