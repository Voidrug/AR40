// HomeWork220115.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int StringLen(const char*_StringLen)
{
    int Count = 0;

    while (0 != _StringLen[Count])
    {
        Count += 1;
    }

    return Count;
}

int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
    int TextCount = StringLen(_Text);
    int PrevCount = StringLen(_FindStr);
    int TrueCount = 0;

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
    int TextCount = StringLen(_Text);
    int PrevCount = StringLen(_FindStr);
    int TrueCount = 0;

    for (int i = TextCount - _End; i >= 0; --i)
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

int main()
{

    {
        int Count = CountFirst("aaa eee tt fjkdld feee", 15, "eee");

        int a = 0;
    }

    {
        int Count = CountLast("aaa eee asdfdfasd edfs", 5, "eee");

        int a = 0;
    }

}