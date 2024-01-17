//Definimos las librerias para el programa
#include <stdio.h>
#include <string.h>
//Creamos la estructura 
struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota;
};
//Creamos la funcion main junto con una variable para crear un menu
int main()
{
    int opcion;
    struct alumno alumnoActual;
    do
    {
        // Menú de opciones
        printf("\nMenu:\n");
        printf("1. Ingresar datos de un alumno\n");
        printf("2. Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);
        fflush(stdin);

        switch (opcion)
        {
        case 1:
            // Opción para ingresar datos de un alumno
            ingresarDatosAlumno(&alumnoActual);
            break;
        case 2:
            // Opción para salir del programa
            printf("Fin\n");
            break;
        default:
            // Opción inválida
            printf("Opcion invalida.\n");
            break;
        }

    } while (opcion != 2);

    return 0;
}

    void ingresarDatosAlumno(struct alumno *alumno)
    //Pide los datos
{
    printf("Matricula: ");
    scanf("%d", &((*alumno).matricula));
    fflush(stdin);

    printf("Nombre: ");
    fgets((*alumno).nombre, sizeof((*alumno).nombre), stdin);
    (*alumno).nombre[strcspn((*alumno).nombre, "\n")] = '\0'; // Elimina el carácter de nueva línea

    printf("Dirección: ");
    fgets((*alumno).direccion, sizeof((*alumno).direccion), stdin);
    (*alumno).direccion[strcspn((*alumno).direccion, "\n")] = '\0'; // Elimina el carácter de nueva línea

    printf("Materia: ");
    fgets((*alumno).materia, sizeof((*alumno).materia), stdin);
    (*alumno).materia[strcspn((*alumno).materia, "\n")] = '\0'; // Elimina el carácter de nueva línea

    printf("Nota: ");
    scanf("%f", &((*alumno).nota));
    fflush(stdin);
}
    void mostrarDatosAlumno(struct alumno *alumno)
{
    //Funcion para imprimir los datos
    printf("\nDatos del alumno:\n");
    printf("Matricula: %d\n", (*alumno).matricula);
    printf("Nombre: %s\n", (*alumno).nombre);
    printf("Dirección: %s\n", (*alumno).direccion);
    printf("Materia: %s\n", (*alumno).materia);
    printf("Nota: %.2f\n", (*alumno).nota);
}