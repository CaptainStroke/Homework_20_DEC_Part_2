﻿//1. Определить, параллельна ли определённая прямая линия оси ординат, либо оси абсцисс.
//Прямая задаётся двумя точками.

//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	float x1;
//	float y1;
//	float x2;
//	float y2;//coordinates of points of line
//	cout << "There is a straight line. You should enter the cooardinate of two points - x1;y1 and x2;y2\n";
//	cin >> x1 >> y1 >> x2 >> y2;
//	(x1 == x2 || y1 == y2) ? cout << "Paralel" : cout << "Just the line";
//}

//2. Проверить, имеет ли введённое число вещественную часть.
//Например, числа 3.14 и 2.5 – имеют вещественную часть, а числа 5 и 10.0 – нет.

//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	float a;
//	cin >> a;
//	a -=(int)a;
//	(a == 0) ? (cout << "Ineger type") : (cout << "Real number with decimal part");	
//}

//3. Написать программу, которая предлагает пользователю ввести номер дня недели, 
//и в ответ показывает название этого дня(например, 6 – это суббота).
//Решить с использованием if и switch.

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int day;
	cout << "Enter the number of the day of the week. Monday is 1 and Sunday is 7\n";
	cin >> day;
	day = ++day;
	if (day == 1 || day == 8)
	{
		cout << "Sunday";
	}
	else if (day == 2) 
	{
		cout << "Monday";
	}
	else if (day == 3)
	{
		cout << "Teusday";
	}
		else if (day == 4)
	{
		cout << "Wednesday";
	}
	else if (day == 5)
	{
		cout << "Thursday";
	}
	else if (day == 6)
	{
		cout << "Friday";
	}
	else if (day == 7)
	{
		cout << "Saturday";
	}
	else
	{
		cout << "Try something right";
	}
}

//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//
//}
//4. Указать с клавиатуры текущее время(количество часов, минут, секунд).
//Проверить корректность введённых значений.

//5. Ввести с клавиатуры шестизначный номер трамвайного(троллейбусного) билета, 
//и определить является ли он счастливым(совпадают суммы трёх первых и трёх последних цифр билета).

//6. Вводится время(только часы) – программа выводит приветствие, 
//соответствующее введённому времени(например, ввели 15 часов – выводится приветствие «добрый день»).

//7. Программа подсчета идеального веса к росту.
//Ввести рост и вес, вывести сообщение о том, сколько  нужно кг набрать 
//или сбросить(идеальный вес = рост – 110 для девушек, и - 100 для парней).

//8. Ввести любую дату(день, месяц и год вводятся по отдельности).
//Проверить корректность введённых значений.Вывести дату следующего дня.

//9. Написать программу, которая предлагает пользователю выбрать животное из списка
//(1 – кошка, 2 – собака и тд.), и в ответ показывает, какие звуки издаёт выбранное животное.
//В списке должно быть хотя бы 10 животных.

//10. Написать игру "О, счастливчик!".
//На экране по очереди появляются вопросы, и варианты ответов.Неправильный выбор - игра окончена.
//Правильный ответ – переходим к следующему вопросу.
//Если все ответы правильные – в конце выводится сообщение о победе.
//По желанию можно реализовать несгораемые суммы, подсказки, работу с файлами, звуковые эффекты и тд.

//11. Пользователь вводит с клавиатуры количество градусов по Цельсию,
//которое соответствует предполагаемой температуре за окном.
//Программа сообщает, тепло сейчас или холодно, жарко или мороз,
//а также генерирует прогноз погоды на завтра, с указанием скорости ветра,
//возможных осадков и температуры воды в Чёрном море.

//12. Реализовать программу «Предсказатель».Пользователь вводит вопрос.
//Программа выдаёт случайный ответ из набора заранее предусмотренных ответов
//(5 положительных, 5 отрицательных, 10 нейтральных вариантов).

//13. Пользователь указывает дату своего рождения(число и месяц).
//Программа определяет знак зодиака пользователя и составляет для него гороскоп на ближайшую неделю.

//14. Валера купил N куриц по M гривен за одну курицу.Каждая курица несёт по X яиц в неделю.
//Валера решил открыть свой бизнес и стал продавать яйца, которые несут курицы.
//За сколько дней окупятся куры, если продавать яйца по Z гривен за десяток
//(с учётом НДС, но без учёта сбора в ПФ)?
//Сроком жизни куриц, влажностью воздуха в курятнике, 
//а также скоростью ветра и фазами луны можно пренебречь.