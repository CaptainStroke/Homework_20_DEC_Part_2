//1. Определить, параллельна ли определённая прямая линия оси ординат, либо оси абсцисс.
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
// 
//Решение с Switch
// 
//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	int day;
//	cin >> day;
//	switch (day)
//	{
//	case 1:
//		cout << "Monday";
//		break;
//	case 2:
//		cout << "Tuesday";
//		break;
//	case 3:
//		cout << "Wednesday";
//		break;
//	case 4:
//		cout << "Thursday";
//		break;
//	case 5:
//		cout << "Friday";
//		break;
//	case 6:
//		cout << "Saturday";
//		break;
//	case 7:
//		cout << "Sunday";
//		break;
//	default:
//		cout << "Try somethng right";
//		break;
//	}
//}
// 
// Второе решение. If Else
// 
//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	int day;
//	cout << "Enter the number of the day of the week. Monday is 1 and Sunday is 7\n";
//	cin >> day;
//	day = ++day;
//	if (day == 1 || day == 8)
//	{
//		cout << "Sunday";
//	}
//	else if (day == 2) 
//	{
//		cout << "Monday";
//	}
//	else if (day == 3)
//	{
//		cout << "Teusday";
//	}
//		else if (day == 4)
//	{
//		cout << "Wednesday";
//	}
//	else if (day == 5)
//	{
//		cout << "Thursday";
//	}
//	else if (day == 6)
//	{
//		cout << "Friday";
//	}
//	else if (day == 7)
//	{
//		cout << "Saturday";
//	}
//	else
//	{
//		cout << "Try something right";
//	}
//}


//4. Указать с клавиатуры текущее время(количество часов, минут, секунд).
//Проверить корректность введённых значений.

//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//
//}
// 
//5. Ввести с клавиатуры шестизначный номер трамвайного(троллейбусного) билета, 
//и определить является ли он счастливым(совпадают суммы трёх первых и трёх последних цифр билета).

//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	cout << "Enter 6 digits for number. Let's find out if it is lucky\n";
//	int ticket;
//	cin >> ticket;
//	int six = ticket / 100000 % 10;
//	int five = ticket / 10000 % 10;
//	int four = ticket / 1000 % 10;
//	int three = ticket / 100 % 10;
//	int two = ticket / 10 % 10;
//	int one = ticket % 10;
//	cout << six << five << four << three << two << one;
//	(six + five + four) == (three + two + one) ? cout << ("\nLucky number!!! - ") << (six + five + four) : cout << ("\nTry again - ") << six + five + four << " is not equal " << three + two + one;
//}

//6. Вводится время(только часы) – программа выводит приветствие, 
//соответствующее введённому времени(например, ввели 15 часов – выводится приветствие «добрый день»).

//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "Enter hours -";
//	int time;
//	cin >> time;
//	string Day = "Good afternoon. The sun is high!!";
//	string Night = "Good Night. Sweet dream!!";
//	string Midnight = "Pleasant Midnight!!";
//	string Mourning = "Good Mourning. Rise and shine!!";
//	string Evening = "End of day. Good evening. Relax time!";
//	string Noon = "Mid day. Lunch!!";
//		if (time == 0)
//	{
//		cout << Midnight;
//	}
//	else if (time > 0 && time < 6 || time >= 21 && time < 24 && time != 0)
//	{
//		cout << Night;
//	}
//	else if (time < 12 && time >6)
//		{
//			cout << Mourning;
//		}
//	else if (time == 12)
//		{
//			cout << Noon;
//		}
//	else if (time < 17 && time > 12)
//		{
//			cout << Day;
//		}
//	else if (time < 21 && time >=17)
//		{
//			cout << Evening;
//		}
//	else
//		{
//			cout << "Wrong input";
//		}
//}

//#include <iostream>
//#include <math.h>
//#include <conio.h>
//using namespace std;
//int main()
//{
//	cout << "Enter hours -";
//	int time;
//	cin >> time;
//	string Day = "Good afternoon. The sun is high!!";
//	string Night = "Good Night. Sweet dream!!";
//	string Midnight = "Pleasant Midnight!!";
//	string Mourning = "Good Mourning. Rise and shine!!";
//	string Evening = "End of day. Good evening. Relax time!";
//	string Noon = "Mid day. Lunch!!";
//	switch (time)
//	{case 1, 5, 6, 7:
//		cout << "Good Night";
//		break;
//	}		
//}

