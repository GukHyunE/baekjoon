#include <stdio.h>

void count_one_letters(int* count, int* i);
void count_two_letters(int* count, int* i);
void count_three_letters(int* count, int* i);

int main(void)
{
	char vocab[101] = { 0, };
	scanf("%s", vocab);

	int i = 0, count = 0;
	while (vocab[i] != NULL)
	{
		if (vocab[i] == 'c')
		{
			if (vocab[i + 1] == '=' || vocab[i + 1] == '-')	count_two_letters(&count, &i);
			else count_one_letters(&count, &i);
		}
		else if (vocab[i] == 'd')
		{
			if (vocab[i + 1] == 'z' && vocab[i + 2] == '=') count_three_letters(&count, &i);
			else if (vocab[i + 1] == '-') count_two_letters(&count, &i);
			else count_one_letters(&count, &i);
		}
		else if (vocab[i] == 'l' && vocab[i + 1] == 'j') count_two_letters(&count, &i);
		else if (vocab[i] == 'n' && vocab[i + 1] == 'j') count_two_letters(&count, &i);
		else if (vocab[i] == 's' && vocab[i + 1] == '=') count_two_letters(&count, &i);
		else if (vocab[i] == 'z' && vocab[i + 1] == '=') count_two_letters(&count, &i);
		else count_one_letters(&count, &i);
	}

	printf("%d", count);

	return 0;
}

void count_one_letters(int* count, int* i)
{
	(*count)++;
	(*i)++;
}

void count_two_letters(int* count, int* i)
{
	(*count)++;
	(*i) += 2;
}

void count_three_letters(int* count, int* i)
{
	(*count)++;
	(*i) += 3;
}