#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int num,x,maior=0,p=0,a=0;
	cin >> num ;
	for (int i=1;i<=num;i++){
		cin >> x;
		if (p==0){
			if (x>=maior){
				maior=x;
			}else{
				a = i;
				p=1;
			}
		}
	}
	cout<<a<<endl;
	
	
	return 0;
}