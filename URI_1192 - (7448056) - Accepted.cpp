#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int num;
	int num1,num2,resultado;
	cin >> num;
	string x;
	for (int i=0;i<num;i++){
		cin>>x;
		num1 = x[0]-'0';
		num2 = x[2]-'0';
		if (x[0]==x[2]){
			resultado = num1*num2;
		}else if(x[1]>=65 && x[1]<=90){
			resultado = num2-num1;
		}else{
			resultado = num1+num2;
		}
		cout<<resultado<<endl;
	}
	return 0;
}