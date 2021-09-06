
#include <stdio.h>
#include <stdlib.h>
#include "funcionesParcial.h"

int main() {
    char nombreArchivoEnt[] = "peliculasFavoritasESD135_2021.csv";
    int numeroAlumnos = contarAlumnos(nombreArchivoEnt);
    char matrizTodo[numeroAlumnos][20], matrizCarnets[numeroAlumnos][7];
    int matrizNumeros[numeroAlumnos][6], matrizTranspuestaNumeros[6][numeroAlumnos], matrizResultadoMultiplicado[59][59];
    matrizTodosLosDatos(nombreArchivoEnt, matrizTodo);
    extrarCarnets(matrizTodo, matrizCarnets);
    extraerMatrizNumeros(matrizTodo, matrizNumeros);
    crearCSVCarnets();
    crearMatrizTranspuestaNumero(numeroAlumnos, matrizNumeros, matrizTranspuestaNumeros);
    multiplicarMatrices(matrizNumeros, matrizTranspuestaNumeros, matrizResultadoMultiplicado);
    return 0;
}

