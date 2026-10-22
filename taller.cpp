#include <iostream>
using namespace std;
int main (){

    srand(time(NULL));
    int medalla[50], total, oros=0, platas=0, bronces=0;
    for (int i = 0; i < 50; i++)
    {
        medalla[i] = rand() % 4;
        cout << medalla[i] << " ";
        switch (medalla[i])
        {
        case 1: oros ++ ; break;
        case 2: platas ++ ; break;
        case 3: bronces ++ ; break;
        default: break;
        }

    }
    total = oros + platas + bronces;
    cout << endl << "pruevas sin medallas: " << 50-total << endl;
    cout << endl << "pruevas con oro: " << oros << endl;
    cout << endl << "pruevas con plata: " << platas << endl;
    cout << endl << "pruevas con bronce: " << bronces << endl;

    return 0;
}