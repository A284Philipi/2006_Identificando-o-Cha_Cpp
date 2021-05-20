#include <iostream>

using namespace std;

int main()
{
    int cha, a, acertou = 0, cont = 0;
    cin >> cha;
    while (cont < 5){
        cin >> a;
        if (a == cha){
            acertou++;
        }
        cont++;
    }
    cout << acertou <<endl;
    return 0;
}
