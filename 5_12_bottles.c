//
//  5_12_bottles.c
//  C_Playground
//
//  Created by Astryda Malinowska on 04/02/2023.
//

#include <stdio.h>
#define MAX 100

int main(int argc, const char * argv[])
{
    int licznik = MAX + 1;
    
    while(--licznik > 0)
    {
        printf("%d bottles of beer on table, "
               "%d bottles of beer!\n", licznik, licznik);
        printf("Take one and let her dance!\n");
        printf("%d bottles of beer!\n\n", licznik - 1);
    }
    
    return 0;
}

// Output:
/*
 100 bottles of beer on table, 100 bottles of beer!
 Take one and let her dance!
 99 bottles of beer!

 99 bottles of beer on table, 99 bottles of beer!
 Take one and let her dance!
 98 bottles of beer!

 98 bottles of beer on table, 98 bottles of beer!
 Take one and let her dance!
 97 bottles of beer!

 97 bottles of beer on table, 97 bottles of beer!
 Take one and let her dance!
 96 bottles of beer!

 96 bottles of beer on table, 96 bottles of beer!
 Take one and let her dance!
 95 bottles of beer!

 95 bottles of beer on table, 95 bottles of beer!
 Take one and let her dance!
 94 bottles of beer!

 94 bottles of beer on table, 94 bottles of beer!
 Take one and let her dance!
 93 bottles of beer!

 93 bottles of beer on table, 93 bottles of beer!
 Take one and let her dance!
 92 bottles of beer!

 92 bottles of beer on table, 92 bottles of beer!
 Take one and let her dance!
 91 bottles of beer!

 91 bottles of beer on table, 91 bottles of beer!
 Take one and let her dance!
 90 bottles of beer!

 90 bottles of beer on table, 90 bottles of beer!
 Take one and let her dance!
 89 bottles of beer!

 89 bottles of beer on table, 89 bottles of beer!
 Take one and let her dance!
 88 bottles of beer!

 88 bottles of beer on table, 88 bottles of beer!
 Take one and let her dance!
 87 bottles of beer!

 87 bottles of beer on table, 87 bottles of beer!
 Take one and let her dance!
 86 bottles of beer!

 86 bottles of beer on table, 86 bottles of beer!
 Take one and let her dance!
 85 bottles of beer!

 85 bottles of beer on table, 85 bottles of beer!
 Take one and let her dance!
 84 bottles of beer!

 84 bottles of beer on table, 84 bottles of beer!
 Take one and let her dance!
 83 bottles of beer!

 83 bottles of beer on table, 83 bottles of beer!
 Take one and let her dance!
 82 bottles of beer!

 82 bottles of beer on table, 82 bottles of beer!
 Take one and let her dance!
 81 bottles of beer!

 81 bottles of beer on table, 81 bottles of beer!
 Take one and let her dance!
 80 bottles of beer!

 80 bottles of beer on table, 80 bottles of beer!
 Take one and let her dance!
 79 bottles of beer!

 79 bottles of beer on table, 79 bottles of beer!
 Take one and let her dance!
 78 bottles of beer!

 78 bottles of beer on table, 78 bottles of beer!
 Take one and let her dance!
 77 bottles of beer!

 77 bottles of beer on table, 77 bottles of beer!
 Take one and let her dance!
 76 bottles of beer!

 76 bottles of beer on table, 76 bottles of beer!
 Take one and let her dance!
 75 bottles of beer!

 75 bottles of beer on table, 75 bottles of beer!
 Take one and let her dance!
 74 bottles of beer!

 74 bottles of beer on table, 74 bottles of beer!
 Take one and let her dance!
 73 bottles of beer!

 73 bottles of beer on table, 73 bottles of beer!
 Take one and let her dance!
 72 bottles of beer!

 72 bottles of beer on table, 72 bottles of beer!
 Take one and let her dance!
 71 bottles of beer!

 71 bottles of beer on table, 71 bottles of beer!
 Take one and let her dance!
 70 bottles of beer!

 70 bottles of beer on table, 70 bottles of beer!
 Take one and let her dance!
 69 bottles of beer!

 69 bottles of beer on table, 69 bottles of beer!
 Take one and let her dance!
 68 bottles of beer!

 68 bottles of beer on table, 68 bottles of beer!
 Take one and let her dance!
 67 bottles of beer!

 67 bottles of beer on table, 67 bottles of beer!
 Take one and let her dance!
 66 bottles of beer!

 66 bottles of beer on table, 66 bottles of beer!
 Take one and let her dance!
 65 bottles of beer!

 65 bottles of beer on table, 65 bottles of beer!
 Take one and let her dance!
 64 bottles of beer!

 64 bottles of beer on table, 64 bottles of beer!
 Take one and let her dance!
 63 bottles of beer!

 63 bottles of beer on table, 63 bottles of beer!
 Take one and let her dance!
 62 bottles of beer!

 62 bottles of beer on table, 62 bottles of beer!
 Take one and let her dance!
 61 bottles of beer!

 61 bottles of beer on table, 61 bottles of beer!
 Take one and let her dance!
 60 bottles of beer!

 60 bottles of beer on table, 60 bottles of beer!
 Take one and let her dance!
 59 bottles of beer!

 59 bottles of beer on table, 59 bottles of beer!
 Take one and let her dance!
 58 bottles of beer!

 58 bottles of beer on table, 58 bottles of beer!
 Take one and let her dance!
 57 bottles of beer!

 57 bottles of beer on table, 57 bottles of beer!
 Take one and let her dance!
 56 bottles of beer!

 56 bottles of beer on table, 56 bottles of beer!
 Take one and let her dance!
 55 bottles of beer!

 55 bottles of beer on table, 55 bottles of beer!
 Take one and let her dance!
 54 bottles of beer!

 54 bottles of beer on table, 54 bottles of beer!
 Take one and let her dance!
 53 bottles of beer!

 53 bottles of beer on table, 53 bottles of beer!
 Take one and let her dance!
 52 bottles of beer!

 52 bottles of beer on table, 52 bottles of beer!
 Take one and let her dance!
 51 bottles of beer!

 51 bottles of beer on table, 51 bottles of beer!
 Take one and let her dance!
 50 bottles of beer!

 50 bottles of beer on table, 50 bottles of beer!
 Take one and let her dance!
 49 bottles of beer!

 49 bottles of beer on table, 49 bottles of beer!
 Take one and let her dance!
 48 bottles of beer!

 48 bottles of beer on table, 48 bottles of beer!
 Take one and let her dance!
 47 bottles of beer!

 47 bottles of beer on table, 47 bottles of beer!
 Take one and let her dance!
 46 bottles of beer!

 46 bottles of beer on table, 46 bottles of beer!
 Take one and let her dance!
 45 bottles of beer!

 45 bottles of beer on table, 45 bottles of beer!
 Take one and let her dance!
 44 bottles of beer!

 44 bottles of beer on table, 44 bottles of beer!
 Take one and let her dance!
 43 bottles of beer!

 43 bottles of beer on table, 43 bottles of beer!
 Take one and let her dance!
 42 bottles of beer!

 42 bottles of beer on table, 42 bottles of beer!
 Take one and let her dance!
 41 bottles of beer!

 41 bottles of beer on table, 41 bottles of beer!
 Take one and let her dance!
 40 bottles of beer!

 40 bottles of beer on table, 40 bottles of beer!
 Take one and let her dance!
 39 bottles of beer!

 39 bottles of beer on table, 39 bottles of beer!
 Take one and let her dance!
 38 bottles of beer!

 38 bottles of beer on table, 38 bottles of beer!
 Take one and let her dance!
 37 bottles of beer!

 37 bottles of beer on table, 37 bottles of beer!
 Take one and let her dance!
 36 bottles of beer!

 36 bottles of beer on table, 36 bottles of beer!
 Take one and let her dance!
 35 bottles of beer!

 35 bottles of beer on table, 35 bottles of beer!
 Take one and let her dance!
 34 bottles of beer!

 34 bottles of beer on table, 34 bottles of beer!
 Take one and let her dance!
 33 bottles of beer!

 33 bottles of beer on table, 33 bottles of beer!
 Take one and let her dance!
 32 bottles of beer!

 32 bottles of beer on table, 32 bottles of beer!
 Take one and let her dance!
 31 bottles of beer!

 31 bottles of beer on table, 31 bottles of beer!
 Take one and let her dance!
 30 bottles of beer!

 30 bottles of beer on table, 30 bottles of beer!
 Take one and let her dance!
 29 bottles of beer!

 29 bottles of beer on table, 29 bottles of beer!
 Take one and let her dance!
 28 bottles of beer!

 28 bottles of beer on table, 28 bottles of beer!
 Take one and let her dance!
 27 bottles of beer!

 27 bottles of beer on table, 27 bottles of beer!
 Take one and let her dance!
 26 bottles of beer!

 26 bottles of beer on table, 26 bottles of beer!
 Take one and let her dance!
 25 bottles of beer!

 25 bottles of beer on table, 25 bottles of beer!
 Take one and let her dance!
 24 bottles of beer!

 24 bottles of beer on table, 24 bottles of beer!
 Take one and let her dance!
 23 bottles of beer!

 23 bottles of beer on table, 23 bottles of beer!
 Take one and let her dance!
 22 bottles of beer!

 22 bottles of beer on table, 22 bottles of beer!
 Take one and let her dance!
 21 bottles of beer!

 21 bottles of beer on table, 21 bottles of beer!
 Take one and let her dance!
 20 bottles of beer!

 20 bottles of beer on table, 20 bottles of beer!
 Take one and let her dance!
 19 bottles of beer!

 19 bottles of beer on table, 19 bottles of beer!
 Take one and let her dance!
 18 bottles of beer!

 18 bottles of beer on table, 18 bottles of beer!
 Take one and let her dance!
 17 bottles of beer!

 17 bottles of beer on table, 17 bottles of beer!
 Take one and let her dance!
 16 bottles of beer!

 16 bottles of beer on table, 16 bottles of beer!
 Take one and let her dance!
 15 bottles of beer!

 15 bottles of beer on table, 15 bottles of beer!
 Take one and let her dance!
 14 bottles of beer!

 14 bottles of beer on table, 14 bottles of beer!
 Take one and let her dance!
 13 bottles of beer!

 13 bottles of beer on table, 13 bottles of beer!
 Take one and let her dance!
 12 bottles of beer!

 12 bottles of beer on table, 12 bottles of beer!
 Take one and let her dance!
 11 bottles of beer!

 11 bottles of beer on table, 11 bottles of beer!
 Take one and let her dance!
 10 bottles of beer!

 10 bottles of beer on table, 10 bottles of beer!
 Take one and let her dance!
 9 bottles of beer!

 9 bottles of beer on table, 9 bottles of beer!
 Take one and let her dance!
 8 bottles of beer!

 8 bottles of beer on table, 8 bottles of beer!
 Take one and let her dance!
 7 bottles of beer!

 7 bottles of beer on table, 7 bottles of beer!
 Take one and let her dance!
 6 bottles of beer!

 6 bottles of beer on table, 6 bottles of beer!
 Take one and let her dance!
 5 bottles of beer!

 5 bottles of beer on table, 5 bottles of beer!
 Take one and let her dance!
 4 bottles of beer!

 4 bottles of beer on table, 4 bottles of beer!
 Take one and let her dance!
 3 bottles of beer!

 3 bottles of beer on table, 3 bottles of beer!
 Take one and let her dance!
 2 bottles of beer!

 2 bottles of beer on table, 2 bottles of beer!
 Take one and let her dance!
 1 bottles of beer!

 1 bottles of beer on table, 1 bottles of beer!
 Take one and let her dance!
 0 bottles of beer!
 */
