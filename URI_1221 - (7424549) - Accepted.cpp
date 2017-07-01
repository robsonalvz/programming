//Codificado por: @robsonalvz
#include<iostream>
#include <math.h>       /* log */

using namespace std;
int main()
{
	int x,y=1,d,num;
	cin >> num;
	for (int k=0;k<num;k++){
		cin >> x;
		d = sqrt(x);
		
		for (int i=2;i<=d;i++){
			if (x%i==0){
				y=0;
				break;
			}
		}
		if (y==1){
			cout<<"Prime"<<endl;
		}else{
			cout << "Not Prime"<<endl;
		}
		y=1;
	}
	return 0;
}