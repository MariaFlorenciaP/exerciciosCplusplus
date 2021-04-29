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
	cout<<"Vetor: "<<V[i]<<endl;
	
	j=N-1;
	i=0;
	while(i<j){
		
		aux=V[i];
		V[i]=V[j];
		V[j]=aux;
		j--;
		i++	;	
		
	}
	
	cout<<"Vetor invertido: "<<V[i]<<endl;
	
}
	
	
