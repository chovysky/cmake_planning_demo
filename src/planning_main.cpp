#include<iostream>
#include"process.h"
#include"show_result.h"
using namespace std;

int main()
{
    cout<<"planning start"<<endl;
    Process process;
    process.planProcess();
    cout<<"planning end"<<endl;

    cout<<"show result start"<<endl;
    ShowResult show;
    show.drawResult();
    return 0;
}