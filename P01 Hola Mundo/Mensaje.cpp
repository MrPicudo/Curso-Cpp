#include<iostream>

using namespace std;

int main()
{
    int num;
    char nombre[50];
    // Así se debería de mostrar los acentos pero no lo está detectando no sé por qué.
    setlocale(LC_ALL, "");
    cout<<"Hola mundo! \n"<<"Ingresa un numero: ";
    cin>>num;
    cout<<"El numero es "<<num<<endl;
    cout<<"Escribe tu nombre: ";
    fflush(stdin);
    cin.getline(nombre, 50, '\n');
    cout<<"Mucho gusto "<<nombre<<endl;
    return 0;
}
