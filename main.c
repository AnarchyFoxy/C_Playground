//
//  main.c
//  C Playground
//
//  Created by Astryda Malinowska (KyriaFoxy) on 29/12/2022.
//

#include <stdio.h>
#include <string.h> //for strlen() function for 4.3
#include <limits.h> //4.5
#include <float.h> //4.5
#define GESTOSC 62.4 // human body density in pounds on square feets //4.1
#define POCHWALA "Wow, what a beautiful name!" //4.2, 4.3
#define PI 3.4159 //4.4, 4.6
#define STRONY 1024 //4.7

int main() {
    //4.1 talkback program, gathering infos from user
    float waga, objetosc;
    int rozmiar, litery;
    char nazwa[40];

    printf("Hello, dear. What is your name?\n");
    scanf("%s", nazwa);
    printf("%s, could you please provide your weight?\n", nazwa);
    scanf("%f", &waga);
    rozmiar = sizeof nazwa;
    litery = strlen(nazwa);
    objetosc = waga / GESTOSC;
    printf("So, %s, density of your body is equal to: %2.2f square feets.\n", nazwa, objetosc);
    printf("Moreover, your name contains %d letters,\n", litery);
    printf("and for store them we used %d bytes.\n", rozmiar);
    /*
     * Hello,dear. What is your name?
     * Astryda
     * Astryda, could you please provide your weight?
     * 94
     * So, Astryda, density of your body is equal to: 1.51 square feets.
     * Moreover, your name contains 7 letters,
     * and for store them we used 40 bytes.
     */

    //4.2 greetings names
    char imie[40];
    printf("What is your name?\n");
    scanf("%s", imie);
    printf("Hello, %s. %s\n", imie, POCHWALA);
    /*
     * What is your name?
     * Astryda
     * Hello, Astryda. Wow, what a beautiful name!
     */

    //4.3 greetings names with strlen and sizeof
    char name[40];
    printf("What is your name?\n");
    scanf("%s", name);
    printf("Hello, %s! %s\n", name, POCHWALA);
    printf("Your name contains %zd letters, and is stored in %zd memory cells.\n", strlen(name), sizeof name);
    printf("Greeting contains %zd leters ", strlen(POCHWALA));
    printf("and is stored in %zd memory cells.\n", sizeof POCHWALA);
    /*
     * What is your name?
     * Astryda
     * Hello, Astryda! Wow, what a beautiful name!
     * Your name contains 7 letters, and is stored in 40 memory cells.
     * Greeting contains 27 leters and is stored in 28 memory cells.
     */

    //4.4 using #define with constant in pizza context
    float powierzchnia, obwod, promien;
    printf("Ile wynosi promień Twojej pizzy?\n");
    scanf("%f", &promien);
    powierzchnia = PI * promien * promien;
    obwod = 2.0 * PI * promien;
    printf("Podstawowe parametry Twojej pizzy to:\n");
    printf("Obwód = %1.2f, powierzchnia = %1.2f.\n", obwod, powierzchnia);
    /*
     * Ile wynosi promień Twojej pizzy?
     * 32
     * Podstawowe parametry Twojej pizzy to:
     * Obwód = 218.62, powierzchnia = 3497.88.
     */

    // 4.5 using definitions from headers <limits.h> and <float.h>
    printf("Some numerical limits for this system:\n");
    printf("The biggest int: %d.\n", INT_MAX);
    printf("The smallest long long: %lld.\n", LLONG_MIN);
    printf("One byte = %d bits (on this system).\n", CHAR_BIT);
    printf("The biggest double = %e.\n", DBL_MAX);
    printf("The smallest normal float = %e.\n", FLT_MIN);
    printf("Float precision = %d.\n", FLT_DIG);
    printf("Float ipsilon = %e.\n", FLT_EPSILON);
    /*
     * Some numerical limits for this system:
     * The biggest int: 2147483647.
     * The smallest long long: -9223372036854775808.
     * One byte = 8 bits (on this system).
     * The biggest double = 1.797693e+308.
     * The smallest normal float = 1.175494e-38.
     * Float precision = 6.
     * Float ipsilon = 1.192093e-07.
     */

    //4.6 using conversion specificators
    int liczba = 5;
    float likier = 13.5;
    int koszt = 3100;

    printf("%d woman drunk %f glasses of liquor.\n", liczba, likier);
    printf("Value of PI is equal to = %f.\n", PI);
    printf("Goodbye! You are to expensive, my lady, to be mine ");
    printf("(%c%d).\n", '$', 2 * koszt);
    /*
     * 5 woman drunk 13.500000 glasses of liquor.
     * Value of PI is equal to = 3.415900.
     * Goodbye! You are to expensive, my lady, to be mine ($6200).
     */

    //4.7 - using modifiers
    printf("*%d*\n", STRONY);
    printf("*%2d*\n", STRONY);
    printf("*%10d*\n", STRONY);
    printf("*%-10d*\n", STRONY);
    /*
     * *1024*
     * *1024*
     * *      1024*
     * *1024      *
     */

    //4.8 modifiers for floats
    const double RENT = 2345.67;

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    /*
     * *2345.670000*
     * *2.345670e+03*
     * *2345.67*
     * *2345.7*
     * *  2345.670*
     * * 2.346E+03*
     * *+2345.67*
     * *0002345.67*
     */

    //4.9 modifiers
    printf("%x, %X, %#X\n", 31, 31, 31);
    printf("**%d**% d**% d**\n", 41, 41, -42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
    /*
     * 1f, 1F, 0X1F
     * **41** 41**-42**
     * **    6**  006**00006**  006**
     */

    return 0;
}
