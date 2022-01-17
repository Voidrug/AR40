
#include <iostream>

void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{
	int Count = 0;

	while (0 != _Sorce[Count])
	{
		if (_Start <= Count && Count <= _End)
		{
			_Result[Count - _Start] = _Sorce[Count];
		}

		Count += 1;
	}

	return;
}

int main()
{
	{
		char Text[100] = { };
		Cut("0123456789", 2, 7, Text);
		// "234567"
		printf_s(Text);
	}

}
