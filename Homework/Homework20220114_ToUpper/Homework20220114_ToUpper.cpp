
#include <iostream>

void ToUpper(const char* _Left, char* _Right)
{

	int Count = 0;

	while (0 != _Left[Count])
	{
		if (97 <= _Left[Count] && _Left[Count] <= 122)
		{
			_Right[Count] = _Left[Count] - 32;
		}
		else
		{
			_Right[Count] = _Left[Count];
		}

		Count += 1;
	}

	return;

}

int main()
{

	{
		char Text[100] = { 0 };

		ToUpper("pP1231 dcwsec", Text);
		//      "12ABCCEEE"
		printf_s(Text);
	}

}
