#include <iostream>
using namespace std;
void funcion_inversa(int A[4][4]);
int main() {
	int n=4;
	int inversa [4][4];
	int inversaa;
	cout<<"ingrese los numeros de una matriz 4x4:";
	for(int i=0; i<n;i++){
		for(int j=0;j<n;j++){
		cin>>inversa[i][j];
	   }
	}
    cout<<"Matriz inversa"<<endl;
	cout<<endl;
	cout<<endl;
	funcion_inversa(inversa);
	
	return 0;
}

void funcion_inversa(int A[4][4]){
	for(int i =4-1;i>-1;i--){
		for(int j=4-1;j>-1;j--)
		cout<<A[i][j]<<"\t";
		cout<<endl;
	}	
}
