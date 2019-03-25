#include <iostream>

int soma(int a,int b){
    int resultado = a + b;
    return resultado;
}

double divisao( double a, double b){
	return (a/b);
}

double fatorial(double a){
	if(a>0){
		a=a*fatorial(a-1);
	}	
}
int main() {
    printf("Ola Mundo!");
    return 0;
}
