#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int i,j,N,aux;
	
	cout<<"Digite o tamanho do vetor: "; cin>>N;
	int X[N];
	//entrada (aleatória)
	
	for (i=0;i<N;i++)
	{
		X[i]=rand()%20;
		cout<<X[i]<<" ";
	}
	// processo de classificação
	for (j=0;j<N-1;j++)
	{
		for (i=0;i<N-(j+1);i++)
		{
			if (X[i]>X[i+1])
			{
				aux=X[i];
				X[i]=X[i+1];
				X[i+1]=aux;
			}
		}
	}
	// saída
	cout<<endl<<"Vetor resultado: ";
	for (i=0;i<N;i++)
	{
		cout<<X[i]<<" ";
	}

}
