/* Faça um programa para ler um vetor com N nomes, onde N deve ser lido no início 
do programa.
Apresente o mesmo vetor classificado alfabeticamente. */

#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"Portuguese");	
	int N,i,j;
	cout<<"Tamanho do vetor: "; cin>>N;
	string aux,vetor[N];
	
	// entrada
	for (i=0;i<N;i++)
	{
		cout<<"Digite o "<<i+1<<"o nome: "; cin>>vetor[i];
	}
	
	// processo de classificação
	for (j=0;j<N-1;j++)
	{
		for (i=0;i<N-(j+1);i++)
		{
			if (vetor[i]>vetor[i+1])
			{
				aux=vetor[i];
				vetor[i]=vetor[i+1];
				vetor[i+1]=aux;
			}
		}
	}
	// saída
	cout<<endl<<"Vetor resultado: ";
	for (i=0;i<N;i++)
	{
		cout<<vetor[i]<<" ";
	}
}

