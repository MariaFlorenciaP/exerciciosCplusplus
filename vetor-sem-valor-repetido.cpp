#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	int i,j,N,achou;
	cout<<"Digite o tamanho do vetor: ";cin>>N;
	int vetor[N];	
	for (i=0;i<N;i++)
	{
		do
		{
			//cout<<"Digite o "<<i+1<<"o valor: ";cin>>vetor[i];
			
			vetor[i]=rand()%20;
			cout<<"["<<i<<"]= "<<vetor[i]<<endl;

			achou=0;
			for (j=0;j<i;j++)
			{
				if (vetor[j]==vetor[i])
				{
					achou=1;
					break;		// quebra a estrutura de repeti��o, no caso o FOR, n�o precisar avaliar as posi��es subsequentes
				}
			}
		} while (achou==1);
	}
	
	for (i=0;i<N;i++)
	{
		cout<<vetor[i]<<"  ";
	}
}
