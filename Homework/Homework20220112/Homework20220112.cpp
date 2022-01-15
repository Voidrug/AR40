// HomeWork220112.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다
//

#include <iostream>

int main()
{
	{
		//짝수

		int Arr[10] = { 0, };
		int Index = 0;

		while (Index < 10)
		{
			Arr[Index] = (Index * 2) + 2;
			Index += 1;
		}

	}

	{
		//홀수

		int Arr[10] = { 0, };
		int Index = 0;

		while (Index < 10)
		{
			Arr[Index] = (Index * 2) + 1;
			Index += 1;
		}

	}
}
