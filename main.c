//
//  main.c
//  C Playground
//
//  Created by Astryda Malinowska (KyriaFoxy) on 22/12/2022.
//
#include <stdio.h>

int main() {
//    //3.1 Value of your body weight in gold
//    float ciezar, wartosc; //values of weight and in gold
//
//    printf("Czy jesteś wart tyle, co Twój ciężar w złocie?\n");
//    printf("Sprawdźmy\n");
//    printf("Podaj swój ciężar w kilogramach: ");
//
//    //taking values from the user:
//    scanf("%f", &ciezar);
//
//    //I don't know the current gold value, so, I'm taking 4250 for unit
//    wartosc = 4250.0 * ciezar * 32.151;
//
//    printf("Twój cięzar w złocie jst wart %.2f zł.\n", wartosc);
//    printf("Z pewnością jesteś tyle wart! W razie spadku cen złota\n");
//    printf("Jedz więcej, aby utrzymać swoją wartość.\n");
//
//    //3.1 - experiment
//    float ciezar_e, wartosc_e, uncja_zlota;
//    printf("Are you valuable as much as your weight in gold?\n");
//    printf("Let's check it out!\n");
//    printf("Provide our weight in kg: ");
//
//    scanf("%f", &ciezar_e);
//
//    printf("\n");
//    printf("Please provide current gold unit value in PLN: ");
//
//    scanf("%f", &uncja_zlota);
//
//    wartosc_e = uncja_zlota * ciezar * 32.151;
//    printf("Your weight in gold is equal: %.2f in PLN\n", wartosc_e);
//    printf("Indeed, you are valuable as much as in gold! In case of recession\n");
//    printf("eat more, to maintain your value!\n");

    //3.2 printing integer value with mistake
    int ten = 10;
    printf("Właściwy sposób: ");
    printf("%d minus %d równa się %d\n", ten, 2, ten -2);
    printf("The wrong way: ");
    printf("%d minus %d equals %d\n", ten); //missing two args

    //3.3 printing value 100 in three numeric types
    int x = 100;
    printf("Decimal = %d, oct = %o, hexadecimal = %x\n", x, x, x);
    printf("Decimal = %d, oct = %#o, hexadecimal = %#x\n", x, x, x);

    //bonus - overloading integers
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d, %d, %d\n", i, i+1, i+2);
    printf("%u, %u, %u\n", j, j+1, j+2);

    //3.4 more printf features
    unsigned int un = 3000000000;
    short koniec = 200;
    long duza = 65537;
    long long bardzoduza = 12345678908642;
    printf("un = %u, but not %d\n", un, un);
    printf("koniec = %hd and %d\n", koniec, koniec);
    printf("duza = %ld, but not %hd\n", duza, duza);
    printf("bardzoduza = %lld, but not %ld\n", bardzoduza, bardzoduza);


    char ch;
    printf("Provide some character. But only single character!\n");
    scanf("%c", &ch);
    printf("Code of sign %c is %d\n", ch, ch);


    return 0;
}
