
#include <iostream>

void TextChange(char* _Text, const char* _Prev, const char* _Next)
{
	int TextCount = 0;
	int PrevCount = 0;
	int NextCount = 0;
	int TrueCount = 0;

	// 변경될 텍스트와 변경할 텍스트 글자수 세기
	while (0 != _Prev[PrevCount])
	{
		PrevCount += 1;
	}
	while (0 != _Next[NextCount])
	{
		NextCount += 1;
	}

	// 전체 문장 첫글자부터 한 글자씩 확인시작

	while (0 != _Text[TextCount])
	{
		TrueCount = 0;

		// 선택된 한 글자 기준으로 변경될 텍스트 길이만큼 확인하기 
		for (int i = 0; i < PrevCount; i++)
		{
			// 한 글자가 일치할때마다 TrueCount를 1씩 올림
			if (_Text[TextCount + i] == _Prev[i])
			{
				TrueCount += 1;
			}

		}

		// 변경될 글자수 = 일치하는 글자수(TrueCount)가 같으면 변경을 실행함
		if (TrueCount == PrevCount)
		{
			for (int j = 0; j < NextCount; j++)
			{
				_Text[TextCount + j] = _Next[j];
			}

			// 변경된 글자수만큼 칸수를 옮겨서 시작하기 위해 값을 더해줌
			TextCount += PrevCount;
		}

		//안쪽이 실행하든 안하든 칸수를 옮겨 다음 글자를 확인하기 위해 값을 더해줌
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
