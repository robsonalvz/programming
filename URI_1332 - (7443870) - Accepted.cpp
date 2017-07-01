#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string lista[] = {"one","two","three"};
	string palavra;
	int num;
	cin >> num;
	for (int i=0;i<num;i++){
		cin >> palavra;
		if (palavra.size()==5){
			cout<< 3<<endl;
		}else if (palavra[0]=='o' && palavra[2]=='e' || palavra[1]=='n' && palavra[2]=='e' || palavra[0]=='o' && palavra[1]=='n'){
			cout << 1 <<endl;
		}else{
			cout<< 2 <<endl;
		}
	}
	return 0;

}