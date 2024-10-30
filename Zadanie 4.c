// Do³¹czenie bibliotek
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// Funkcja g³ówna
int main()
{
    // Definicja zmiennych
    int a;
    int b;
    int c;
    int max_bok;
    bool mozna_stworzyc;

    // Pobranie danych od u¿ytkownika
    printf("Podaj 1 bok trojkata: ");
    scanf("%d", &a);

    printf("Podaj 2 bok trojkata: ");
    scanf("%d", &b);

    printf("Podaj 3 bok trojkata: ");
    scanf("%d", &c);

    // Sprawdzenie najwiêkszej liczby
    if (a > b && a > c){
        max_bok = a;
    }
    else if (b > a && b > c){
        max_bok = b;
    }
    else if (c > a && c > b){
        max_bok = c;
    }
    else if (a == b && a == c){
        max_bok = a;
    }

    // Sprawdzenie czy mo¿na stworzyæ taki trójk¹t
    if (max_bok == a){
        mozna_stworzyc = b + c > a;
    }
    else if (max_bok == b){
        mozna_stworzyc = a + c > b;
    }
    else if (max_bok == c){
        mozna_stworzyc = a + b > c;
    }

    // Instrukcja warunkowa wyœwietlaj¹ca czy mo¿na stworzyæ taki trójk¹t
    if (mozna_stworzyc){
        printf("Mozna stworzyc taki trojkat\n");
        // Sprawdzenie typu trójk¹ta
        if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b)){
        printf("Trojkat jest rownoramienny!\n");
        }
        else if (a == b && a == c){
        printf("Trojkat jest rownoboczny\n");
        }
        else if (a != b && a != c){
        printf("Trojkat jest roznoboczny!\n");
        }
        // Sprawdzenie czy trójk¹t jest prostok¹tny
        if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2) || pow(a, 2) + pow(c,2) == pow(b, 2)){
        printf("Trojkat jest prostokatny\n");
        }
    }
    else {
        printf("Nie mozna stworzyc takiego trojkata!\n");
    }
    // Zatrzymanie konsoli
    system("pause");
    // Zwrócenie 0
    return 0;
}
