/*3.      Pe o masă de biliard sunt bile albe, roşii şi verzi. Din fiecare culoare sunt bile de două dimensiuni: mari şi mici. Să se afişeze câte bile sunt în total pe masa de biliard. Un jucător vrea să-i spuneţi care bile sunt mai multe , cele mici sau cele mari, afişând numărul lor. De ce culoare sunt bilele cele mai numeroase? Precizaţi numărul lor.
Exemplu: Date de intrare  Nr. bile albe mici: 2 Nr. bile albe mari: 3 Nr. bile rosii mici: 1 Nr. bile rosii mari: 4 Nr. bile verzi mici: 3 Nr. bile verzi mari: 4  Date de ieşire Totalul bilelor: 17   Mari: 11 bile    Verzi: 7 bile  
*/
#include <iostream>
using namespace std;

int aM, rM, vM, am, rm, vm, t, tm, tM;
int main()
{

    cin >> am >> aM >> rm >> rM >> vm >> vM;
    t = aM + rM + vM + am + rm + vm;
    cout << "Totalul bilelor " << t;
    cout << endl;
    tm = am + rm + tm;
    tM = aM + rM + vM;
    if (tm >= tM)
        cout << "mici " << tm;
    else
        cout << "mari " << tM;
    cout << endl;
    if (aM + am > rm + rM && aM + am > vm + vM)
        cout << "albe " << am + aM;
    if (rM + rm > am + aM && rM + rm > vm + vM)
        cout << "rosii " << rm + rM;
    if (vM + vm > rm + rM && vM + vm > am + aM)
        cout << "verzi " << vm + vM;
}