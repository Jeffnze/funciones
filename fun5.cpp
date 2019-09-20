#include <iostream>

using namespace std;
//Jeff Zapana Enriquez
bool caracter(char n){
    int a = static_cast<int>(n);
    if (a>=47 && a<=58){
        cout << n << " Es un numero"<<endl;
        return true;
    }
    else{
        cout << n << " No es un numero"<<endl;
        return false;
    }
}
int main()
{
    char n;
    cout << "Escribe un caracter: ";
    cin >> n;
    caracter (n);
    return 0;
}
