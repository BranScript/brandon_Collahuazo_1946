#include<iostream>
using namespace std;
#include<iomanip>
struct estudiante
{
    int id;
    string nombres;
    float notap;

};

int main()
{
    int ne;
    float suma=0;
    bool ordena;
    cout<<"Ingrese la cantidad de estudiantes que desea ingresar: ";
    cin>>ne;
    estudiante estudiantes[ne],aux;
    for (int i = 0; i < ne; i++)
    {
        cout<<"Ingrese el id del estudiant: ";
        cin>>estudiantes[i].id;
        cout<<"Ingrese el nombre del estudiant: ";
        cin.ignore();
        getline(cin,estudiantes[i].nombres);
        cout<<"\nIngrese la nota del estudiant: ";
        cin>>estudiantes[i].notap;
    }

    cout<<"Datos ingresados: "<<endl;
    cout<<setw(5)<<"id"<<setw(10)<<"Nombres"<<setw(20)<<"Notas"<<endl;
    for (int i = 0; i < ne; i++)
    {   cout<<setw(3);
        cout<<estudiantes[i].id<<setw(12);
        cout<<estudiantes[i].nombres<<setw(15);
        cout<<estudiantes[i].notap<<endl;
        suma+=estudiantes[i].notap;

    }
    cout<<"Promedio de notas: "<<(float)suma/ne<<endl;
    cout<<"Listado de estudiantes de mayor nota a menor nota: "<<endl;
    for (int i = 0; i < ne-1 && ordena; i++)
    {   ordena=false;
        for (int j = 0; j < ne; j++)
        {
            if (estudiantes[j].notap<estudiantes[j+1].notap)
            {
                aux=estudiantes[j+1];
                estudiantes[j+1]=estudiantes[j];
                estudiantes[j]=aux;
                ordena=true;
            }
            
        }
        
    }

    for (int i = 0; i < ne; i++)
    {   cout<<setw(3);
        cout<<estudiantes[i].id<<setw(12);
        cout<<estudiantes[i].nombres<<setw(15);
        cout<<estudiantes[i].notap<<endl;

    }
    return 0;
}

