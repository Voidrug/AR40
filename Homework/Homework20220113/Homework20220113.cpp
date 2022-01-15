/// HomeWork220113.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다
//

#include <iostream>

void StringTrimRemove(const char* _Left, char* _Right)
{

    int LeftIndex = 0;
    int RightIndex = 0;

    while (0 != _Left[LeftIndex])
    {
        if (' ' != _Left[LeftIndex])
        {
            _Right[RightIndex] = _Left[LeftIndex];

            RightIndex += 1;
        }
        
        LeftIndex += 1;

    }

    return;
}

int main()
{
    char Text[10000] = { 0, };

    StringTrimRemove("  a d d df di dd k  ", Text);

    printf_s(Text);
}
