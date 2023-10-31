//Archivo de cabecera que se usa para definir las estructuras y los prototipos de funciones de la lista que se va a enlazar.
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
// Definición de la estructura de un nodo de la lista enlazada
typedef struct Node {
    int data;// Datos almacenados en el nodo
    struct Node* next;// Puntero al siguiente nodo en la lista
} Node;
// Definición de la estructura de la lista enlazada
typedef struct LinkedList {
    Node* head;// Puntero al primer nodo de la lista
    Node* tail;// Puntero al último nodo de la lista
    int size;// Tamaño actual de la lista (número de nodos)
} LinkedList;

void initLinkedList(LinkedList* list);// Función para inicializar una lista enlazada vacía
void addNode(LinkedList* list, int data);// Función para agregar un nodo al final de la lista
void deleteNodeByValue(LinkedList* list, int value);// Función para eliminar un nodo por valor
void addNodeAtBeginning(LinkedList* list, int data);// Función para agregar un nodo al inicio de la lista
void addNodeAtEnd(LinkedList* list, int data);// Función para agregar un nodo al final de la lista
int searchNode(LinkedList* list, int value);// Función para buscar un nodo por valor
int getNodeByIndex(LinkedList* list, int index, int* value);// Función para obtener el elemento enésimo
void printList(LinkedList* list);// Función para imprimir la lista en la salida estándar
void destroyLinkedList(LinkedList* list);// Función para liberar la memoria de la lista

#endif
//fin del codigo
