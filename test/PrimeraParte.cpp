#include <iostream>
#include <cmath>
using namespace std;

// variable constantes globales
const double k = 100;
const double m = 2;
const double DeltaT = 0.01;

double f11(double t, double v, double x){
    return v;
}

double f22(double t, double v,double x){
    return -(k*x)/m;
}

void euler(){
    
    int puntos = 100/DeltaT;
    float x[puntos], v[puntos], t[puntos];
    x[0] = 1.0;
    v[0] = 0.9;
    
    for (int i = 1; i<puntos; i++)
    {
        x[i] = x[i-1]*DeltaT*f11(t[i-1],v[i-1],x[i-1]);
        v[i] = v[i-1]*DeltaT*f22(t[i-1],v[i-1],x[i-1]);
    }
    for (int i = 1; i<puntos; i++){
        cout << x[i] << "|" << v[i] << endl;
    }
}

int main(){
    
    euler();
    cout << "Las soluciones son de tipo seno y coseno al ser un oscilador que sigue la ley de Hooke"<<endl;
    cout <<"Al iterar 100 veces el error es más grande" <<endl;
    return 0;
}




    