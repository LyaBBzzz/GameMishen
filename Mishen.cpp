#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

int main() {
    using namespace std;

    srand(static_cast<unsigned int>(time(nullptr)));

    int a = 0;

    for (int b = 1; b <= 5; b++) {
        int c, d;
        cout << "vvedite koordinati vistrela " << b << " (c d): ";
        cin >> c >> d;

        int e = rand() % 11 - 5;
        int f = rand() % 11 - 5;
        c += e;
        d += f;

        double g = sqrt(c * c + d * d);

        int h = 0;
        for (int i = 1; i <= 5; i++) {
            if (g >= i - 1 && g < i) {
                h |= (6 - i);
            }
        }

        a += h;

        cout << "za vistrel " << b << " polucheno ballov: " << h << endl;
    }

    cout << "summa ballov: " << a << endl;

    if (a < 10) {
        cout << "lyzer" << endl;
    } else {
        cout << "winner!" << endl;
    }

    return 0;
}