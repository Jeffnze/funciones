#include <iostream>

using namespace std;
//Jeff Zapana Enriquez
bool caracter(char car){
    int n = static_cast<int>(car);
    if (n>47 && n<58)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cout << "Escribe un numero: ";
    cin >> n;
    if(caracter(n))
        cout << "Es un numero";
    else
        cout << "No es un numero";
    return 0;
}
