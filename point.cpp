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
    bool operator==(point);
    bool operator!=(point);
    // Functions
    double get_length();
    double get_angle(point);
    // Out
    friend ostream& operator<<(ostream&, const point&);
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

double point::get_length() {
    return sqrt(x * x + y * y + 0.0);
}

double point::get_angle(point a) {
    return acos(((*this) * a + 0.0) / (*this).get_length() / a.get_length());
}

bool point::operator==(point a) {
    return (x == a.x) && (y == a.y);
}

bool point::operator!=(point a) {
    return (x != a.x) || (y != a.y);
}

ostream& operator<<(ostream& out, const point& a)
{
    return out << "x: " << a.x << " y: " << a.y << "\n";
}

signed main() {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    point v1(x1, y1), v2(x2, y2);
    cout << "Length of v1: " << v1.get_length() << "\n";
    cout << "Length of v2: " << v2.get_length() << "\n";
    cout << "Angle beetwen vectors: " << v1.get_angle(v2) << "\n";
    cout << "v1 + v2: " << v1 + v2;
    cout << "v1 - v2: " << v1 - v2;
    cout << "v1 * v2: " << v1 * v2 << "\n";
    cout << "v1 ^ v2: " << (v1 ^ v2) << "\n";
    if (v1 == v2) cout << "v1 is equal v2\n";
    if (v1 != v2) cout << "v1 is not equal v2\n";
    return 0;
}
