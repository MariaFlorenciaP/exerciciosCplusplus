#include<iostream>
using namespace std;

/* achar valor maximo e minimo de um vetor*/

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int N,Min,Max;
	
	cout<<"Digite o número de elementos desejados: ";cin>>N;
	
	int V[N];
	
		
	for(int i=0; i<N; i++){
		
		cout<<"Digite o "<<(i+1)<<"o valor: \n";
		cin>>V[i];
		
			
	}
	
	for(int i=0; i<N; i++){
		
		if (V[i]>Max){
		
		Max=V[i];
	}
		else if(V[i]<Min){
		
		Min=V[i];
	}
			
	}
	
	cout<<"O menor valor digitado foi: "<<Min<<endl;
	cout<<"O maior valor digitado foi: "<<Max<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
