//-------------------------------------------------------
// dato de entrada: n (int)
// Dato de Salida: arreglo (int), aM5 (int), am7 (int)
//-------------------------------------------------------


#include <iostream>
#include <iomanip>
using namespace std;

int  *  dimensionar(int n);
void llenarDatos(int *pMiArreglo, int n );
void imprimir(int *pMiArreglo, int n );
int contarMultiplos( int *pA, int n, int multiplo);

int main()
{ int n;
    cout << "Numero de elementos del arreglo : ";
    cin >> n;
    int *pArreglo =  dimensionar(n);
    llenarDatos(pArreglo, n);
    imprimir(pArreglo, n);
    int m5 = contarMultiplos( pArreglo, n, 5);
    int m7 = contarMultiplos( pArreglo, n, 7);
    cout << "\n\nNumero de datos que son multiplos de 5: " << m5 << "\n";
    cout << "Numero de datos que son multiplos de 7: " << m7 << "\n";
    

    return 0;
}

int contarMultiplos( int *pA, int n, int multiplo)
{
    int c=0;
    for(int i=0; i<n; i++)
        if( pA[i] % multiplo ==0)
            c++;
    return c;
}


int  *  dimensionar(int n)
{
  return ( new int[n]);
}

void llenarDatos(int *pMiArreglo, int n )
{
    for(int i=0; i<n; i++)
        pMiArreglo[i] = rand() % 1000;
}


void imprimir(int *pMiArreglo, int n )
{
    for(int i=0; i<n; i++)
        cout << setw(5) << pMiArreglo[i];
}