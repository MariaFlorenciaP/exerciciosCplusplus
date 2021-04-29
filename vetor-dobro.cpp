#include<iostream>
using namespace std;

main()
{
	int v[10], v2[10];
	
	for(int i=0; i<10; i++){
		
		
		cout<<"Digite um número: "<<endl;
		cin>>v[i];
	}
	
	for(int i=0; i<10; i++){
		
		v2[i]=v[i]*2;
		cout<<"O vetor e "<<v[i]<<" e o seu dobro e "<<v2[i]<<endl;
	}
}
