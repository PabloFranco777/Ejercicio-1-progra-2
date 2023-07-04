#include <iostream>

using namespace std;

const int MAX_GENERATIONS = 51;

int main() {
    double superficie_alto;
    double superficie_ancho;
    int num_generaciones;

    cout << "Ingrese el alto inicial del terreno: ";
    cin >> superficie_alto;
    cout << "Ingrese el ancho inicial del terreno: ";
    cin >> superficie_ancho;

    cout << "Ingrese el número de generaciones: ";
    cin >> num_generaciones;

    if (num_generaciones>=MAX_GENERATIONS)
    {

        cout << "El numero maximo de generaciones es de 50";
        return 0;
    }
else{
    int num_herederos_por_generacion[MAX_GENERATIONS];
    float area_por_generacion[MAX_GENERATIONS];

    for (int i = 0; i < num_generaciones; i++) {
        cout << "Ingrese el numero de herederos en la generacion " << i << ": ";
        cin >> num_herederos_por_generacion[i];
    }

    area_por_generacion[0] = superficie_alto * superficie_ancho;

    for (int i = 1; i <= num_generaciones; i++) {
        area_por_generacion[i] = area_por_generacion[i - 1] / num_herederos_por_generacion[i - 1];
    }

    cout << "Area heredada por generacion:\n";
    for (int i = 1; i <= num_generaciones; i++) {
        cout << "Generacion " << i << ": " << area_por_generacion[i] << " metros cuadrados\n";
    }

    return 0;
}
}
