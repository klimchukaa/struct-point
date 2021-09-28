#include <bits/stdc++.h>

using namespace std;

class point
{
    double x, y;
public:
    // Constructors
    point(int xc, int yc);
    point();
    // Methods
    int get_x() { return x; }
    int get_y() { return y; }
    // Operators
    point operator+(point);
    point operator-(point);
    point operator*(int);
    int operator*(point);
    int operator^(point);
    // Functions
    int get_length();
    double get_angle(point);
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

int point::get_length() {
    return x * x + y * y;
}

double point::get_angle(point a) {
    return acos(((*this) * a + 0.0) / sqrt((*this).get_length()) / sqrt(a.get_length()));
}

signed main() {
    return 0;
}
