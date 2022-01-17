
#include <iostream>


void CharChange(char* _Text, char _Prev, char _Next)
{
	int Count = 0;

	while (0 != _Text[Count])
	{
		if (_Prev == _Text[Count])
		{
			_Text[Count] = _Next;
		}

		Count += 1;
	}

	return;
}

int main()
{
	{
		char a = 'a';
		
		char Text[100] = "aa, bb, cc, dd";

		CharChange(Text, ',', '|');
		// aa| bb| cc| dd

		printf_s(Text);
	}

}
