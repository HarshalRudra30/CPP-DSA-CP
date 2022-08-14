#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend Point computes(Point o1, Point o2);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "\nThe point is (" << x << ", " << y << ")";
    }
};

Point computes(Point o1, Point o2)
{
    int x = (o2.x - o1.x), y = (o2.y - o1.y);
    int sum = pow(x, 2) + pow(y, 2);
    float result = sqrt(sum);
    cout << "\nThe distance between two points " << result;
}

int main()
{
    Point p(1, 0), q(70, 0);
    p.displayPoint();
    q.displayPoint();
    computes(p, q);
    return 0;
}
