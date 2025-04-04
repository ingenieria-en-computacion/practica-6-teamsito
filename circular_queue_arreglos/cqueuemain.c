#include <stdio.h>
#include "circularqueue.h"

int main() {
    ColaCircular C = ColaCircular_Vacia();

    C = ColaCircular_Enqueue(C, 10);
    C = ColaCircular_Enqueue(C, 20);
    C = ColaCircular_Enqueue(C, 30);

    printf("Primer elemento: %d\n", ColaCircular_First(C));
    printf("Último elemento: %d\n", ColaCircular_Last(C));

    C = ColaCircular_Dequeue(C);
    printf("Después de un dequeue:\n");
    printf("Primer elemento: %d\n", ColaCircular_First(C));
    printf("Último elemento: %d\n", ColaCircular_Last(C));

    // Encolando más elementos para ver comportamiento circular
    for (int i = 40; i <= 60; i += 10) {
        C = ColaCircular_Enqueue(C, i);
    }

    printf("Elementos actuales en la cola:\n");
    while (!ColaCircular_esVacia(C)) {
        printf("%d ", ColaCircular_First(C));
        C = ColaCircular_Dequeue(C);
    }
    printf("\n");

    return 0;
}
