//
//  main.c
//  C Playground
//
//  Created by Astryda Malinowska (KyriaFoxy) on 22/12/2022.
//
#include <stdio.h>
#include <inttypes.h>

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
    /*
     * Właściwy sposób: 10 minus 2 równa się 8
     * The wrong way: 10 minus 0 equals 0
     */

    //3.3 printing value 100 in three numeric types
    int x = 100;
    printf("Decimal = %d, oct = %o, hexadecimal = %x\n", x, x, x);
    printf("Decimal = %d, oct = %#o, hexadecimal = %#x\n", x, x, x);
    /*
     * Decimal = 100, oct = 144, hexadecimal = 64
     * Decimal = 100, oct = 0144, hexadecimal = 0x64
     */

    //bonus - overloading integers
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d, %d, %d\n", i, i+1, i+2);
    printf("%u, %u, %u\n", j, j+1, j+2);
    /*
     * 2147483647, -2147483648, -2147483647
     * 4294967295, 0, 1
     */

    //3.4 more printf features
    unsigned int un = 3000000000;
    short koniec = 200;
    long duza = 65537;
    long long bardzoduza = 12345678908642;
    printf("un = %u, but not %d\n", un, un);
    printf("koniec = %hd and %d\n", koniec, koniec);
    printf("duza = %ld, but not %hd\n", duza, duza);
    printf("bardzoduza = %lld, but not %ld\n", bardzoduza, bardzoduza);
    /*
     * un = 3000000000, but not -1294967296
     * koniec = 200 and 200
     * duza = 65537, but not 1
     * bardzoduza = 12345678908642, but not 12345678908642
     */

    char ch;
    printf("Provide some character. But only single character!\n");
    scanf("%c", &ch);
    printf("Code of sign %c is %d\n", ch, ch);
    /*
     * Provide some character. But only single character!
     * l
     * Code of sign l is 108
     */

    //3.6 - altnames
    int32_t me32;
    me32 = 45933945;
    printf("Po pierwsze, załóżmy, że int32_t jest typu int: ");
    printf("me32 = %d\n", me32);
    printf("Następnie nie czyńmy żadnych założeń.\n");
    printf("Zamiast tego skorzystajmy z \"makro\" z pliku inttypes.h: ");
    printf("me32 = %" PRId32 "\n", me32);
    /*
     * Po pierwsze, załóżmy, że int32_t jest typu int: me32 = 45933945
     * Następnie nie czyńmy żadnych założeń.
     * Zamiast tego skorzystajmy z "makro" z pliku inttypes.h: me32 = 45933945
     */

    /*
     * Float, double, and other floating-points
     */

    //3.7 - showing float in two ways
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f można przedstawić jako %e\n", aboat, aboat);
    printf("lub jako %a w szesnastkowym zapisie potęgowym\n", aboat);
    /*
     * 32000.000000 można przedstawić jako 3.200000e+04
     * lub jako 0x1.f4p+14 w szesnastkowym zapisie potęgowym
     */

    printf("%f można przedstawić jako %e\n", abet, abet);
    printf("%Lf można przedstawić jako %Le\n", dip, dip);
    /*
     * 2140000000.000000 można przedstawić jako 2.140000e+09
     * 0.000053 można przedstawić jako 5.320000e-05
     */

    float zaduza = 3.4E38 * 100.0f;
    printf("%e\n", zaduza);
    /*
     * inf
     */

    //bonus cuting error with floats
    float a, b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);
    /*
     * 4008175468544.000000
     */

    //3.8 checking types sizes
    printf("Type int has size %zd bytes\n", sizeof(int));
    printf("Type char has size of %zd bytes\n", sizeof(char));
    printf("Type long has size of %zd bytes\n", sizeof(long));
    printf("Type long long has size of %zd bytes\n", sizeof(long long));
    printf("Type double has size of %zd bytes\n", sizeof(double));
    printf("Type long double has size of %zd bytes\n", sizeof(long double));
    printf("Type float has size of %zd bytes\n", sizeof(float));
    printf("Type _Complex has size of %zd bytes\n", sizeof(_Complex ));
    printf("Type _Bool has size of %zd bytes\n", sizeof(_Bool));
    /*
     * Type int has size 4 bytes
     * Type char has size of 1 bytes
     * Type long has size of 8 bytes
     * Type long long has size of 8 bytes
     * Type double has size of 8 bytes
     * Type long double has size of 16 bytes
     * Type float has size of 4 bytes
     * Type _Complex has size of 16 bytes
     * Type _Bool has size of 1 bytes
     */

    //3.9 missing args or too much, or wrong types
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    printf("%d\n", n, m);
    printf("%d, %d\n", n);
    printf("%d, %d\n", f, g);
    /*
     * 4
     * 4, 0
     * -2068061536, 0
     */

    //3.10 - using sequence characters - not working on linux
    float pensja;
    printf("Please provide month salary, that you deserve:");
    printf(" _________ zł\b\b\b\b\b\b\b\b\b\b\b\b");
    scanf("%f", &pensja);
    printf("\n\t%.2f zł miesięcznie to %.2f zł rocznie.", pensja, pensja * 12.0);
    printf("\rHo, ho!\n");
    /*
     * Please provide month salary, that you deserve: 12000.00
     *
     * Ho, ho!
     */


    /*
     * Practice
     */

    //2. program that asking for code 66 and printing character assigned to this code
    int character;
    printf("Dear one, please provide number 66 to print character assigned to this code:");
    scanf("%d", &character);
    printf("There you go: %c", character);

    //3. program with sound alarm and text
    printf("\a\n");
    printf("Sally, scared by unexpected sound, shouted: \"Bloody hell, what was that?!\"\n");

    //5. program converting years by seconds
    printf("Dear one, please provide your age: ");
    int age;
    scanf("%d", &age);
    long age_in_seconds = age * 31556926;
    printf("So, your age in seconds is equal to: %ld\n", age_in_seconds);

    //7.
    float inch, cm;
    inch = 2.54;
    printf("Please provide your height in cm, we will convert it into inches: ");
    scanf("%f", &cm);
    printf("So, your height in cm is equal to %.2f, and in inches is equal to: %.2f\n", cm, cm / inch);

    return 0;
}
