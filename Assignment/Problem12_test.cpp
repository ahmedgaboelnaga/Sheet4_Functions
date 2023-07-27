#include <iostream>
#include <cmath> // Added to use sqrt()

using namespace std;

double distance(double x1, double x2, double y1, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx*dx + dy*dy);
}

void midpoint(double x1, double x2, double y1, double y2, double &xmid, double &ymid) {
    xmid = (x1 + x2) / 2.0;
    ymid = (y1 + y2) / 2.0;
}

void slope(double x1, double x2, double y1, double y2, bool &vertical, double &s) {
    if (x1 == x2) {
        vertical = true;
        } else {
        s = (y2 - y1) / (x2 - x1);
    }
}

int main() {
    double x1, x2, y1, y2;
    double d, xmid, ymid, s;
    bool vertical;

    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;

    d = distance(x1, x2, y1, y2);
    midpoint(x1, x2, y1, y2, xmid, ymid);
    slope(x1, x2, y1, y2, vertical, s);

    cout << "The distance between the two points is " << d << endl;
    cout << "The midpoint of the line segment is (" << xmid << ", " << ymid << ")" << endl;
    if (vertical) {
    cout << "The line is vertical." << endl;
    } else {
    cout << "The slope of the line is " << s << endl;
    }

    return 0;
}