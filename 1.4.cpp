#include <iostream>
using namespace std;

struct OXY {
public:
    int x;
    int y;
    int z;
};
typedef struct Oxy ;

void input(OXY* p) {
    cout << "Nhap hoanh do: ";
    cin >> p->x;
    cout << "Nhap tung do: ";
    cin >> p->y;
    cout << "Nhap cao do:";
    cin >> p->z;
}

void output(OXY p) {
    cout << "(" << p.x << ", " << p.y << ", " << p.z <<")";
}

int main() {
    OXY A;
    input(&A);
    output(A);
    return 0;
}