#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int factorial(int n){
	if(n==0)
		return 1;
	else
		return n*factorial(n-1);
}

int main(){
	int derivada;
	int a = 0;
	int n = 20;
	for(int i = 0; i <= n; i++){
		if(i%2 == 1){
			derivada = (pow(-1,(i-1)/2))*i*cos(a)+(pow(-1,(i+1)/2))*a*sin(a);
			cout << derivada/__gcd(derivada, factorial(i)) << "/" << factorial(i)/__gcd(derivada, factorial(i)) << endl;
		}else{
			derivada = (pow(-1,i/2))*i*sin(a) + (pow(-1,i/2))*a*cos(a);
			cout << derivada/__gcd(derivada, factorial(i)) << "/" << factorial(i)/__gcd(derivada, factorial(i)) << endl;
		}	
	}	
	return 0;
}
