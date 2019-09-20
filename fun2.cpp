#include <iostream>

using namespace std;
//Jeff Zapana Enriquez
int contardigito(int n){
    int c = 0;
    while(n!=0){
        n=n/10;
        c=c+1;
    }
    cout << c;
    return 0;
}
int main()
{
    int n;
    cout << "Escribe un numero: ";
    cin >> n;
    contardigito(n);
    return 0;
}
