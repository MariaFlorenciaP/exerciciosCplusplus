/*Fa�a um programa para ler uma matriz com dimens�o quadrada N, onde N deve ser lido no
in�cio do programa.
Ap�s a leitura, apresente a mesma matriz de forma transposta.
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
	for (l=0;l<N;l++)  // sa�da 
	{
		for (c=0;c<N;c++)
		{
			cout<<matriz[l][c]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Matriz Transposta: "<<endl;
	for (l=0;l<N;l++)  // sa�da 
	{
		for (c=0;c<N;c++)
		{
			cout<<matriz[c][l]<<"\t";
		}
		cout<<endl;
	}
}
