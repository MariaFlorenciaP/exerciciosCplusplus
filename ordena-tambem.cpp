#include<iostream>
using namespace std;

/* inverter valores de um vetor*/

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int N, j, i, aux;
	
	cout<<"Digite o número de elementos desejados: ";cin>>N;
	
	int V[N];
	
	/*entrada*/
		
	for(int i=0; i<N; i++){
		
		cout<<"Digite o "<<(i+1)<<"o valor: "<<endl;
		cin>>V[i];
		
	}
	
	cout<<"Vetor: ";
	for(int i=0; i<N; i++){
		
	
		cout<<V[i]<<" ";
		
	}
	/*saida*/
	
		cout<<"Vetor invertido: ";
		
		for(int i=N-1; i>=0; i--){
		
		
	cout<<V[i]<<" ";
}


	
}
