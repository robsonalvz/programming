#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int cont=0;
	long num;
	while(cin >> num){
		
		while(num/2!=0){
			num = num/2;
			cont++;
		}
		cout << cont <<endl;
		cont=0;
	}
	return 0;

}