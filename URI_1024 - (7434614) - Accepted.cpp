#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int num,i,k,len;
	char aux;
	string texto;
	cin >> num;
	cin.ignore();
	for (i=0;i<num;i++){
		getline(cin,texto);
		len = texto.size();
		for (k=0;texto[k] != '\0';k++){
			if (texto[k]>=65 && texto[k]<=90 || texto[k]>=97 && texto[k]<=122){
				texto[k]+=3;
			}
		}
		//cout << texto <<endl;
		for (k=0;k<len/2;k++){
			aux = texto[k];
			texto[k]=texto[len-k-1];
			texto[len-1-k]=aux;
			
		}
		for (k=len/2;texto[k] != '\0';k++){
			texto[k]--;
		}
		cout << texto <<endl;
	
	}
	return 0;

}