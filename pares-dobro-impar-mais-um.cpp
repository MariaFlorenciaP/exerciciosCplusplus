#include<iostream>
using namespace std;

main()
{
	
	int v[10], i;
	
	for(i=0; i<10; i++){
		
		
		cout<<"Digite o valor: "<<endl;
		cin>>v[i];
	}
	
	for(i=0; i<10; i++){
		
		if(v[i]%2==0){
			v[i]=v[i]*3;
			
		}
		else {
			v[i]=v[i]+1;
		}
		
		
	}
	
	for(i=0; i<10; i++){
		cout<<"Vetor: "<<v[i]<<endl;
	}
}
