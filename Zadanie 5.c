// Dołączenie bibliotek
#include <stdio.h>
#include <stdlib.h>

// Funkcja główna
int main()
{
    // Definicja zmiennych
    int spoznienia;
    int projekty;
    int staz;

    // Pobranie danych od użytkownika
    printf("Podaj liczbe spoznien: ");
    scanf("%d", &spoznienia);

    printf("Podaj liczbe projektow wykonanych: ");
    scanf("%d", &projekty);

    printf("Podaj staz w latach: ");
    scanf("%d", &staz);

    // Sprawdzenie poprawności danych
    if (spoznienia >= 0 && projekty >= 0 && staz >= 0){
        // Wyświetlenie kategorii
        if (spoznienia == 0 && projekty > 7 && staz >= 2){
            printf("Kategoria: A\n");
        }
        else if (spoznienia <= 2 && projekty >= 5 && staz >= 1){
            printf("Kategoria: B\n");
        }
        else {
            printf("Kategoria: C\n");
        }
    }
    else {
        printf("Wprowadz poprawne dane\n");
    }
    // Zatrzymanie konsoli
    system("pause");
    // Zwrócenie 0
    return 0;
}
