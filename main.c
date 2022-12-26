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
    printf("Jedz więcej, aby utrzymać swoją wartość");
    return 0;
}
