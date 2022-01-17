// HomeWork220115.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
    int TextCount = 0;
    int PrevCount = 0;
    int TrueCount = 0;
    
    while (0 != _FindStr[PrevCount])
    {
        PrevCount += 1;      
    }

    while (0 != _Text[TextCount])
    {
        TextCount += 1;
    }

    for (int i = _Start; i < TextCount; ++i)
    {
        TrueCount = 0;
        
        for (int k = 0; k < PrevCount; ++k)
        {
            if (_Text[i + k] == _FindStr[k])
            {
                TrueCount += 1;
            }
        }

        if (TrueCount == PrevCount)
        {
            return i+1;
        }
    }

    return -1;
}

int CountLast(const char* _Text, int _End, const char* _FindStr)
{
    int TextCount = 0;
    int PrevCount = 0;
    int TrueCount = 0;

    while (0 != _FindStr[PrevCount])
    {
        PrevCount += 1;
    }

    while (0 != _Text[TextCount])
    {
        TextCount += 1;
    }

    for (int i = TextCount - _End; i >= 0; --i)
    {
        TrueCount = 0;

        for (int k = 0; k < PrevCount; ++k)
        {
            if (_Text[i - k] == _FindStr[PrevCount - k - 1])
            {
                TrueCount += 1;
            }
        }

        if (TrueCount == PrevCount)
        {
            return i+1;
        }
    }

    return -1;
}

int main()
{

    {
        int Count = CountFirst("aaa eee tt fjkdld eeee", 15, "eee");

        int a = 0;
    }

    {
        int Count = CountLast("aaa eee asdfdfasd eeedfs", 5, "eee");

        int a = 0;
    }

}