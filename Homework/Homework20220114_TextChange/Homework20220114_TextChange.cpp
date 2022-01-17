
#include <iostream>

void TextChange(char* _Text, const char* _Prev, const char* _Next)
{
	int TextCount = 0;
	int PrevCount = 0;
	int NextCount = 0;
	int TrueCount = 0;

	while (0 != _Prev[PrevCount])
	{
		PrevCount += 1;
	}
	while (0 != _Next[NextCount])
	{
		NextCount += 1;
	}

	while (0 != _Text[TextCount])
	{
		TrueCount = 0;

		for (int i = 0; i < PrevCount; i++)
		{
			if (_Text[TextCount + i] == _Prev[i])
			{
				TrueCount += 1;
			}

		}

		if (TrueCount == PrevCount)
		{
			for (int i = 0; i < NextCount; i++)
			{
				_Text[TextCount + i] = _Next[i];
			}

			TextCount += PrevCount;
		}

		TextCount += 1;

	}
	
	return;
}

int main()
{
	{
		char Text[100] = "aa, bb, aa, bb aa aa aa aaaaaaa ccaffeds";

		TextChange(Text, "aa", "fff");
		// "fff, bb, fff, bb fff fff fff fffffffffa ccaffeds";
		printf_s(Text);
	}

}
