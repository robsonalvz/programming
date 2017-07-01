#include <iostream>
#include <cstring>
using namespace std;
int main(){

	int x,y,z;
	while (cin>>x>>y>>z){
		if (z==1 && x==1 && y==1 || x==0 && y==0 && z==0){
			cout << "*"<<endl;
		}else if (x==1 && y==1 && z==0 || x==0 && y==0 && z==1){
			cout <<"C"<<endl;
		}else if(x==0 && y==1 && z==0 || x==1 && y==0 && z==1){
			cout<<"B"<<endl;
		}else{
			cout<<"A"<<endl;
		}	
	}
	
	return 0;
}