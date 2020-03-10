#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    ofstream pontos;
    pontos.open("pontosAproximados.pts",ofstream::trunc);
        
    float x = 0;
    float y = 1;
    float h = 0.005;
    for(int i = 0; i < 1000; i++){
        y = y - h*(cos(x)-x*sin(x));
        x -= h;
        pontos << x << " " << y << endl;	
    }
    y = 1;
    x = 0;
    for(int i = 0; i < 1000; i++){//achar pontos postivos
    	pontos << x << " " << y << endl;
	y = h*(cos(x)-x*sin(x)) + y;
	x += h;
    }
    
    pontos.close();
    
    return 0;	
}
