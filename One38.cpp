#include "pt4.h"
using namespace std;

void Solve()
{
    Task("One38");
    int x, k;
    k = 0;
    x = 0;
    pt >> x;
    while (x > 0)
    {
        if (x % 10 == 0)
        {
            k += 1;
        }
        x /= 10;
    }
    pt << k;
}
