
#include <iostream>

class MyInt
{
public:
    int Value;

public:
    MyInt(int _Value)
        : Value(_Value)
    {

    }

    MyInt operator++()
    {
        Value += 1;

        return *this;
    }

    MyInt operator++(int)
    {
        MyInt Index = *this;

        Value += 1;

        return Index;
    }
};

int main()
{
    int Value = 0;
    int Result = 0;

    Result = ++Value;
    Result = 0;
    Result = Value++;


    MyInt MyValue = 0;
    MyInt MyResult = 0;

    // ++ ����������
    MyResult = ++MyValue;
    MyResult = 0;
    MyResult = MyValue++;
}