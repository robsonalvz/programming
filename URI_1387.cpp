#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int x,y,soma;
	while(true){
		cin >> x >> y;
		if (x==0 && y==0){
			break;
		}
		soma = x+y;
		cout<<soma<<endl;
	}
	return 0;
}