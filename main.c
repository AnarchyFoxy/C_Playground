//
//  main.c
//  C Playground
//
//  Created by Astryda Malinowska (KyriaFoxy) on 13/12/2022.
//

#include <stdio.h>
void gazela(void);
void pani_gazelo(void);
void wstac(void);
void br(void);
void ic(void);
void obliczenia(void);
void gazelka(void);
void raz_trzy(void);
void dwa(void);

int main() {
    //2.1
    int num;
    num = 1;
    printf("Jestem prostym ");
    printf("programem w C.\n");
    printf("Moja ulubiona liczba to %d, ponieważ jest ona pierwsza.\n", num);

    //2.2
    int stopy, cale;

    stopy = 2;
    cale = 12 * stopy;
    printf("%d stopy równają się %d calom!\n", stopy, cale);

    //2.3
    printf("Wywołam funkcję Gazeli.\n");
    gazela();
    printf("Tak, zamówmy sobie pitcę hut i siądźmy do filmiku.\n");

    //Ćwiczenia
    //1.
    printf("Astryda Malinowska\n");
    printf("Astryda\nMalinowska\n");
    printf("Astryda ");
    printf("Malinowska\n");

    //2.
    printf("Astryda Malinowska\n");
    printf("Ul. Tęczowy Las */**\n");
    printf("**-*** ******\n");

    //3.
    int wiek = 30;
    int wiek_w_dniach = wiek * 365;
    printf("Astryda Malinowska ma obecnie %d lat, co się przekłada na %d dni\n", wiek, wiek_w_dniach);

    //4.
    pani_gazelo();
    pani_gazelo();
    wstac();

    //5.
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    printf("\n");

    //6.
    obliczenia();

    //7.
    gazelka(); gazelka(); gazelka();
    printf("\n");
    gazelka(); gazelka();
    printf("\n");
    gazelka();
    printf("\n");

    //8.
    printf("Zaczynamy!\n");
    raz_trzy();
    printf("Koniec!\n");

    return 0;
}

//2.3
void gazela(void)
{
    printf("Wołałaś, Astrydziu?\n");
}

void pani_gazelo(void)
{
    printf("Pani Gazelo!\n");
}

void wstac(void)
{
    printf("Pora wstać!\n");
}

void br(void)
{
    printf("Brazylia, Rosja");
}

void ic(void)
{
    printf("Indie, Chiny");
}

void obliczenia(void)
{
    int liczba = 10;
    int podwojona_liczba = 10 * 2;
    int do_kwadratu_liczba = liczba * liczba;
    printf("Liczba wynosi %d, podwojona liczba wynosi %d, zaś do kwadratu wynosi %d\n", liczba, podwojona_liczba, do_kwadratu_liczba);
}


void gazelka(void)
{
    printf("Gazelka!");
}


void raz_trzy(void)
{
    printf("Raz!\n");
    dwa();
    printf("Trzy!\n");
}

void dwa(void)
{
    printf("Dwa!\n");
}
