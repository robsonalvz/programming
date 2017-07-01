#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string texto;
	int aux;
	while(getline(cin,texto)){
		aux=0;
		for (int i=0;i<texto.size();i++){
			if (texto[i]!=' '){
				if (aux==0){
					putchar(toupper(texto[i]));		
					aux=1;	
				}else{
					aux=0;
					putchar(tolower(texto[i]));
				}
			}else{
				cout<<" ";
			}
		}
		cout << endl;
	}
	return 0;
}