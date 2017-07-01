#include <iostream>
#include <math.h>
using namespace std;
int main(){
   int num,x,soma;
   while (true){
        soma=0;
        cin >> num;
        if (num==0)break;
        for (int i=0;i<=num;i++){
            x = num-i;
            soma+=pow(x,2);
        }
        cout<<soma<<endl;
   }
  
}