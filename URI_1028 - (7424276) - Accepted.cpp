//Codificado por: @robsonalvz
#include<iostream>
#include <math.h>       /* log */



int mdc(int x, int y){
    int aux = 0;
    while(y%x != 0){
                      aux = x;
                      x = y%x;
                      y = aux;
            }
            return x;
}
using namespace std;
int main()
{
	int num,num1,num2,rmdc,aux;
	cin >> num;
	for (int i=0;i<num;i++){
		cin >> num1 >> num2;
		if(num1 > num2){
                aux = num1;
                num1 = num2;
                num2 = aux;
            }
			rmdc = mdc(num1,num2);
		
		cout << rmdc <<endl;
	}
	
	return 0;
}