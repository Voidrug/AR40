
#include <iostream>

int ToInt(const char* _Left)
{
	int Count = 0;
	int Result = 0;

	
	while (0 != _Left[Count])
	{
		Result += (_Left[Count] - 48);

		if (0 != _Left[Count + 1])
		{
			Result *= 10;
		}

		Count += 1;
	}
	
	return Result;
}

int main()
{
	int Value = ToInt("150815");

	int a = 0;

}
