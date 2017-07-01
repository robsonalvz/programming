#include <iostream>
#include <cstring>
using namespace std;
int main(){

	int num,x,m,j;
	while (true){
		m=0;
		j=0;
		cin >> num;
		if (num==0)break;
		for (int i=0;i<num;i++){
			cin >> x;
			if (x==0){
				m++;
			}else{
				j++;
			}
		}
		cout << "Mary won "<<m<<" times and John won " << j <<" times" <<endl;
	}
	
	return 0;
}