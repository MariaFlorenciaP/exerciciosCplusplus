/*Um time de basquete possui 12 jogadores. Deseja-se um programa que, dado o nome e a altura dos jogadores, determine:
- o nome e a altura do jogador mais alto;
- a média de altura do time;
- a quantidade de jogadores com altura superior a média, listando o nome e a altura de cada um.*/

#include<iostream>
using namespace std;

main()

{
	setlocale(LC_ALL,"Portuguese");
	string nome[12];
	float altura[12], soma, mediatime, maioraltura=0,jogadoresaltos=0;
	
	for(int i=0; i<12; i++){
		
		cout<<"Digite o nome do jogador: "; cin>>nome[i];
		cout<<"Digite a altura: "; cin>>altura[i];
	
		soma = soma+ altura[i];
		mediatime = soma/12;
		
		if(altura[i]>maioraltura)
		maioraltura=altura[i];
			
	}
	
	cout<<"A media de altura do time e: "<<mediatime<<endl;
		
	for(int i=0;i<12;i++){
		if(maioraltura==altura[i])
		cout<<"O jogador mais alto e: "<<nome[i]<<" e sua altura e: "<<altura[i]<<endl;
		
		if(altura[i]>mediatime)	
		jogadoresaltos=jogadoresaltos+1;		
		
	}
	cout<<"Los jugadores mas altos que a media sao "<<jogadoresaltos<<" e eles sao: "<<endl;
	cout<<"Nome\tAltura"<<endl;
	cout<<"--------------"<<endl;
	
	for(int i=0;i<12;i++){
		
		if(altura[i]>mediatime)
		cout<<nome[i]<<"\t"<<altura[i]<<endl;
	}
	
}