//7. Программа подсчета идеального веса к росту.
//Ввести рост и вес, вывести сообщение о том, сколько  нужно кг набрать 
//или сбросить(идеальный вес = рост – 110 для девушек, и - 100 для парней).

//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	float kg;
//	float cm;
//	float bmi;//body mass index. Perfect for men = 100; for women = 110
//	cout << "Enter your height in centimeters - ";
//	cin >> cm;
//	cout << "Enter your weight in kilos - ";
//	cin >> kg;
//	bmi = cm - kg;
//	int gender;
//	cout << "Male - '1' ; Female - '2'\n";
//	cin >> gender;
//	if (gender == 1 && bmi == 100)
//	{
//		cout << "Your weight is perfect for a men. Just continue";
//	}
//	else if (gender == 2 && bmi == 110)
//	{
//		cout << "Your weight is perfect for a women. Just continue";
//	}
//	else if (gender == 1 && bmi < 100)
//	{
//		cout << "Oh, boy. Stop eat NOW. It's holidays. But You shold loose - " << (abs)(bmi - 100) <<  " kilos";
//	}
//	else if (gender == 1 && bmi > 100)
//	{
//		cout << "It is the best time to get some kilos. Particularly  - " << (abs)(bmi - 100) << " kilos";
//	}
//	else if (gender == 2 && bmi < 110)
//	{
//		cout << "Stop eat NOW, Lady. You shold loose - " << (abs)(bmi - 110) << " kilos in GYM";
//	}
//	else if (gender == 2 && bmi > 110)
//	{
//		cout << "Get some kilos during holidays. Exactly - " << (abs)(bmi - 110) << " kilos";
//	}
//		else 
//	{
//		cout << "Wrong entry";
//	}
//}


//8. Ввести любую дату(день, месяц и год вводятся по отдельности).
//Проверить корректность введённых значений.Вывести дату следующего дня.

//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	int day;
//	int month;
//	int year;
//	cin >> day >> month >> year;
//	cout << "The date you input\n";
//	cout << day << "." << month << "." << year << "\n";
//	cout << "Next day";
//	if (month == 1 && day <= 30 && day >= 1 )// january
//	{
//		cout << ++day << "." << month << "." << "." << year;
//	}
//	else if (month == 1 && day == 31)//jan-feb
//	{
//		cout << day - 30 << "." << ++month << "." << year;
//	}
//	else if (year % 4 == 0 && month == 2 && day <= 28 && day >= 1)//febuary leap
//	{
//		cout << ++day << "." << month << "." << year;
//	}
//	else if (year % 4 == 0 && month == 2 && day == 29) // feb-march
//	{
//		cout << day - 28 << "." << ++month << "." << year;
//	}
//	else if (year % 4 != 0 && month == 2 && day <= 27 && day >= 1)//febuary normal
//	{
//		cout << ++day << "." << month << "." << year;
//	}
//	else if (year % 4 != 0 && month == 2 && day == 28)//feb-march
//	{
//		cout << day - 27 << "." << ++month << "." << year;
//	}
//	else if (month == 3 && day <= 30 && day >= 1)// march
//	{
//		cout << ++day << "." << month << "." << year;
//	}
//	else if (month == 3 && day == 31)// march-april
//	{
//		cout << day - 30<< "." << ++month << "." << year;
//	}
//	else if (month == 4 && day <= 29 && day >= 1)// april
//	{
//		cout << ++day << "." << month << "." << year;
//	}
//	else if (month == 4 && day == 30)//april-may
//	{
//		cout << day - 29 << "." << ++month << "." << year;
//	}
//	else if (month == 5 && day <= 30 && day >= 1)// may
//	{
//		cout << ++day << "." << month << "." << year;
//	}
//	else if (month == 5 && day == 31)//may-june
//	{
//		cout << day - 30 << "." << ++month << "." << year;
//	}
//	else if (month == 6 && day <= 29 && day >= 1)// june
//	{
//		cout << ++day << "." << month << "." << year;
//	}
//	else if (month == 6 && day == 30)//june-july
//	{
//		cout << day - 29 << "." << ++month << "." << year;
//	}
//	else if (month == 7 && day <= 30 && day >= 1)// july
//	{
//		cout << ++day << "." << month << "." << year;
//	}
//	else if (month == 7 && day == 31)//july-august
//	{
//		cout << day - 30 << "." << ++month << "." << year;
//	}
//	else if (month == 8 && day <= 30 && day >= 1)//august
//	{
//		cout << ++day << "." << month << "." << year;
//	}
//	else if (month == 8 && day == 31)//august-septenber
//	{
//		cout << day - 30 << "." << ++month << "." << year;
//	}
//	else if (month == 9 && day <= 29 && day >= 1)// september
//	{
//		cout << ++day << "." << month << "." << year;
//	}
//	else if (month == 9 && day == 30)//sept-october
//	{
//		cout << day - 29 << "." << ++month << "." << year;
//	}
//	else if (month == 10 && day <= 30 && day >= 1)//october
//	{
//		cout << ++day << "." << month << "." << year;
//	}
//	else if (month == 10 && day == 31)//october-november
//	{
//		cout << day - 30 << "." << ++month << "." << year;
//	}
//	else if (month == 11 && day <= 29 && day >= 1)//november
//	{
//		cout << ++day << "." << month << "." << year;
//	}
//	else if (month == 11 && day == 30)//november-december
//	{
//		cout << day - 29 << "." << ++month << "." << year;
//	}
//	else if (month == 12 && day <= 30 && day >= 1)//december
//	{
//		cout << ++day << "." << month << "." << year;
//	}
//	else if (month == 12 && day == 31)//december-january-newyear
//	{
//		cout << day - 30 << "." << month - 11 << "." << ++year;
//	}
//	else
//	{
//	cout << "wrong input";
//	}
// }

