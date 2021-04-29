#include<iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	cout << "Matriz: ";
	cin >> n;
	
	int matriz[n][n], l, c;
	
	for(int l = 0; l < n; l++){
		for(int c = 0; c < n; c++){
			if(l==c){
				matriz[l][c] = 1;
			}
			else{
				matriz[l][c] = 0;
			}
			cout << matriz[l][c]<<"\t";	
		}
		cout << endl;
	}
}
