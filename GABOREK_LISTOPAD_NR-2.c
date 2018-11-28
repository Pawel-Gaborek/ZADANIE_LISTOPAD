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



/*************************************************************************************************
 Teraz wykonuje zadanie 2.1. Użyłem komentarz blokowy
 *************************************************************************************************/


int main (void)
{
    float Liczba1, Liczba2;
    char operator;
    float wynik1;
    float wynik2;
    float wynik3;
    float wynik4;
    
    int zmienna, cyfra1, cyfra2, wynik, wyjscie=0;
    char kontynuj;
    
    
    while(wyjscie == 0) {
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
        while(1)
        {
            printf("\nCzy chcesz wykonac kolejne obliczenie? (t/n): ");
            getchar();
            scanf("%c", &kontynuj);
            if(kontynuj == 't')
            {
                break;
            }
            else if(kontynuj == 'n')
            {
                wyjscie = 1;
                break;
            }
            else
            {
                printf("Podales bledna litere!\n");
            }
        }
    }
    return 0;
}