//9. Написать программу, которая предлагает пользователю выбрать животное из списка
//(1 – кошка, 2 – собака и тд.), и в ответ показывает, какие звуки издаёт выбранное животное.
//В списке должно быть хотя бы 10 животных.

//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	cout << "The list of animals:\n";
//	cout << "1 - Dog\n";
//	cout << "2 - Cat\n";
//	cout << "3 - Cock\n";
//	cout << "4 - Parrot\n";
//	cout << "5 - Monkey\n";
//	cout << "6 - Cow\n";
//	cout << "7 - Sheep\n";
//	cout << "8 - Pig\n";
//	cout << "9 - Donkey\n";
//	cout << "10 - Horse\n";
//	int animal;
//	cout << "Enter the number of animal and you will see the sound\n";
//	cin >> animal;
//	switch (animal)
//	{
//	case 1:
//		cout << "Dog - Wow wow";
//		break;
//	case 2:
//		cout << "Cat - Myu-myu";
//		break;
//	case 3:
//		cout << "Cock - Kukareku";
//		break;
//	case 4:
//		cout << "Parrot - Vse Duraki";
//		break;
//	case 5:
//		cout << "Monkey - AaA-UuU";
//		break;
//	case 6:
//		cout << "Cow - MuMuMuuuu";
//		break;
//	case 7:
//		cout << "Sheep - Bebebebeeeee";
//		break;
//	case 8:
//		cout << "Donkey - IaIa";
//		break;
//	case 9:
//		cout << "Horse - Tygydym";
//		break;
//	case 10:
//		cout << "Pig - HruHru";
//		break;
//	default:
//		cout << "Try somethng right";
//		break;
//	}
//}

//10. Написать игру "О, счастливчик!".
//На экране по очереди появляются вопросы, и варианты ответов.Неправильный выбор - игра окончена.
//Правильный ответ – переходим к следующему вопросу.
//Если все ответы правильные – в конце выводится сообщение о победе.
//По желанию можно реализовать несгораемые суммы, подсказки, работу с файлами, звуковые эффекты и тд.

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	setlocale(0, "UKR");
	cout << "Hi. What is your name?\n";
	string name;
	int money = 100;
	cin >> name;
	cout << "Hello " << name << ". You are welcome on the Millioner show.\n";
	cout << name << ". Listen for first question. It is for " << money << "\n";
	cout << "What is the correct month in Ukraine?\n";
	cout << "Сiчень January Январь 01 \n";
	cout << "   A      B       B    D \n";
	cout << "Enter correct answer letter";
	char letter;
	cin >> letter;
	if (letter == 'a' || letter == 'A')
	{
		cout << "Correct answer\n";
		cout << "The prize doubles\n";
		cout << money << " dollars\n";
	}
	else 
	{
		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
		return 0;
	}
	cout << "What Matrix is the latest?\n";
	cout << "'Matrix' 'Matrix Reload' 'Matrix Revolution' 'Matrix Resurrections'\n";
	cout << "    A           B                C                    D\n";
	cout << "Enter the letter";
	cin >> letter;
	if (letter == 'd' || letter == 'D')
	{
		cout << "Correct answer\n";
		cout << "The prize doubles\n";
		cout << money << " dollars\n";
	}
	else
	{
		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
		return 0;
	}

}

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