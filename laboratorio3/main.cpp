#include <iostream>

using namespace std;
int numeroperfecto(int);
int esprimo(int);
int numerosprimos(int);
int intercambio(int, int);
int bits(int, int);


int numeroperfecto(int)
{
    int n=1,x=1,s=0;
    while(n<=10000)
    {
        while(x<=(n/2))
        {
            if(n%x==0)
                s=s+x;
                x=x+1;
        }
        if(n==s)
            cout<<n<<", Es perfecto"<<endl;
        n=n+1; x=1;s=0;
    }
     return 0;
}
int main(){

    esprimo(7);
    numerosprimos(5);
    bits(9,4);
    intercambio(3,5);
    numeroperfecto(9);
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
int numerosprimos(int n){
    int i=0;
    int x=2;
    while(i<n){
        if(esprimo(x)){
            cout<<x<<",";
            i++;
        }
        x++;
    }
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

