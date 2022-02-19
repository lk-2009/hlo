#include <iostream>
using namespace std;

int v[1000], N, x, c, ix, mn, mx;
int main()
{

    cin >> N;
    mn = 100000;
    for (int i = 0; i < N; i++)
    {
        ix = 0;
        bool ok1 = true;
        bool ok2 = true;

        cin >> v[i];
        x = v[i];
        while (x > 0)
        {
            ix = ix * 10 + x % 10;
            x /= 10;
        }
        x = v[i];

        while (x > 10)
        {
            if (x % 10 <= x / 10 % 10)
            {
                ok1 = false;
                break;
            }

            x /= 10;
        }
        while (ix > 10)
        {
            if (ix % 10 <= ix / 10 % 10)
            {
                ok2 = false;
                break;
            }

            ix /= 10;
        }
        if (ok1 || ok2)
        {
            if (mn > v[i])
                mn = v[i];
            if (mx < v[i])
                mx = v[i];
            c++;
        }
    }
    if (c == 0)
    {
        cout << "NU EXISTA";
        return 0;
    }
    cout << "Numar valori-panta: " << c << endl;
    cout << "Cea mai mare valoare-panta: " << mx << " pe pozitiile: ";
    for (int i = 0; i < N; i++)
    {
        if (v[i] == mx)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
    cout<<"Cea mai mica valoare-panta: " << mn << " pe pozitiile: ";
    for (int i = 0; i < N; i++)
    {
        if (v[i] == mn)
        {
            cout << i + 1 << " ";
        }
    }
}
