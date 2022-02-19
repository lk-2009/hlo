#include <iostream>
using namespace std;

int w[10000], v[1000], n, c, x, mx, cc, cu, smax, dmax,q;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v[x]++;
    }

    for (int i = 1; i <= 10; i++)
    {
        if (v[i] > 0)
            c++;
    }
    cout << "Numarul de culori utilizate: " << c;
    for (int i = 1; i <= 10; i++)
    {
        if (v[i] > mx)
            mx = v[i];
    }
    cout << endl;
    cout << "Cele mai utilizate culori: ";
    for (int i = 1; i <= 10; i++)
    {
        if (mx == v[i])
            cout << i << " ";
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                w[k] = 0;
                cc = 0;
            }

            for (int k = i; k < j; k++)
            {
                w[k]++;
            }

            for (int t = 0; t < 10; t++)
            {

                if (w[t] > 0)
                {
                    cc++;
                }
                if (w[t] == 1)
                {
                    cu++;
                    q=t;
                }
            }
            if (cc == 2 && cu == 1)
            {
                if (j - i + 1 > dmax - smax + 1)
                {
                    dmax = j;
                    smax = i;
                    for (int z = i; z < j-2; z++)
                    {
                           if (w[z]==q) cout<<"Putem scoate un cub de pe una din pozitiile: "<<z;
                           
                           
                    }
                    
                }
            }
        }
    }

}