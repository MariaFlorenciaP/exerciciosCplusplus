#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

main()
{
	setlocale(LC_ALL,"Portuguese");
	srand (time(NULL));		// inicializa a randomiza��o
	
	int a, b, R;
	
	//cout<<"1o valor: "; cin>>a;
	//cout<<"2o valor: "; cin>>b;
	a=rand() % 100 + 1;		// gera valor rand�mico de 1 a 100
	b=rand() % 31 + 20;		// gera valor rand�mico de 20 a 50
	R=a+b;
	cout<<"A soma de "<<a<<" + "<<b<<" � "<<R<<endl;	
	
}
