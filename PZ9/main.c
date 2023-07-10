#include <stdio.h>
#include <Windows.h>


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, y;

    printf("Введіть значення x: ");
    scanf_s("%d", &x);

    printf("Введіть значення y: ");
    scanf_s("%d", &y);

    int steps = 0;
    if (x == y) {
        return steps;
    }
    x++;

    steps++;
    if (x == y - 1) {
        x--;
        steps++;
        return steps;
    }

    while (x != y) {

        if (y > x) {
            x += 2;
        }

        else {
            x -= 2;
        }
        steps++;
    }
    x--;
    steps++;
    printf("Мінімальна кількість кроків: %d\n", steps);

    return 0;
}
