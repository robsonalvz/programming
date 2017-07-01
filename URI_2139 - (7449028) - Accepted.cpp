#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int mes,dia,a,tdia;
	
	int days_per_month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	//7 meses 31
	//1 28
	//4 30
	//360 
	while(cin>>mes>>dia){
		if (mes==12 && dia==25 ){
			cout<<"E natal!"<<endl;
		}else if(mes==12 && dia==24){
			cout<<"E vespera de natal!"<<endl;
		}else if (mes==12 && dia>25){
			cout<<"Ja passou!"<<endl;
		}else{
			tdia = 25 - dia;
            while (mes != 12) {
                tdia += days_per_month[mes++];
            }
			cout << "Faltam "<<tdia << " dias para o natal!"<<endl;
		}
		
	}
	
	return 0;
}