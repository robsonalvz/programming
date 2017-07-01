#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int num,x,y;
	int p1,p2;
	while(true){
		p1=0;
		p2=0;
		cin >> num;
		if (num==0)break;
		for (int i=0;i<num;i++){
			cin >> x >> y;
			if (x>y)p1++;
			else if (y>x)p2++ ;
		}	
		cout<< p1 << " " << p2 << endl;
	}
	
	return 0;
}