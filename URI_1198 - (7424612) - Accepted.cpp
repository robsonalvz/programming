//Codificado por: @robsonalvz
#include<iostream>
#include <math.h>       /* log */

using namespace std;
int main()
{
	long long x,y,resul,aux;
	while(cin >> x){
		cin >>y;
		if (y>x){
			aux = x;
			x = y;
			y=aux;
		}
		resul = x-y;
		cout << resul<<endl;
	}
	
}