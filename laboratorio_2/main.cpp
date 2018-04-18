#include <iostream>

using namespace std;
int esprimo(int );
int intercambio(int, int);
int bits(int, int);

int main(){

    esprimo(7);
    bits(9,4);
    intercambio(3,5);
    return 0;
}
int esprimo(int n){
    int d=1, di=0;
    do{
    if (n%d==0){
            di++;
    }
    d++;
    }while(d<=n);
    if(di==2){
        cout<<" es primo"<<endl;
    }else{
        cout <<"no es primo"<<endl;
    }
    return 0;
}
int intercambio(int e, int r){
    int c;
    e=e+r;
    r=e-r;
    e=e-r;
    cout<<e<<","<<r<<endl;
}

int bits(int a, int b){
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<","<<b<<endl;
}
