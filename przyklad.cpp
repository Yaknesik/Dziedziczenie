#include <iostream>
using namespace std;


class Paliwo {
public:
    int Litry(int x) { 
        return x * 100;
        };
};

class Dystans : private Paliwo {
    int Litry(int x, int y) {
        return Paliwo::Litry(x) / y;
    }
    public:
        int Zuzycie(int x, int y) { 
            return Litry(x,y);
        };
};

int main() {
    Paliwo P;
    Dystans D;
    
    cout << "Ilość zużytego paliwa x: " << P.Litry(4) << endl;
    cout << "Zużycie/100KM: " << D.Zuzycie(4, 50) << endl;
    return 0;
}