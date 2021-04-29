#include<iostream>
using namespace std;

 main()
 
 {
 	setlocale(LC_ALL,"Portuguese");
 	
    int N,contM=0,contF=0;
    char sexo;
    string nome;
    float altF,Malt,malt;
    
	
			cout<<"Digite o numero de pessoas: "<<endl;
    		cin>>N;

    	for(int cont=1;cont<=N;cont++)
		{
        cout<<"Digite o nome: "<<endl;
        cin>>nome;
        cout<<"Digite a altura: "<<endl;
        cin>>altF;
        	
			do{
            cout<<"Digite o sexo: "<<endl;
            cin>>sexo;
            
            if(sexo!='M' and sexo!='m' and sexo!='F' and sexo!='f')
			{
                cout<<"Sexo invalido. Digite M ou F."<<endl;
            }

        }
        if(altF>0.0){
            Malt=altF;
        }
        if(altF<99.0){
            malt=altF;
        }
    	}//fim for
    	
    cout<<"Maior altura do grupo "<<Malt<<endl;
    cout<<"Menor altura do grupo "<<malt<<endl;
    cout<<"Numero total de homens "<<contM<<endl;
    if(altF==0){
        cout<<"Nenhuma mulher foi cadastrada.";
    			}
    else{
        cout<<"Media de altura das mulheres: "<<(altF+(contM-N))/contM-N; 
    }}
