// Do³¹czenie bibliotek
#include <stdio.h>
#include <stdlib.h>
// Funkcja g³ówna
int main()
{
    // Definicja zmiennej a
    int a;
    // Pobranie danych od u¿ytkownika
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &a);
    // Warunek sprawdzaj¹cy czy liczba jest ujemna, dodatnia, równa 0
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
    // Zwrócenie 0
    return 0;
}
