#include <windows.h>
#include <iostream>   
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <conio.h> // getch
#include <vector>
#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3

using namespace std;

int main()
{
    vector<string> usuarios;
    vector<string> claves;
    usuarios.push_back("Danielo");
    usuarios.push_back("Fernando");
    usuarios.push_back("Gabriela");
    usuarios.push_back("Kendy");
    usuarios.push_back("Brenda");
    
    //Contrase�as
    claves.push_back("1234");
    claves.push_back("456");
    claves.push_back("789");
    claves.push_back("abc");
    claves.push_back("efg");

    string usuario, password;

    int contador = 0;
    bool ingresa = false;

    do
    {
	system("color 2");
    int segundos=5;
    for(int i=0; i<=21; i++)
        cout << "\n";
    cout << " \t\t\t\t\t\t\t CARGANDO...\n";
    for(int i=0; i<=119; i++)
        cout << "";
    for(int i=0; i<=119; i++)
    {
        cout<<char(219);
        Sleep(segundos*1000/80);
    }
    cout<<"\nCompletado!";
        system("cls");
        cout << "\t\t\tLOGIN DE USUARIO" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\tUsuario: ";
        getline(cin, usuario);

        char caracter;

        cout << "\tPassword: ";
        caracter = getch();

        password = "";

        while (caracter != ENTER)
        {

            if (caracter != BACKSPACE)
            {
                password.push_back(caracter);
                cout << "*";
            }
            else
            {
                if (password.length() > 0)
                {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }

            caracter = getch();
        }

        for (int i = 0; i < usuarios.size(); i++)
        {
            if (usuarios[i] == usuario && claves[i] == password)
            {
                ingresa = true;
                break;
            }
        }

        if (!ingresa)
        {
            cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
            cin.get();
            contador++;
        }

    } while (ingresa == false && contador < INTENTOS);

    if (ingresa == false)
    {
        cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
    }
    else
    {
        cout << "\n\n\tBienvenido al sistema" << endl;
        system("pause");
        system("cls");
        
        
        cout<<"En este Apartado podras seguir programado tu proyecto si es que asi lo deseas a partir de esta linea de codigo"<<endl;
        cout<<"Podras poner menus y diferentes codigos para que se haga un proyecto completo con un preloader, login y por consiguiente tu programa o la idea a plasmar"<<endl;
        /* 
        Aqu� va el c�digo del programa cuando el usuario ingresa sus credenciales correctas
        */
    }

    cin.get();

    return 0;
}
