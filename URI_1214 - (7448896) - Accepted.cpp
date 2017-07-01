#include <iostream>

using namespace std;
int main(){
    int num,a,cont=0;
    double x,soma,media;
    cin>>num;
    for (int i=0;i<num;i++){
        cin>>a;
        soma=0;
        cont=0;
        media=0;
        int notas[a];
        for (int k=0;k<a;k++){
            cin >> x;
            notas[k]=x;
            soma+=x;
        }
        media=soma/a;
        for (int j=0;j<a;j++){
            if (notas[j]>media){
                cont++;
            }
        }
        cout.precision(3);
        media = (100.00*cont)/a;
        cout << fixed << media <<'%'<<endl;
    }
}