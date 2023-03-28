#include <iostream>
using namespace std;

struct OXY {
public:
    int x;
    int y;
};
typedef struct Oxy OXY;

void input(OXY* p) {
    cout << "Nhap hoanh do: ";
    cin >> p->x;
    cout << "Nhap tung do: ";
    cin >> p->y;
}

void output(OXY p) {
    cout << "(" << p.x << ", " << p.y << ")";
}

int main() {
    OXY A;
    input(&A);
    output(A);
    return 0;
}
