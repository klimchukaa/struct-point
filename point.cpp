#include <bits/stdc++.h>

using namespace std;

class point
{
    double x, y;
public:
    // Конструкторы
    point(int xc, int yc);
    point();
    // Методы
    int get_x() { return x; }
    int get_y() { return y; }
};

point::point(int xc, int yc)
{
    x = xc; y = yc;
}

point::point()
{
    x = 0; y = 0;
}

signed main() {
    return 0;
}
