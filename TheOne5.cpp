#include "pt4.h"
using namespace std;

void Solve()
{
    Task("TheOne5");
    float x, y;
    bool b;
    pt >> x >> y;
    if ((x >= 0) && (x <= 2) && (y >= -2) && (y <= 2))
    {
        if (x * x + y * y <= 4)
        {
            b = TRUE;
            pt << b;
        }
        else
        {
            b = FALSE;
            pt << b;
        }
    }
    else
    {
        if ((x <= 0) && (x >= -3) && (y >= -2) && (y <= 2))
        {
            if (x * x + y * y <= 13)
            {
                b = TRUE;
                pt << b;
            }
            else
            {
                b = FALSE;
                pt << b;
            }
        }
        else
        {
            b = FALSE;
            pt <<b;
        }
    }
}   
