#include <iostream>

using namespace std;
//Jeff Zapana Enriquez
void imprimirdigitos (int n){
    int a,b,c,d,e;
    a=n/10000;
    b=(n-a*10000)/1000;
    c=(n-(a*10000+b*1000))/100;
    d=(n-(a*10000+b*1000+c*100))/10;
    e=n%10;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\t' << e << '\t' << endl;
}
int main()
{
    int n;
    cout << "Escribe un numero de 5 digitos: ";
    cin >> n;
    imprimirdigitos(n);
    return 0;
}
