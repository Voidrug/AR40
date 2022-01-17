
#include <iostream>

void TextChange(char* _Text, const char* _Prev, const char* _Next)
{

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
