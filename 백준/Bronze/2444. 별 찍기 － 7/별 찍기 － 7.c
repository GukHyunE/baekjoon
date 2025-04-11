#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < 2 * N - 1; i++)
	{
		if (i < N)
		{
			int cnt = 0;
			for (int j = 0; j < 2 * N - 1;j++)
			{
				if (j < N)
				{
					if (N - i - 1 > j) printf(" ");		// i가 커질수록 별의 갯수 늘어남
					else printf("*");
				}
				else
				{
					if (i - 1 >= j - N) printf("*");	// i가 커질수록 별의 갯수가 작아짐
					else
					{
						if (cnt == 0) 
						{
							printf(" ");
							cnt++;
						}
						else;
					}
				}
			}
			printf("\n");
		}
		else
		{
			int cnt = 0;
			for (int j = 0; j < 2 * N - 1;j++)
			{
				if (j < N)
				{
					if (i - N >= j) printf(" ");	// 공백 기준 i가 커질수록 j도 커져야 함
					else printf("*");
				}
				else
				{
					if ((2 * N - 1) - i > j - N + 1) printf("*");		// i가 커질수록 별의 갯수가 커짐
					else
					{
						if (cnt == 0)
						{
							printf(" ");
							cnt++;
						}
						else;
					}
				}
			}

			if (i < 2 * N - 2) printf("\n");
		}
	}

	return 0;
}