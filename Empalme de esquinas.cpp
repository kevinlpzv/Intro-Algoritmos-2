#include <iostream>

using namespace std;

int main()
{
    int xa1,ya1,xb2,yb2,longi;
    cout<<"Dame la coordenada en x de tu primer cuadrado: ";
    cin>>xa1;
    cout<<"Dame la coordenada en y de tu primer cuadrado: ";
    cin>>ya1;
    cout<<"Dame la coordenada en x de tu segundo cuadrado: ";
    cin>>xb2;
    cout<<"Dame la coordenada en y de tu segundo cuadrado: ";
    cin>>yb2;
    cout<<"Dame la longitud que quieres en tus cuadrados: ";
    cin>>longi;
    if(xb2==(xa1+longi) && (ya1==yb2) && (yb2-longi==ya1-longi)){
        cout<<"Las esquinas de los cuadros estan una sobre otra";
    }else if(xb2==xa1 && (ya1==yb2) && (yb2-longi==ya1-longi)){
         cout<<"Las esquinas de los cuadros estan una sobre otra";
            }else cout<<"No existe problema de esquinas encimadas";
    return 0;
}
