#include"show_result.h"
#include<iostream>
#include<graphics.h>
using namespace std;

void ShowResult::drawResult()
{
    initgraph(1000,1000);
    setbkcolor(WHITE);
    cleardevice();
    
    cout<<"drawResult"<<endl;
    setlinecolor(BLACK);
    setlinestyle(PS_DOT,4);
    circle(500,500,200);
    circle(500,500,400);

    system("pause");
    closegraph();
}