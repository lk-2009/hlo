#include <iostream>
using namespace std;

int n, p, q, incolor, rosu, albastru, violet;
int main()
{

    cin >> n >> p >> q;
    for (int i = 1; i <= n; i++)
    {
        if (i % p == 0 && i % q != 0)
            rosu++;
        if (i % p != 0 && i % q != 0)
            incolor++;
        if (i % p == 0 && i % q == 0)
            violet++;
        if (i % p != 0 && i % q == 0)
            albastru++;
    }
    cout << " a)" << incolor << endl;
    cout << " b)" << rosu << endl;
    cout << " c)" << albastru << endl;
    cout << " d)" << violet << endl;
}