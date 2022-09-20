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
        case 0: pt << "Год крысы"; break;
        case 1: pt << "Год свиньи"; break;
        case 2: pt << "Год собаки"; break;
        case 3: pt << "Год курицы"; break;
        case 4: pt << "Год обезьяны"; break;
        case 5: pt << "Год овцы"; break;
        case 6: pt << "Год лошади"; break;
        case 7: pt << "Год змеи"; break;
        case 8: pt << "Год дракона"; break;
        case 9: pt << "Год кролика"; break;
        case 10: pt << "Год тигра"; break;
        case 11: pt << "Год быка"; break;
        }
    }
    else
    {
        switch (k)
        {
        case 11: pt << "Год свиньи"; break;
        case 10: pt << "Год собаки"; break;
        case 9: pt << "Год курицы"; break;
        case 8: pt << "Год обезьяны"; break;
        case 7: pt << "Год овцы"; break;
        case 6: pt << "Год лошади"; break;
        case 5: pt << "Год змеи"; break;
        case 4: pt << "Год дракона"; break;
        case 3: pt << "Год кролика"; break;
        case 2: pt << "Год тигра"; break;
        case 1: pt << "Год быка"; break;
        case 0: pt << "Год крысы"; break;
        }
    }
    
}
