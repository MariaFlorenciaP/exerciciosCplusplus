/* Ler uma matriz A (3 x 3) de números inteiros. 
Gerar um vetor B com 3 elementos que contenha a média de cada linha da matriz A 
na respectiva posição do vetor B. Apresentar o vetor B.
Exemplo:
A				B
2	5	2		3
1	0	4		2.5
3	7	2		4
*/
#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int l,c, A[3][3], soma;
	float B[3];
	// entrada da matriz A e a geração do vetor B
	for (l=0;l<3;l++)
	{
		soma=0;
		for (c=0;c<3;c++)
		{
			cout<<"["<<l<<"]["<<c<<"] : "; cin>>A[l][c]; // entrada da matriz A
			soma=soma+A[l][c];	// acumula a linha
		}
		B[l]=soma/3; // calcula a media da linha a atribui ao vetor B
	}
	
	//saída
	cout<<"Matriz A		     Vetor B"<<endl;
	for (l=0;l<3;l++)
	{
		for (c=0;c<3;c++)
		{
			cout<<A[l][c]<<"\t";
		}
		cout<<"=\t"<<B[l]<<endl;
	}
	
}
