// HomeWork220114.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void ToUpper(const char* _Left, char* _Right)
{

}

// 좀 어려울거다.
int ToInt(const char* _Left)
{

}

// 좀 어려울거다.
void CharChange(char* _Text, char _Prev, char _Next)
{

}

void Rervers(const char* _Sorce, char* _Result)
{

}

void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{

}

void TextChange(char* _Text, const char* _Prev, const char* _Next)
{

}

int main()
{

	{
		char Text[5];

		ToUpper("pP1231dcwsec", Text);
		//      "12ABCCEEE"
		printf_s(Text);
	}

	{
		char Text[100];

		ToUpper("12abCcEee", Text);
		//      "12ABCCEEE"
		printf_s(Text);
	}

	{
		char Text = '1';
		int Count = '2';

		int Value = ToInt("15815");

		int a = 0;
	}

	{
		char Text[100] = "aa, bb, cc, dd";

		CharChange(Text, ',', '|');
		// aa| bb| cc| dd

		printf_s(Text);
	}

	{
		char Text[100] = { };
		Rervers("0123456789", Text);
	}

	{
		char Text[100] = { };
		Cut("0123456789", 2, 7, Text);
		// "234567"
	}

	{
		// 이건 질문 안하셔도 됩니다.
		char Text[100] = "aa, bb, aa, bb aa aa aa aaaaaaa ccdffeds";

		TextChange(Text, "aa", "fff");
		// "fff, bb, fff, bb fff fff fff fffffffffa ccdffeds";
		// aa| bb| cc| dd
		printf_s(Text);
	}

}
