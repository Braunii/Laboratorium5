// Do��czenie bibliotek
#include <stdio.h>
#include <stdlib.h>
// Funkcja g��wna
int main()
{
    // Definicja zmiennej a
    int a;
    // Pobranie danych od u�ytkownika
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &a);
    // Warunek sprawdzaj�cy czy liczba jest ujemna, dodatnia, r�wna 0
    if (a > 0){
        printf("Liczba jest dodatnia\n");
    }
    else if (a < 0){
        printf("Liczba jest ujemna\n");
    }
    else {
        printf("Liczba jest rowna 0\n");
    }
    // Zatrzymanie konsoli
    system("pause");
    // Zwr�cenie 0
    return 0;
}
