//
//  main.c
//  C Playground
//
//  Created by Astryda Malinowska (KyriaFoxy) on 01/01/2022.
//

#include <stdio.h>
#define KOREKTA -1 //5.1, 5.2
#define POLA 64
#define SEC_TO_MIN 60

int main(void) {
//    //5.1 counting shoe size on cm
//    const double MNOZNIK = 0.666666;
//    double but, stopa;
//
//    but = 42.0;
//    stopa = MNOZNIK * but + KOREKTA;
//    printf("Shoe size       Foot length\n");
//    printf("%8.1f %15.2f cm\n", but, stopa);
//    /*
//     * Shoe size       Foot length
//     *     42.0           27.00 cm
//     */

//    //5.2 - counting shoe size with while loop
//    const double MNOZNIK = 0.666666;
//    double but, stopa;
//
//    printf("Shoe size      Foot length\n");
//    but = 24.0;
//    while(but < 45)
//    {
//        stopa = MNOZNIK * but + KOREKTA;
//        printf("%8.1f %15.2f cm\n", but, stopa);
//        but++;
//    }
//    printf("If the shoe size fit - wear it");
//    /*
//     * Shoe size      Foot length
//     *     24.0           15.00 cm
//     *     25.0           15.67 cm
//     *     26.0           16.33 cm
//     *     27.0           17.00 cm
//     *     28.0           17.67 cm
//     *     29.0           18.33 cm
//     *     30.0           19.00 cm
//     *     31.0           19.67 cm
//     *     32.0           20.33 cm
//     *     33.0           21.00 cm
//     *     34.0           21.67 cm
//     *     35.0           22.33 cm
//     *     36.0           23.00 cm
//     *     37.0           23.67 cm
//     *     38.0           24.33 cm
//     *     39.0           25.00 cm
//     *     40.0           25.67 cm
//     *     41.0           26.33 cm
//     *     42.0           27.00 cm
//     *     43.0           27.67 cm
//     *     44.0           28.33 cm
//     * If the shoe size fit - wear it
//     */

//    //5.3 golf, using multiple assignment
//    int jane, tarzan, gepard;
//
//    gepard = tarzan = jane = 68;
//    printf("                       gepard           tarzan        jane\n");
//    printf("Wynik pierwszej rundy    %4d      %8d      %8d\n", gepard, tarzan, jane);
//    /*
//     *                        gepard           tarzan        jane
//     * Wynik pierwszej rundy      68            68            68
//     */

//    //5.4 squares
//    int num = 1;
//
//    while(num < 21)
//    {
//        printf("%4d %6d\n", num, num * num);
//        num = num + 1;
//    }
//    /*
//     *  1      1
//     *  2      4
//     *  3      9
//     *  4     16
//     *  5     25
//     *  6     36
//     *  7     49
//     *  8     64
//     *  9     81
//     *  10    100
//     *  11    121
//     *  12    144
//     *  13    169
//     *  14    196
//     *  15    225
//     *  16    256
//     *  17    289
//     *  18    324
//     *  19    361
//     *  20    400
//     */
//
//    //5.5 exponential growth
//    const double PLON = 2E16;
//    double biezace, suma;
//    int licznik = 1;
//
//    printf("pole    dodane ziarna    suma ziaren    ");
//    printf("czesc rocznej\n");
//    printf("                                        ");
//    printf("produkcji swiatowej\n");
//    suma = biezace = 1.0;
//    printf("%3d %15.2e %14.2e %14.2e\n", licznik, biezace, suma, suma/PLON);
//    while(licznik < POLA)
//    {
//        licznik = licznik + 1;
//        biezace = 2.0 * biezace;
//        suma = suma + biezace;
//        printf("%3d %15.2e %14.2e %14.2e\n", licznik, biezace, suma, suma/PLON);
//    }
//    /*
//     *
//    pole    dodane ziarna    suma ziaren    czesc rocznej
//                                        produkcji swiatowej
//  1        1.00e+00       1.00e+00       5.00e-17
//  2        2.00e+00       3.00e+00       1.50e-16
//  3        4.00e+00       7.00e+00       3.50e-16
//  4        8.00e+00       1.50e+01       7.50e-16
//  5        1.60e+01       3.10e+01       1.55e-15
//  6        3.20e+01       6.30e+01       3.15e-15
//  7        6.40e+01       1.27e+02       6.35e-15
//  8        1.28e+02       2.55e+02       1.27e-14
//  9        2.56e+02       5.11e+02       2.55e-14
// 10        5.12e+02       1.02e+03       5.12e-14
// 11        1.02e+03       2.05e+03       1.02e-13
// 12        2.05e+03       4.10e+03       2.05e-13
// 13        4.10e+03       8.19e+03       4.10e-13
// 14        8.19e+03       1.64e+04       8.19e-13
// 15        1.64e+04       3.28e+04       1.64e-12
// 16        3.28e+04       6.55e+04       3.28e-12
// 17        6.55e+04       1.31e+05       6.55e-12
// 18        1.31e+05       2.62e+05       1.31e-11
// 19        2.62e+05       5.24e+05       2.62e-11
// 20        5.24e+05       1.05e+06       5.24e-11
// 21        1.05e+06       2.10e+06       1.05e-10
// 22        2.10e+06       4.19e+06       2.10e-10
// 23        4.19e+06       8.39e+06       4.19e-10
// 24        8.39e+06       1.68e+07       8.39e-10
// 25        1.68e+07       3.36e+07       1.68e-09
// 26        3.36e+07       6.71e+07       3.36e-09
// 27        6.71e+07       1.34e+08       6.71e-09
// 28        1.34e+08       2.68e+08       1.34e-08
// 29        2.68e+08       5.37e+08       2.68e-08
// 30        5.37e+08       1.07e+09       5.37e-08
// 31        1.07e+09       2.15e+09       1.07e-07
// 32        2.15e+09       4.29e+09       2.15e-07
// 33        4.29e+09       8.59e+09       4.29e-07
// 34        8.59e+09       1.72e+10       8.59e-07
// 35        1.72e+10       3.44e+10       1.72e-06
// 36        3.44e+10       6.87e+10       3.44e-06
// 37        6.87e+10       1.37e+11       6.87e-06
// 38        1.37e+11       2.75e+11       1.37e-05
// 39        2.75e+11       5.50e+11       2.75e-05
// 40        5.50e+11       1.10e+12       5.50e-05
// 41        1.10e+12       2.20e+12       1.10e-04
// 42        2.20e+12       4.40e+12       2.20e-04
// 43        4.40e+12       8.80e+12       4.40e-04
// 44        8.80e+12       1.76e+13       8.80e-04
// 45        1.76e+13       3.52e+13       1.76e-03
// 46        3.52e+13       7.04e+13       3.52e-03
// 47        7.04e+13       1.41e+14       7.04e-03
// 48        1.41e+14       2.81e+14       1.41e-02
// 49        2.81e+14       5.63e+14       2.81e-02
// 50        5.63e+14       1.13e+15       5.63e-02
// 51        1.13e+15       2.25e+15       1.13e-01
// 52        2.25e+15       4.50e+15       2.25e-01
// 53        4.50e+15       9.01e+15       4.50e-01
// 54        9.01e+15       1.80e+16       9.01e-01
// 55        1.80e+16       3.60e+16       1.80e+00
// 56        3.60e+16       7.21e+16       3.60e+00
// 57        7.21e+16       1.44e+17       7.21e+00
// 58        1.44e+17       2.88e+17       1.44e+01
// 59        2.88e+17       5.76e+17       2.88e+01
// 60        5.76e+17       1.15e+18       5.76e+01
// 61        1.15e+18       2.31e+18       1.15e+02
// 62        2.31e+18       4.61e+18       2.31e+02
// 63        4.61e+18       9.22e+18       4.61e+02
// 64        9.22e+18       1.84e+19       9.22e+02
//    */

//    //5.6 different types division
//    printf("Dzielenie całkowite:           5/4   wynosi %d\n", 5/4);
//    printf("Dzielenie calkowite:           6/3   wynosi %d\n", 6/3);
//    printf("Dzielenie całkowite:           7/4   wynosi %d\n", 7/4);
//    printf("Dzielenie zmiennoprzeciwnkowe: 7./4. wynosi %1.2f\n", 7./4.);
//    printf("Dzielenie mieszane:            7./4  wynosi %1.2f\n", 7./4);
//    /*
//     * Dzielenie całkowite:           5/4   wynosi 1
//     * Dzielenie calkowite:           6/3   wynosi 2
//     * Dzielenie całkowite:           7/4   wynosi 1
//     * Dzielenie zmiennoprzeciwnkowe: 7./4. wynosi 1.75
//     * Dzielenie mieszane:            7./4  wynosi 1.75
//     */

//    //5.7 test order of operations
//    int rekord, wynik;
//    rekord = wynik = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//    printf("rekord = %d, wynik = %d\n", rekord, wynik);
//    /*
//     * rekord = -23, wynik = -23
//     */
//
//    //5.8 - using sizeof operator
//    int n = 0;
//    size_t intsize;
//    intsize = sizeof(int);
//    printf("n = %d, n consist of %zd bytes; all integers has %zd bytes.\n", n, sizeof n, intsize);
//    /*
//     * n = 0, n consist of 4 bytes; all integers has 4 bytes.
//     */

    // 5.9 converting second into minutes and seconds
    int sec, min, left;

    printf("Converting seconds to minutes and seconds!\n");
    printf("Please provide amount of seconds: (<=0 means end): \n");
    scanf("%d", &sec);
    while (sec > 0)
    {
        min = sec / SEC_TO_MIN;
        left = sec % SEC_TO_MIN;
        printf("%d seconds equal %d minutes, %d seconds\n", sec, min, left);
        printf("Please provide another value (<=0 means end):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");
    /*
     * Converting seconds to minutes and seconds!
     * Please provide amount of seconds: (<=0 means end):
     * 314
     * 314 seconds equal 5 minutes, 14 seconds
     * Please provide another value (<=0 means end):
     * 360
     * 360 seconds equal 6 minutes, 0 seconds
     * Please provide another value (<=0 means end):
     * -6
     * Done!
     */
    return 0;
}
