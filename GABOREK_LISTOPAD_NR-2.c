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
    
    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.4 (punkt 2.4)
     *************************************************************************************************/
    
    int mm2;
    int aa2 = 1;
    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.5 (punkt 2.5)
     *************************************************************************************************/
    
    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.6 (punkt 2.6)
     *************************************************************************************************/
    
    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.7 (punkt 2.7)
     *************************************************************************************************/
    
    
    /*************************************************************************************************
     Zmienne dla zadania nr 2.8 (punkt 2.8)
     *************************************************************************************************/
    
    
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
*************************************************************************************************
    
    
//while (liczba < 1000)
        
        {
            printf ("Podaj podstawe potegi:\n");
            scanf ("%f", &podstawa);
            //printf ("Podaj potege:\n");
            //scanf ("%d", &wykladnik);
            
            liczba=podstawa;
            
            for(i = 2; i <= wykladnik; i++)
        
                liczba=liczba*i;
            printf ("Potega %f \n",liczba);
        }
        printf("Potega %f \n",liczba);
   // }
    return 0;
}
*/
    
    
/*************************************************************************************************
 Zadanie nr 2.4 (punkt 2.4)
 *************************************************************************************************/

    printf ("\nZadanie nr 2.4 (punkt 2.4)\n");
    printf ("\nWprowadz liczbe celem porownania wzgledem zera\n");
    printf ("\nPAMIETAJ !!!\n");
    printf ("\nJezeli podana liczba jest mniejsza od zera to program zakonczy dzialanie\n");
    scanf("\n%i", &mm2);
    if (mm2 > 0)
    {
        while (aa2 <= mm2)
        {
            printf ("%i\n", aa2-1);
            ++aa2;
        }
    }
    else
    {
        printf ("Niestety podales liczbe: %i\n", mm2);
        printf ("\nKtora nie jest wieksza od zera\n");
        printf ("\nZakonczyles program nr 2.4 (punkt 2.4)\n");
    }
    return 0;

/*************************************************************************************************
 Zadanie nr 2.5 (punkt 2.5)
 *************************************************************************************************/


/*************************************************************************************************
 Zadanie nr 2.6 (punkt 2.6)
 *************************************************************************************************/


/*************************************************************************************************
 Zadanie nr 2.7 (punkt 2.7)
 *************************************************************************************************/


/*************************************************************************************************
 Zadanie nr 2.8 (punkt 2.8)
 *************************************************************************************************/


/*************************************************************************************************
 Zadanie nr 2.9 (punkt 2.9)
 *************************************************************************************************/
}
