#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int answer;
	puts("Вы хотите сейчас приобрести квартиру?(1-Да, 2-Нет)");
	cin >> answer;
	switch (answer)
	{
	case 1: {
		puts("Какую? (1-Однокомнатную, 2-Двухкомнатную, 3-Трехкомнатную)");
		cin >> answer;
		switch (answer)
		{
		case 1: puts("Не будет тесновато?"); break;
		case 2: puts("Хороший выбор!"); break;
		case 3: puts("Для семьи - самое то!"); break;
		}
		break;
	}
	case 2: puts("Советую вам поднакопить"); break;
	default: puts("Некорректный вариант ответа"); break;
	}
	return 0;
}
