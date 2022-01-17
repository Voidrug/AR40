
#include <iostream>

void TextChange(char* _Text, const char* _Prev, const char* _Next)
{
	int Count = 0;

	while (0 != _Text[Count])
	{
		if (_Prev[0] == _Text[Count] && _Prev[1] == _Text[Count + 1])
		{
			_Text[Count] = _Next[0];
			_Text[Count + 1] = _Next[1];
			_Text[Count + 2] = _Next[2];

			Count += 1;
		}

		Count += 1;

	}
	
	return;
}

int main()
{
	{
		char Text[100] = "aa, bb, aa, bb aa aa aa aaaaaaa ccdffeds";

		TextChange(Text, "aa", "fff");
		// "fff, bb, fff, bb fff fff fff fffffffffa ccdffeds";
		printf_s(Text);
	}

}
