//Creacion de funcion principal main
#include <stdio.h>
#include "linked_list.h" // Enlazo el archivo de cabecera para las operaciones de la lista enlazada

int main() {
    LinkedList list; // Declarar una lista enlazada
    initLinkedList(&list); // Inicializar la lista

    // Agregar nodos
    addNode(&list, 1);
    addNode(&list, 2);
    addNode(&list, 3);

    // Imprimir la lista
    printf("Lista actual:\n");
    printList(&list);

    // Eliminar un nodo por valor
    deleteNodeByValue(&list, 2);

    // Imprimir la lista después de la eliminación
    printf("Lista después de eliminar el valor 2:\n");
    printList(&list);

    // Agregar un nodo al inicio
    addNodeAtBeginning(&list, 0);

    // Agregar un nodo al final
    addNodeAtEnd(&list, 4);

    // Imprimir la lista después de agregar al inicio y al final
    printf("Lista después de agregar al inicio y al final:\n");
    printList(&list);

    // Buscar un nodo por valor
    int searchValue = 3;
    if (searchNode(&list, searchValue)) {
        printf("El valor %d existe en la lista.\n", searchValue);
    } else {
        printf("El valor %d no existe en la lista.\n", searchValue);
    }

    // Obtener el elemento enésimo
    int index = 2;
    int value;
    if (getNodeByIndex(&list, index, &value)) {
        printf("El elemento en la posición %d es: %d\n", index, value);
    } else {
        printf("No existe un elemento en la posición %d.\n", index);
    }

    // Liberar la memoria de la lista
    destroyLinkedList(&list);

    return 0;
}
//Fin de main
