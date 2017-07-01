#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int x,y,c;
	cin>>x;
	for (int i=0;i<x;i++){
		cin>>y;
		for (int k=0;k<y;k++){
			cin>>c;
			if (c==1) cout<<"Rolien"<<endl;
			else if (c==2) cout<<"Naej"<<endl;
			else if (c==3) cout<<"Elehcim"<<endl;
			else if (c==4) cout<<"Odranoel"<<endl;
		}
	}
	return 0;
}