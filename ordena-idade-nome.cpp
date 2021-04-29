/* Exercício 3 da Lista 7
Faça um programa para ler um vetor com N nomes e idades, onde N deve ser lido no início 
do programa.
Apresente os nomes e respectivas idades em ordem descendente pela idade. */

#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"Portuguese");	
	int N,i,j;
	cout<<"Tamanho do vetor: "; cin>>N;
	string auxnome, nome[N];
	int auxidade, idade[N];	
	// entrada
	for (i=0;i<N;i++)
	{
		cout<<"Digite o "<<i+1<<"o nome: "; cin>>nome[i];
		cout<<"Qual a idade de "<<nome[i]<<"? "; cin>>idade[i];
	}
	
	// processo de classificação
	for (j=0;j<N-1;j++)
	{
		for (i=0;i<N-(j+1);i++)
		{
			if (idade[i]<idade[i+1])
			{
				auxidade=idade[i];
				idade[i]=idade[i+1];
				idade[i+1]=auxidade;
				auxnome=nome[i];
				nome[i]=nome[i+1];
				nome[i+1]=auxnome;
			}
		}
	}
	// saída
	cout<<endl<<"Resultado: "<<endl;
	for (i=0;i<N;i++)
	{
		cout<<nome[i]<<"\t"<<idade[i]<<endl;
	}
}
