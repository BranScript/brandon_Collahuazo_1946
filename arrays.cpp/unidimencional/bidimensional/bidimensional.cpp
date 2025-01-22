#include <iostream>
#include <time.h>
using namespace std;
void ingresoDimensiones(int &nfila, int &ncolumna) {
do
{
cout << "Diguite el numero de filas: ";
cin >> nfila;
cout << "Diguite el numero de columnas: ";
cin >> ncolumna;
if (nfila != ncolumna)
{
cout << "El numero de filas debe ser igual al numero de columnas" << endl;
}
} while (nfila != ncolumna);
}
void llenarMatriz(int nfila, int ncolumna, int matriz[100][100]) {
for (int i = 0; i < nfila; i++)
{
for (int j = 0; j < ncolumna; j++)
{
matriz[i][j] = 10 + rand() % 11;
cout << matriz[i][j] << "\t";
}
cout << "\n";
}
}
void diagonalPrincipal(int nfila, int ncolumna,int &sdiagonalP, int matriz[100][100]) {
cout << "Diagonal principal: " << endl;
for (int i = 0; i < nfila; i++)
{
for (int j = 0; j < ncolumna; j++)
{
if (i == j)
{
cout << matriz[i][j];
sdiagonalP += matriz[i][j];
}
else
{
cout << "\t";
}
}
cout << "\n";
}
cout << "la suma de la diagonal princiapal es: " << sdiagonalP << endl;
}
void diagonalSecundaria(int nfila, int ncolumna,int &sdiagonalS, int matriz[100][100]) {
cout << "Diagonal secundaria: " << endl;
for (int i = 0; i < nfila; i++)
{
for (int j = 0; j < ncolumna; j++)
{
if ((i + j) == ncolumna - 1)
{
cout << matriz[i][j];
sdiagonalS += matriz[i][j];
}
else
{
cout << "\t";
}
}
cout << "\n";
}
cout << "la suma de la diagonal secundaria es: " << sdiagonalS << endl;
}
void mayorMenorDiagonal(int sdiagonalP, int sdiagonalS ){
if (sdiagonalP > sdiagonalS)
{
cout << "La digonal principal es mayor" << endl;
cout << "La digonal secundaria es menor" << endl;
}
else if (sdiagonalP < sdiagonalS)
{
cout << "La digonal secundaria es mayor" << endl;
cout << "La digonal principal es menor" << endl;
}
else
{
cout << "La digonal secundaria y principal son iguales" << endl;
}
}
void diagonalPrincipalSecundaria (int nfila, int ncolumna, int matriz[100][100]){
cout << "Diagonal principal y secundaria" << endl;
for (int i = 0; i < nfila; i++)
{
for (int j = 0; j < ncolumna; j++)
{
if ((i == j) && (i + j == ncolumna - 1))
{
cout << matriz[i][j] ;
}
else if (i == j)
{
cout << matriz[i][j] << "\t";
}
else if ((i + j) == ncolumna - 1)
{
cout << matriz[i][j] << "\t";
}
else
{
cout << "\t";
}
}
cout << "\n";
}
}
void funciones(){
srand(time(NULL));
int matriz[100][100];
int nfila=0;
int ncolumna=0;
int sdiagonalP = 0;
int sdiagonalS = 0;
cout << "llenar la matriz: " << endl;
ingresoDimensiones(nfila, ncolumna);
llenarMatriz(nfila, ncolumna, matriz);
diagonalPrincipal(nfila, ncolumna,sdiagonalP, matriz);
diagonalSecundaria(nfila,ncolumna,sdiagonalS,matriz);
mayorMenorDiagonal(sdiagonalP,sdiagonalS);
diagonalPrincipalSecundaria(nfila,ncolumna,matriz);
}

int main()
{
funciones();
return 0;
}