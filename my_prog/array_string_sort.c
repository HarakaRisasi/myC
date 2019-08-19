#include <stdio.h>
#include <string.h>

/* Массив для хранения введенной строки */
char String[30000];

/* Массив номеров позиций, с которых начинаются слова */
int Words[15000];

/* Количество введенных слов */
int Number;

/* Основная функция */
void main( void )
{
    int i, j, Temp;
    int Flag; /* Признак окончания слова */
    
    printf("Введите строку >\n");
    gets(String);
    
    /* Предварительная обработка */
    for (Number = 0, Flag = 1, i = 0; String[i]; i ++)
    {
	/* Все пробелы заменяем на символ конца строки */
	if (String[i] == ' ')
	{
	    String[i] = 0;
	    Flag = 1;
	}
	/* Позиции первых после пробелов символов записываем в массив */
	else if (Flag)
	{
	    Words[Number ++] = i;
	    Flag = 0;
	}
    }
    
    /* Сортировка */
    for (j = Number - 1; j > 0; j --)
	for (i = 0; i < j; i ++)
	    if (strcmp(&String[Words[i]], &String[Words[i + 1]]) > 0)
	    {
		Temp = Words[i];
		Words[i] = Words[i + 1];
		Words[i + 1] = Temp;
	    }
    
    /* Вывод результата */
    for (i = 0; i < Number; i ++)
	printf("%s\n", &String[Words[i]]);
} /* End of 'main' function */

/* End of 'task_1_2.c' file */

