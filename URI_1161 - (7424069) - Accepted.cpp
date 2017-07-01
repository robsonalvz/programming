//Codificado por: @robsonalvz
#include<iostream>
#include <math.h>       /* log */

long long int fatorial(int num){
	if (num==0 || num==1){
		return 1;
	}
	return num*fatorial(num-1);
}
using namespace std;
int main()
{
	long long int num,num2;
	
	while(cin >> num >> num2){
		long long int fato  = fatorial(num)+fatorial(num2);
		cout << fato <<endl;
	}
	return 0;
}