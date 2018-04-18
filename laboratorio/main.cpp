#include <iostream>

using namespace std;
int esprimo(int );
int potencia(int, int);
int main(){

    esprimo(7);
    potencia(2,4);
    return 0;
}
int potencia(int base, int exponente){
    if(exponente==1)
        return base;
    --exponente;
    return base*potencia(base,exponente);
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
        cout<<" es primo";
    }else{
        cout <<"no es primo";
    }
    return 0;
}

