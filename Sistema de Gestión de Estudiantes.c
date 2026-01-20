#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX_ESTUDIANTES 100

typedef struct{
char nombre[100];
char codigo[100];
int edad;
float promedio;
bool activo;
} Estudiante;

Estudiante estudiantes[MAX_ESTUDIANTES];
int total = 0;

void mostrarInformacionCompleta(Estudiante *nuevo){
printf("Nombre: %s\n", nuevo->nombre);
printf("Codigo: %s\n", nuevo->codigo);
printf("Edad: %d\n", nuevo->edad);
printf("Promedio: %.2f\n", nuevo->promedio);
printf("Estado: %s\n", nuevo->activo ? "Activo" : "Inactivo");
}

void actualizarActivo(Estudiante *nuevo, bool estado) {
    nuevo->activo = estado;
}

void agregarEstudiante() {
    if (total >= MAX_ESTUDIANTES) {
        printf("Error: Lista llena\n");
        return;
    }
    Estudiante nuevo;

    printf("Nombre: ");
    fgets(nuevo.nombre, 100, stdin);
    nuevo.nombre[strcspn(nuevo.nombre, "\n")] = 0;

    printf("Codigo: ");
    scanf("%s", nuevo.codigo);

    printf("Edad: ");
    scanf("%d", &nuevo.edad);

    printf("Promedio: ");
    scanf("%f", &nuevo.promedio);

    int act;
    printf("Activo (1=si, 0=no): ");
    scanf("%d", &act);
    nuevo.activo = (act == 1);

    estudiantes[total++] = nuevo;
}

void mostrarUno() {
    char cod[30];
    printf("Ingrese codigo a buscar: ");
    scanf("%s", cod);

    for (int i = 0; i < total; i++) {
        if (strcmp(estudiantes[i].codigo, cod) == 0) {
            mostrarInformacionCompleta(&estudiantes[i]);
            return;
        }
    }
    printf("No encontrado\n");
}

void mostrarTodos() {
    if (total == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }
    for (int i = 0; i < total; i++) {
        mostrarInformacionCompleta(&estudiantes[i]);
        printf("--------------------\n");
    }
}

void menu() {
    printf("\n--- SISTEMA DE ESTUDIANTES ---");
    printf("\n1. Agregar estudiante\n");
    printf("2. Mostrar un estudiante (por codigo)\n");
    printf("3. Mostrar todos\n");
    printf("4. Salir\n");
    printf("Seleccione una opcion: ");
}

int main() {
    int op;

    do {
        menu();
        if (scanf("%d", &op) != 1) {
            printf("Error. Ingrese un numero valido.\n");
            while (getchar() != '\n');
            continue;
        }
        getchar();

        switch (op) {
            case 1: agregarEstudiante();
            break;
            case 2: mostrarUno();
            break;
            case 3: mostrarTodos();
            break;
            case 4: printf("Adios\n");
            break;
            default: printf("Opcion invalida\n");
        }
    } while (op != 4);

    return 0;
}
