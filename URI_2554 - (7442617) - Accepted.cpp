#include <iostream>

using namespace std;

int main(){
	int num1,num2,x,cont=0,cont2=0,aux=0;
	string data,dataPizza;
	while(cin>>num1>>num2){
		for (int i=0;i<num2;i++){
			cin >> data;
			for (int k=0;k<num1;k++){
				cin >> x;
				if (x==1){
					cont++;
				}	
			}
			if (cont==num1){
				if (aux==0){
					dataPizza = data;
					aux=1;
				}
			}else{
				cont2++;
			}
			cont=0;
		}
		if (cont2==num2) cout << "Pizza antes de FdI" << endl;	
		else cout << dataPizza << endl;
		cont2=0;
		aux=0;
	}
	return 0;

}