/*Faça um programa para ler uma matriz com dimensão quadrada N, onde N deve ser lido no
início do programa.
Após a leitura, apresente a mesma matriz de forma transposta.
Obs.: na matriz transposta deve-se inverter a linha pela coluna.*/
#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"Portuguese");	
	int N,c,l;
	cout<<"Tamanho da matriz: "; cin>>N;
	int matriz[N][N];
	
	for (l=0;l<N;l++)  // entrada 
	{
		for (c=0;c<N;c++)
		{
			cout<<"["<<l<<"]["<<c<<"] : "; cin>>matriz[l][c];
		}
	}
	
	cout<<"Matriz obtida: "<<endl;
	for (l=0;l<N;l++)  // saída 
	{
		for (c=0;c<N;c++)
		{
			cout<<matriz[l][c]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Matriz Transposta: "<<endl;
	for (l=0;l<N;l++)  // saída 
	{
		for (c=0;c<N;c++)
		{
			cout<<matriz[c][l]<<"\t";
		}
		cout<<endl;
	}
}
