// P011 Biblioteca.cpp
//

#include <iostream>

using namespace std;

int titulo;
int fechadesalida;
int autor;


int main()
{
    cout << "buenas apreciable lector o lectora, le importaría darme los datos de su libro? \n";
    cout << "voy a necesitar el titulo ¿como se llama la obra maestra?";
    cin >> titulo;

    cout << "\n Buen nombre, ahora el año en el que salió";
    cin >> fechadesalida;

    cout << "\n y finalmente el nombre del autor";
    cin >> autor;

    cout << "\n Maravilloso, ahora si el cerebro no me falla, tus elecciones son: ";
    cout << titulo, fechadesalida, autor;
}

