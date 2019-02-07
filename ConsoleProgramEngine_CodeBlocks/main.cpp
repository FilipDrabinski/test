#include "class/Engine/Engine.h"
#include <conio.h>
int main()
{
    KeyAndAction kaA(0,0);
    InputQueue Queue;
    char key = 0;
    char prevKey = -1;
    while(prevKey != 27){
        key = _getch();
        if((key != 'm')&&(key != 'n')){
            kaA(key,1);
            Queue.AddLast(kaA);
            kaA(key,0);
            Queue.AddLast(kaA);
        }
        else if(key == 'm'){
            kaA('m',2);
            Queue.AddLast(kaA);
        }
        else if(key == 'n'){
            kaA('m',0);
            Queue.AddLast(kaA);
        }
        std::cout << Queue.GetSize()<<"\n";
        Queue._DebugPrint();
        std::cout << "\n";

        prevKey = key;
    }

    return 0;
}
