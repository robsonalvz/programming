//Codificado por: @robsonalvz
#include<iostream>
#include<string>
#include <math.h>       /* log */
#include <stdio.h>


using namespace std;
int main()
{
	int num,b,c,size;
	
	string a;
	cin >> num;
	cin.ignore();
	for (int i=0;i<num;i++){
		c=0;
		b=0;
		getline(cin,a);
		
		size =a.size();
		for (int k=0;k<size;k++){
			if (a[k]=='<'){
				b++;
			}
			if(a[k]=='>' && b>0){
				c++;
				b--;
			}
		}
		
		cout<< c <<endl;
		
		
	}
	return 0;

	
}