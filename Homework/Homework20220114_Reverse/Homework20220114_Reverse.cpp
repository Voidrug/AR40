
#include <iostream>

void Rervers(const char* _Sorce, char* _Result)
{
	int StringLen = 0;
	int Count = 0;

	while (0 != _Sorce[StringLen])
	{
		StringLen += 1;
	}

	while (0 != StringLen)
	{
		_Result[Count] = _Sorce[StringLen - 1];

		StringLen -= 1;

		Count += 1;
	}

	return;
}

int main()
{
	{
		char Text[100] = { 0, };
		Rervers("0123456789456421", Text);

		printf_s(Text);
	}

}