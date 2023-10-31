//Aqui se define el archivo que va a definir las operaciones de la listaenlazada.
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// Aqui se inicializa una lista enlazada vacía
void initLinkedList(LinkedList* list) {
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

// Agregar un nodo al final de la lista
void addNode(LinkedList* list, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (list->tail == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        list->tail->next = newNode;
        list->tail = newNode;
    }

    list->size++;
}

// Eliminar un nodo por valor
void deleteNodeByValue(LinkedList* list, int value) {
    Node* current = list->head;
    Node* prev = NULL;
//ciclo y condicionales
    while (current != NULL) {
        if (current->data == value) {
            if (prev == NULL) {
                list->head = current->next;
            } else {
                prev->next = current->next;
            }

            if (current == list->tail) {
                list->tail = prev;
            }

            free(current);
            list->size--;
            return;
        }

        prev = current;
        current = current->next;
    }
}

// Agregar un nodo al inicio de la lista
void addNodeAtBeginning(LinkedList* list, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = list->head;
    list->head = newNode;

    if (list->tail == NULL) {
        list->tail = newNode;
    }

    list->size++;
}

// Agregar un nodo al final de la lista
void addNodeAtEnd(LinkedList* list, int data) {
    addNode(list, data);
}

// Buscar un nodo por valor
int searchNode(LinkedList* list, int value) {
    Node* current = list->head;
//ciclo y condicionales
    while (current != NULL) {
        if (current->data == value) {
            return 1; // El valor existe en la lista
        }

        current = current->next;
    }

    return 0; // El valor no existe en la lista
}

// Obtener el elemento enésimo
int getNodeByIndex(LinkedList* list, int index, int* value) {
    if (index < 0 || index >= list->size) {
        return 0; // El índice está fuera de rango
    }

    Node* current = list->head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }

    *value = current->data;
    return 1; // Elemento encontrado
}

// Imprimir la lista
void printList(LinkedList* list) {
    Node* current = list->head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

// Liberar la memoria de la lista
void destroyLinkedList(LinkedList* list) {
    Node* current = list->head;

    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }

    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

//fin del codigo
