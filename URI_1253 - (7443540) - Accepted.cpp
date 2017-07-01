#include <iostream>
#include <cstring>
using namespace std;
int retornaPosicao(char letra){
	string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i=0;i<alfabeto.size();i++){
		if (alfabeto[i]==letra){
			return i;
		}
	}
}
int main(){
	string texto;
	int num,x,p,aux,y;
	string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin >> num;
	for (int i=0;i<num;i++){
		cin >> texto;
		cin >> x;
		for (int k=0;k<texto.size();k++){
			y = retornaPosicao(texto[k]);
			p = y-x;;
			if ((y-x)<0){
				aux = x-y;
				p = 26-aux;
			}
			texto[k] = alfabeto[p];
		}
		cout << texto << endl;
	}
	return 0;

}