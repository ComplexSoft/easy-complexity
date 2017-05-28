#include <graphics.h>
#include <iostream>
using namespace std;
class cub
{
    private: int P[8]={100, 100, 100, 150, 150, 150, 150, 100};
    public: cub();
            void moveleft(int x);
            void moveright(int x);
            void moveup(int x);
            void movedown(int x);
            int verificare();
};
cub::cub()
{
    setcolor(RED);
    drawpoly(4, P);
    setfillstyle(SOLID_FILL, RED);
    fillpoly(4, P);
}
void cub::moveleft(int x)
{
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillpoly(4, P);
    for(int i=0;i<=8;i=i+2)
        P[i]-=x;
    setcolor(RED);
    drawpoly(4, P);
    setfillstyle(SOLID_FILL, RED);
    fillpoly(4, P);

}
void cub::moveright(int x)
{
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillpoly(4, P);

for(int i=0;i<=8;i=i+2)
        P[i]+=x;
        setcolor(RED);
    drawpoly(4, P);
    setfillstyle(SOLID_FILL, RED);
    fillpoly(4, P);
}
void cub::movedown(int x)
{
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillpoly(4, P);
    for(int i=1;i<=8;i+=2)
        P[i]+=x;
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillpoly(4, P);
}
void cub::moveup(int x)
{
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillpoly(4, P);
    for(int i=1;i<=8;i+=2)
        P[i]-=x;
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillpoly(4, P);
}
int main()
{
    initwindow(500, 500);
    cub cub;
    while(5!=4)
    {
        switch(getch())
        {
            case 75: cub.moveleft(10);break;
            case 77: cub.moveright(10); break;
            case 72:cub.moveup(10);break;
            case 80:cub.movedown(10);break;
        }
    }
    getch();
    closegraph();
}
