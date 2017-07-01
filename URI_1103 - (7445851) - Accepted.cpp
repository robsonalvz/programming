#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int a=1,b=1,c=1,d=1,minutos;
	while(true){
		cin >> a >> b >> c >> d;
		if (a==0 && b==0 && c==0 && d==0)break;
		if (a<c){
			minutos = ((c-a)*60)-b+d;
		}else if (a==c){
			if (b>d){
				minutos = (60*24)-(b-d);
			}else{
				minutos = d-b;
			}
		}else{
			minutos = (24-a)*60-b;
			minutos+= (c*60)+d;

		}
		cout << minutos << endl;
	}
	return 0;
}