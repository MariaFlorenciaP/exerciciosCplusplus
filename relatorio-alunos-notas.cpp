#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int N;
	
	cout<<" Número de alunos?: "; cin>>N;
	
	float Vn1[N], Vn2[N], Vn3[N], Vmedia[N], soma=0, maiormedia=-1;
	string Vnome[N];
	
	for(int i=0; i<N; i++){
		
		cout<<"Digite o nome do aluno: "; cin>> Vnome[i];
		cout<<"Digite a primeira nota: "; cin>>Vn1[i];
		cout<<"Digite a segunda nota: "; cin>>Vn2[i];
		cout<<"Digite a terceira nota: "; cin>>Vn3[i];
		
		Vmedia[i]=(Vn1[i]+Vn2[i]+Vn3[i])/3;
		
		cout<<"Média: "<<Vmedia[i]<<endl;
		soma = soma+ Vmedia[i];
		
		if(Vmedia[i]>=6){
			cout<<"Aprovado"<<endl;
		}
		else{ cout<<"Reprovado"<<endl;
		}
		
		if(Vmedia[i]>maiormedia){
			maiormedia=Vmedia[i];
		}
	}
	
	cout<<"RELATORIO GERAL"<<endl;
	cout<<"Nome\tNota 1\tNota 2\tNota3\tMédia"<<endl;
	cout<<"----------------------------------"<<endl;
	
	for(int i=0; i<N; i++){
		
		cout<<Vnome[i]<<"\t"<<Vn1[i]<<"\t"<<Vn2[i]<<"\t"<<Vn3[i]<<"\t"<<Vmedia[i]<<endl;
	}
	
	cout<<"---------------------------------------"<<endl;
	cout<<"A média da turma é: "<<soma/N<<endl;	// média da turma
	cout<<"---------------------------------------"<<endl;
	// relatório dos alunos aprovados
	cout<<"ALUNOS APROVADOS:"<<endl;
	cout<<"Nome\tMédia"<<endl;
	cout<<"---------------------------------------"<<endl;
	for (i=0;i<N;i++)
	{
		if (media[i]>=6)
		{
			cout<<nome[i]<<"\t"<<media[i]<<endl;
		}
	}
	cout<<"---------------------------------------"<<endl;
	cout<<"A maior média é: "<<maiormedia<<" e o(s) aluno(s) que a obteve(iveram): "<<endl;
	for (i=0;i<N;i++)
	{
		if (media[i]==maiormedia)
		{
			cout<<nome[i]<<endl;
		}
	}
	
}
