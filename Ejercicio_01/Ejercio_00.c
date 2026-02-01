#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_ESTUDIANTES 20

typedef struct {
    char nombre[20];
    char codigo[20];
    int edad;
    float promedio;
    bool activo;
} Estudiante;

Estudiante estudiantes[MAX_ESTUDIANTES];
int total = 0;


void actualizarNombre(Estudiante *e, const char *nuevoNombre) {
    strcpy(e->nombre, nuevoNombre);
}

void actualizarCodigo(Estudiante *e, const char *nuevoCodigo) {
    strcpy(e->codigo, nuevoCodigo);
}

void actualizarEdad(Estudiante *e, int nuevaEdad) {
    e->edad = nuevaEdad;
}

void actualizarPromedio(Estudiante *e, float nuevoPromedio) {
    if (nuevoPromedio >= 0 && nuevoPromedio <= 10)
        e->promedio = nuevoPromedio;
}

void actualizarActivo(Estudiante *e, bool estado) {
    e->activo = estado;
}


void mostrarInformacionCompleta(Estudiante *e) {
    printf("\n--- Datos del Estudiante ---\n");
    printf("Nombre: %s\n", e->nombre);
    printf("Codigo: %s\n", e->codigo);
    printf("Edad: %d\n", e->edad);
    printf("Promedio: %.2f\n", e->promedio);
    printf("Estado: %s\n", e->activo ? "Activo" : "Inactivo");
}


void agregarEstudiante() {
    if (total >= MAX_ESTUDIANTES) {
        printf("Error: Capacidad maxima alcanzada.\n");
        return;
    }

    Estudiante e;
    printf("Nombre: ");
    fgets(e.nombre, 20, stdin);
    e.nombre[strcspn(e.nombre, "\n")] = 0;

    printf("Codigo: ");
    scanf("%s", e.codigo);

    printf("Edad: ");
    scanf("%d", &e.edad);

    printf("Promedio: ");
    scanf("%f", &e.promedio);

    int act;
    printf("Activo (1=si, 0=no): ");
    scanf("%d", &act);
    e.activo = (act == 1);

    estudiantes[total++] = e;
    printf("Estudiante agregado con exito.\n");
}

void mostrarUno() {
    char cod[30];
    printf("Ingrese el codigo a buscar: ");
    scanf("%s", cod);

    for (int i = 0; i < total; i++) {
        if (strcmp(estudiantes[i].codigo, cod) == 0) {
            mostrarInformacionCompleta(&estudiantes[i]);
            return;
        }
    }
    printf("Estudiante no encontrado.\n");
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
    printf("\n==== MENU PRINCIPAL ====");
    printf("\n1. Agregar estudiante");
    printf("\n2. Mostrar estudiante (por codigo)");
    printf("\n3. Mostrar todos");
    printf("\n4. Salir");
    printf("\nSeleccione una opcion: ");
}

int main() {
    int op;

    do {
        menu();
        if (scanf("%d", &op) != 1) {
            printf("Error. Ingrese un numero valido.\n");
            while (getchar() != '\n'); // Limpiar buffer
            continue;
        }

        getchar();

        switch (op) {
            case 1: agregarEstudiante(); break;
            case 2: mostrarUno(); break;
            case 3: mostrarTodos(); break;
            case 4: printf("Saliendo del programa...\n"); break;
            default: printf("Opcion invalida.\n");
        }
    } while (op != 4);

    return 0;
}
