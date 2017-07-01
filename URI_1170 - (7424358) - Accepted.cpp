//Codificado por: @robsonalvz
#include<iostream>
#include <math.h>       /* log */

using namespace std;
int main()
{
	double num1;
	int num,aux=0;
	cin >> num;
	for (int i=0;i<num;i++){
		cin >> num1 ;
		while (num1>1){
			num1 /=2;
			aux++;
		}
		cout << aux <<" dias" <<endl;
		aux=0;
	}
	
	return 0;
}