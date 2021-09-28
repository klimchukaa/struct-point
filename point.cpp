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
    // Операторы
    point operator+(point);
    point operator-(point);
    point operator*(int);
    int operator*(point);
    int operator^(point);
};

point::point(int xc, int yc)
{
    x = xc; y = yc;
}

point::point()
{
    x = 0; y = 0;
}

point point::operator+(point a) {
    return {x + a.x, y + a.y};
}

point point::operator-(point a) {
    return {x - a.x, y - a.y};
}

point point::operator*(int a) {
    return {x * a, y * a};
}

int point::operator*(point a) {
    return x * a.x + y * a.y;
}

int point::operator^(point a) {
    return x * a.y - y * a.x;
}

signed main() {
    return 0;
}
