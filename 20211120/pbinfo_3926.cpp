//Spunem că un număr natural este alternant dacă cifrele pare alternează cu cele impare. De exemplu, numere alternante sunt 236, 6, 12345678

#include <iostream>
using namespace std;

int n, a, b;
int main()
{

    cin >> n;
    a = n % 10;
    n /= 10;
    while (n > 0)
    {
        b = n % 10;
        if ((a % 2 == 1 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 1)){
            a = b;
            n/=10;
        }

        else
        {
            cout << " nu";
            return 0;
        }
        
    }
    cout << "da";
}