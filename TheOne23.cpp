#include "pt4.h"
#include <math.h>
using namespace std;

void Solve()
{
    Task("TheOne23");
    int n,k,z;
    pt >> n;
    k = abs(1996 - n) - ((abs(1996 - n) / 12) * 12);
    if (n < 1996)
    {
        switch (k)
        {
        case 0: pt << "��� �����"; break;
        case 1: pt << "��� ������"; break;
        case 2: pt << "��� ������"; break;
        case 3: pt << "��� ������"; break;
        case 4: pt << "��� ��������"; break;
        case 5: pt << "��� ����"; break;
        case 6: pt << "��� ������"; break;
        case 7: pt << "��� ����"; break;
        case 8: pt << "��� �������"; break;
        case 9: pt << "��� �������"; break;
        case 10: pt << "��� �����"; break;
        case 11: pt << "��� ����"; break;
        }
    }
    else
    {
        switch (k)
        {
        case 11: pt << "��� ������"; break;
        case 10: pt << "��� ������"; break;
        case 9: pt << "��� ������"; break;
        case 8: pt << "��� ��������"; break;
        case 7: pt << "��� ����"; break;
        case 6: pt << "��� ������"; break;
        case 5: pt << "��� ����"; break;
        case 4: pt << "��� �������"; break;
        case 3: pt << "��� �������"; break;
        case 2: pt << "��� �����"; break;
        case 1: pt << "��� ����"; break;
        case 0: pt << "��� �����"; break;
        }
    }
    
}
