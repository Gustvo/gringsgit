#include <iostream>

int soma(int a,int b){
    int resultado = a + b;
    return resultado;
}

<<<<<<< HEAD
float soma (float a, float b) {
	return a+b;
}

double divisao( double a, double b){
	return (a/b);
}
=======
double divisao( double a, double b){
	return (a/b);
}

double fatorial(double a){
	if(a>0){
		a=a*fatorial(a-1);
	}	
}
>>>>>>> 51f0daebde72e40fc0bc2e1efa9a1f72769f615c
int main() {
    printf("Ola Mundo!");
    return 0;
}
