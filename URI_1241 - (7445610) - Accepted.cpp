#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int num,len,len2,cont,j;
	string texto;
	string x;
	cin >> num;
	for (int i=0;i<num;i++){
		j=0;
		cont=0;
		cin >> texto >> x;
		len = x.size();
		len2 = texto.size();
		for (int k=(len2-len);k<len2;k++){
			if (texto[k]==x[j]){
				cont++;
			}
			j++;
		}
		if (cont==len){
			cout << "encaixa" <<endl;
		}else{
			cout<<"nao encaixa"<<endl;
		}
		
	}
	return 0;
}