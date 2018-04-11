#include <iostream>

using namespace std;

//Declaracion del metodo que me crea matrices CON NUMEROS INGRESADOS CPOR PARAMETRO
double get_matriz(int N, int M);

//Declaracion de la funcion

double** matriz_product(double** m1; double** m2);

//Defino la funcion que crea la matriz con numeros ingresados por parametro 
double get_matriz(int N, int M,){
	
	// Creo vectores 
	double *a = new double[N];
	
	//Creo matriz de ceros 
	double** mat = new double*[N];	
	//Creo cada vector de la matriz(conjunto de vectores)
	
	for(int i =0; i<N; i++){
		mat[i] = new double [N];
	}	
	
	//Recorre matriz en i
	for(int i = 0; i<N; i++){
		//Recorre matriz en j
		for(int j = 0; j<5; j++){
			cout<<"Ingrese numero de la matriz"<<endl;
			double var;
			cin>>var;
			mat[i][j] = var;		
		}
	}
		
}

// Defino la funcion que multiplica las matrices anteriormente creadas 
double** matriz_product(double** m1; double** m2){


}

int main() {
	// Ingreso del usuario la dimension vertical de la matriz
	cout<<"Ingrese dimension vertical de la matriz"<<endl;
	double dv;
	cin>>dv;

	// Ingreso del usuario la dimension horizontal de la matriz
	cout<<"Ingrese dimension horizontal de la matriz"<<endl;
	double dh;
	cin>>dh;
	
	//Aplica las dimensiones para crear matriz de ceros
	get_matriz(dh,dv);
	
	}
	
	
	

	return 0;
}
