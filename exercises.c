#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejercicio 1: Encuentra el Elemento Mayor
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y devuelva el valor más grande del arreglo.
*/
int findMax(int arr[], int size)
{
  int mayor = arr[0];

  for(int i = 1; i < size; i++)
  {

    if(arr[i] > mayor)
    {
      mayor = arr[i];
    }
  }

  return mayor;
}

/*
Ejercicio 2: Invertir un Arreglo
Descripción: Escribe una función que tome un arreglo y su tamaño, y luego
invierta el orden de sus elementos.
*/
void reverseArray(int arr[], int size) 
{
  int posI = 0;
  int posF = size - 1;

  while(posI < posF)
  {
    int aux = arr[posI];

    arr[posI] = arr[posF];

    arr[posF] = aux;

    posI ++;
    posF --;
  }

}

/*
Ejercicio 3: Filtrar Números Pares
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y luego devuelva un nuevo arreglo que contenga solo
los números pares del arreglo original.
*/
int *filterEvenNumbers(int arr[], int size, int *newSize)
{
  
  int* ptrPares = NULL; // Puntero al nuevo arreglo, donde van los pares

  int cont = 0;

  for(int i = 0; i < size; i ++)
  {
    if(arr[i] % 2 == 0)
    {
      cont ++;
    }
  }

  if(cont == 0)
  {
    *newSize = 0;

    return ptrPares;
  }

  ptrPares = (int*)malloc(cont* sizeof(int));

  if(ptrPares == NULL)
  {
    exit(1);
  }

  int aux = 0;
  for(int i = 0; i < size; i++)
  {
    if(arr[i] % 2 == 0)
    {
      ptrPares[aux] = arr[i];
      aux ++;
    }
  }

  *newSize = cont;
  return ptrPares;
}

/*
Ejercicio 4: Fusión de dos Arreglos Ordenados
Descripción: Escribe una función que tome dos arreglos
ordenados y sus tamaños, y luego fusione estos dos
arreglos en un tercer arreglo también ordenado.
*/
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]) 
{

  int ind1 = 0;
  int ind2 = 0;
  int indRes = 0;

  while(ind1 < size1 && ind2 < size2)
  {
    if(arr1[ind1] <= arr2[ind2])
    {
      result[indRes] = arr1[ind1];

      ind1 ++;
    }else{

      result[indRes] = arr2[ind2];

      indRes ++;
    }
  }

  while (ind1 < size1)
  {
    result[indRes] = arr1[ind1];
    ind1 ++;
    indRes ++;
  }

  while(ind2 < size2)
  {
    result[indRes] = arr2[ind2];

    ind2 ++;
    indRes ++;
  }

}

/*
Ejercicio 5: Comprobación de Ordenación
Descripción: Escribe una función que tome un arreglo y su tamaño,
y luego devuelva 1 si el arreglo está ordenado en orden ascendente,
  0 si no está ordenado, y -1 si está ordenado en orden descendente.
*/
int checkSorted(int arr[], int size)  
{ 
  int ascendente = 1;
  int descendente = 1;

  for(int i = 1; i < size ; i++)
  {
    if(arr[i] < arr[i - 1])
    {
      ascendente = 0;
    }
    if(arr[i] > arr[i - 1])
    {
      descendente = 0;
    }
  }

  if(ascendente == 1)
  {
    return 1;
  } 
  else if (descendente == 1)
  {
    return -1;
  }
  else
  {
    return 0;
  }
}


/*
Ejercicio 6: Información de una Biblioteca
Descripción: Vamos a representar la información de una biblioteca. En la
biblioteca, hay libros, y cada libro tiene un autor. Queremos organizar esta
información utilizando estructuras anidadas en C. Escribe la función para
inicializar la información de un libro.
*/

typedef struct {
  char nombre[50];
  int anioNacimiento;
} Autor;

typedef struct {
  char titulo[100];
  Autor autor;
  int anioPublicacion;
} Libro;

void inicializarLibro(Libro *libro, const char *titulo, const char *nombreAutor,
                      int anioNacimiento, int anioPublicacion) {}

/*
Ejercicio 7: Lista enlazada de números
Descripción: Escribe una función que tome un arreglo de enteros y su tamaño, y
luego cree una lista enlazada usando la estructura Nodo. Cada nodo de la lista
debe contener un número del arreglo, y los nodos deben estar enlazados en el
mismo orden que los números aparecen en el arreglo. El último nodo de la lista
debe apuntar a NULL. La función debe devolver un puntero al primer nodo de la
lista enlazada.
Recuerda reservar memoria dinámica para cada nodo usando malloc.
  */

typedef struct nodo {
  int numero;
  struct nodo *siguiente; // puntero al siguiente nodo
} Nodo;

Nodo *crearListaEnlazada(int arr[], int size) { return NULL; }
