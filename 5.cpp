#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x1, x2, x3, y1, y2, y3, a, b, c, p, s, k1, k2, k3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    s = 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
    cout << s;

}
//(-1,0),(3,0),(1,4) = 8
//(-1,-3),(3,4),(5,-5) = 25
//(0,1),(1,0),(0,1) = 0 ,те не существует 