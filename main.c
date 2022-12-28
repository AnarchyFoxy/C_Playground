//
//  main.c
//  C Playground
//
//  Created by Astryda Malinowska (KyriaFoxy) on 22/12/2022.
//
#include <stdio.h>

int main() {
    //3.1 Value of your body weight in gold
    float ciezar, wartosc; //values of weight and in gold

    printf("Czy jesteś wart tyle, co Twój ciężar w złocie?\n");
    printf("Sprawdźmy\n");
    printf("Podaj swój ciężar w kilogramach: ");

    //taking values from the user:
    scanf("%f", &ciezar);

    //I don't know the current gold value, so, I'm taking 4250 for unit
    wartosc = 4250.0 * ciezar * 32.151;

    printf("Twój cięzar w złocie jst wart %.2f zł.\n", wartosc);
    printf("Z pewnością jesteś tyle wart! W razie spadku cen złota\n");
    printf("Jedz więcej, aby utrzymać swoją wartość.\n");

    //3.1 - experiment
    float ciezar_e, wartosc_e, uncja_zlota;
    printf("Are you valuable as much as your weight in gold?\n");
    printf("Let's check it out!\n");
    printf("Provide our weight in kg: ");

    scanf("%f", &ciezar_e);

    printf("\n");
    printf("Please provide current gold unit value in PLN: ");

    scanf("%f", &uncja_zlota);

    wartosc_e = uncja_zlota * ciezar * 32.151;
    printf("Your weight in gold is equal: %.2f in PLN\n", wartosc_e);
    printf("Indeed, you are valuable as much as in gold! In case of recession\n");
    printf("eat more, to maintain your value!\n");

    //3.2 printing integer value with mistake
    int ten = 10;
    printf("Właściwy sposób: ");
    printf("%d minus %d równa się %d\n", ten, 2, ten -2);
    printf("The wrong way: ");
    printf("%d minus %d equals %d\n", ten); //missing two args



    return 0;
}
