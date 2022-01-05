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
//По желанию можно реализовать несгораемые суммы, подсказки, работу с файлами, звуковые эффекты и тд
//
//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	setlocale(0, "UKR");
//	cout << "Hi. What is your name?\n";
//	string name;
//	int money = 500;
//	cin >> name;
//	cout << "Hello " << name << ". You are welcome on the Millioner show.\n";
//	cout << name << ". Listen for first question. It is for " << money << "\n";//1 question
//	cout << "What is the correct month in Ukraine?\n";
//	cout << "Сiчень January Январь 01 \n";
//	cout << "   A      B       B    D \n";
//	cout << "Enter correct answer letter\n";
//	char letter;
//	cin >> letter;
//	if (letter == 'a' || letter == 'A')
//	{
//		cout << "Correct answer\n";
//		cout << "You get first level prize \n";
//		cout << money << " dollars\n";
//	}
//	else 
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << "Second question. Each next is daunting.\n";
//	cout << "What Matrix is the latest?\n";//2 question
//	cout << "'Matrix' 'Matrix Reload' 'Matrix Revolution' 'Matrix Resurrections'\n";
//	cout << "    A           B                C                    D\n";
//	cout << "Enter the letter\n";
//	cin >> letter;
//	if (letter == 'd' || letter == 'D')
//	{
//		cout << "Correct answer\n";
//		cout << "The prize doubles\n";
//		cout << money*2 << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << name << ". Third question is ahead\n";
//	cout << "Where the sun is rising?\n";//3 question
//	cout << "'In Japan' 'East' 'West' 'South'\n";
//	cout << "    A        B      C       D\n";
//	cout << "Enter the letter\n";
//	cin >> letter;
//	if (letter == 'b' || letter == 'B')
//	{
//		cout << "Correct answer\n";
//		cout << "The prize doubles\n";
//		cout << money*4 << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << "Next question. The fourth\n";
//	cout << "How Black Sea appeared?\n";//4 question
//	cout << "'Naturaly' 'Kozaks dug' 'USA help' 'Euro Union Help'\n";
//	cout << "    A            B           C            D\n";
//	cout << "Enter the letter\n";
//	cin >> letter;
//	if (letter == 'a' || letter == 'A')
//	{
//		cout << "Correct answer\n";
//		cout << "The prize doubles\n";
//		cout << money*6 << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << "Fifth question. You have " << money * 5 << " $\n";
//	cout << "How many husbands Alla Pugacheva had?\n";//5 question
//	cout << "'1' '2' '4' '5'\n";
//	cout << " A   B   C   D\n";
//	cout << "Enter the letter. And you can double your money\n";
//	cin >> letter;
//	if (letter == 'd' || letter == 'D')
//	{
//		cout << "Correct answer\n";
//		cout << "The prize doubles\n";
//		cout << money * 10 << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << "Sixth question\n";
//	cout << "What is the name of Tesla CEO?\n";//6 question
//	cout << "'Allen Delon' 'Alien Mask' 'Elon Musk' 'Nicola Tesla'\n";
//	cout << "      A            B            C            D\n";
//	cout << "Enter the letter\n";
//	cin >> letter;
//	if (letter == 'c' || letter == 'C')
//	{
//		cout << "Correct answer\n";
//		cout << "The prize doubles\n";
//		cout << 14 * money << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << "Seventh question\n";
//	cout << "What was the name of second Microsoft game concole?\n";//7 question
//	cout << "'XBOX' 'XBOX ONE' 'XBOX Series X' 'XBOX360'\n";
//	cout << "  A        B              C           D\n";
//	cout << "Enter the letter\n";
//	cin >> letter;
//	if (letter == 'd' || letter == 'D')
//	{
//		cout << "Correct answer\n";
//		cout << "The prize doubles\n";
//		cout << money * 20 << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << "Eighth question\n";
//	cout << "Who won the last Euro 2020 in 2021?\n";//8 question
//	cout << "'Italy' 'Germany' 'Ukraine' 'England'\n";
//	cout << "    A       B         C         D\n";
//	cout << "Enter the letter\n";
//	cin >> letter;
//	if (letter == 'a' || letter == 'A')
//	{
//		cout << "Correct answer\n";
//		cout << "The prize doubles\n";
//		cout << money * 40 << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << name << ". Nineth question\n";
//	cout << "What iPhone skipped the launch?\n";//9 question
//	cout << "'X' '4S' '9' '13'\n";
//	cout << " A    B   C   D\n";
//	cout << "Enter the letter\n";
//	cin >> letter;
//	if (letter == 'c' || letter == 'C')
//	{
//		cout << "Correct answer\n";
//		cout << name << ". The prize doubles\n";
//		cout << money * 60 << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << "Tenth question\n";
//	cout << "Most viewed video on Youtube for Vremya i Steklo?\n";//10 question
//	cout << "'Song 505' 'Name 505' 'Song 404' 'Name 404'\n";
//	cout << "    A           B       C      D\n";
//	cout << "Enter the letter";
//	cin >> letter;
//	if (letter == 'b' || letter == 'B')
//	{
//		cout << "Correct answer\n";
//		cout << "The prize doubles\n";
//		cout << money * 100 << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << "Eleventh question\n";
//	cout << "In which year Vitaliy Klichko really lives?\n";//11 question
//	cout << "'2220' '2202' '2022' 'В завтрашнем дне'\n";
//	cout << "  A      B      C            D\n";
//	cout << "Enter the letter\n";
//	cin >> letter;
//	if (letter == 'c' || letter == 'C')
//	{
//		cout << "Correct answer\n";
//		cout << "The prize doubles\n";
//		cout << money * 200 << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << "Twelveth question\n";
//	cout << "What was the lucky number of main hero in novel 'Numbers' of Victor Pelevin?\n";//12 question
//	cout << "'7' 'SUN34' '34' '43'\n";
//	cout << " A     B     C    D\n";
//	cout << "Enter the letter\n";
//	cin >> letter;
//	if (letter == 'c' || letter == 'C')
//	{
//		cout << "Correct answer\n";
//		cout << "The prize doubles\n";
//		cout << money * 500 << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << "Lucky 13th question\n";
//	cout << "Which was in sequence 'Ocean's Thirteen'?\n";//13 question
//	cout << "'1' '2' '3' 'Prequel'\n";
//	cout << " A   B   C      D\n";
//	cout << "Enter the letter";
//	cin >> letter;
//	if (letter == 'c' || letter == 'C')
//	{
//		cout << "Correct answer\n";
//		cout << name << "The prize doubles\n";
//		cout << money * 1000 << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << "Fourteenth question. The last according to new rules and you will walk away with million\n";
//	cout << "A googol equals 1 followed by how many zeros?\n";//14 question
//	cout << "'Ten zeros' 'Hundred zeros' 'Thousend zeros' 'Million zeros'\n";
//	cout << "     A              B                C               D\n";
//	cout << "Enter the letter";
//	cin >> letter;
//	if (letter == 'b' || letter == 'B')
//	{
//		cout << "Correct answer\n";
//		cout << "The prize doubles\n";
//		cout << money * 2000 << " dollars\n";
//	}
//	else
//	{
//		cout << "Your answer is wrong. There was ONLY one correct answer could let you play.\n But is Game Over " << name << "\n";
//		return 0;
//	}
//	cout << "You are new Millionair. Congrats!/n";
//	return 0;
//}

//11. Пользователь вводит с клавиатуры количество градусов по Цельсию,
//которое соответствует предполагаемой температуре за окном.
//Программа сообщает, тепло сейчас или холодно, жарко или мороз,
//а также генерирует прогноз погоды на завтра, с указанием скорости ветра, 
//возможных осадков и температуры воды в Чёрном море.

#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;
int main()
{
	int temp;
	cin >> temp;
	if (temp >= 30)//Day's temperature now
	{
		cout << "Hell Heat " << temp << "C\n";
	}
	else if (temp < 30 && temp >= 20)
	{
		cout << "Summer Hot " << temp << "C\n";
	}
	else if (temp < 20 && temp >= 10)
	{
		cout << "Warm autumn " << temp << "C\n";
	}
	else if (temp < 10 && temp >= 0)
	{
		cout << "Cool time " << temp << "C\n";
	}
	else if (temp < 0 && temp >= -5)
	{
		cout << "Frozen " << temp << "C\n";
	}
	else if (temp < -5 && temp >= -15)
	{
		cout << "Chilly cold " << temp << "C\n";
	}
	else if (temp < 15)
	{
		cout << "Anomaly frost " << temp << "C\n";
	}
	else
	{
		cout << "Wrong entry";
	}
	cout << "Tomorrow forecast\n";
	srand(time(NULL));
	int degree = rand() % 10 - 5; //day air Temperature tomorrow
	cout << "Day temp " << temp + degree << " C\n";
	cout << "Night temp " << temp + degree - 5 << " C\n"; //Air temperature is always lower
	int wind = rand() % 6;
	if (wind == 0)
	{
		cout << "Calm\n";
	}
	else if (wind == 1)
	{
		cout << "Lighr breeze 2-3 m/s\n";
	}
	else if (wind == 2)
	{
		cout << "Moderate wind 4-6 m/s\n";
	}
	else if (wind == 3)
	{
		cout << "Gale 7-9 m/s\n";
	}
	else if (wind == 4)
	{
		cout << "Storm 10-15 m/s\n";
	}
	else if (wind == 5)
	{
		cout << "Hurricane more than 16 m/s\n";
	}
	else
	{
		cout << "Super Blow";

	}
	int water; 
	water = (temp + temp + degree - 5) / 2;
	cout << "Water temperature " << water << " C \n";
	int rain = rand() % 3;
	if (rain == 0)
	{
		cout << "No precipitation \n";
	}
	else if (rain == 1 && temp + degree < 0 && wind >= 3)
	{
		cout << rain << " - Blizard\n";
	}
	else if (rain == 1 && temp + degree > 0 && temp + degree - 5 <= 0)// rain with snow
	{
		cout << rain << " - Frozen blisterin Rain\n";
	}
	else if (rain == 1 && temp + degree - 5 > 0)// rain in temperature above freezing point
	{
		cout << rain << " - Rain\n";
	}
	
	else if(rain == 1 && temp + degree < 0 && wind <= 2)
	{
		cout << rain << " - Snow\n";
	}
	else if (rain == 2)
	{
		cout << rain << " - Haze\n";
	}
	else 
	{
	cout << rain << " - Mushroom rain\n";
	}
}

//12. Реализовать программу «Предсказатель».Пользователь вводит вопрос.
//Программа выдаёт случайный ответ из набора заранее предусмотренных ответов
//(5 положительных, 5 отрицательных, 10 нейтральных вариантов).
//
//#include <iostream>
//#include <ctime>
//#include <string.h>
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	int ball = rand() % 20+1;
//	string wish;
//	cin >> wish;
//	cout << wish << "\n";
//	switch (ball)
//	{case 1:
//		cout << "You will loose\n";
//		break;
//	 case 2:
//		cout << "You will find\n";
//		break;
//	case 3:
//		cout << "You will get bad mark";
//		break;
//	case 4:
//		cout << "You will get good mark";
//		break;
//	case 5:
//		cout << "Friends will be kind";
//		break;
//	case 6:
//		cout << "Friends will behave cruelly";
//		break;
//	case 7:
//		cout << "YES";
//		break;
//	case 8:
//		cout << "NO";
//		break;
//	case 9:
//		cout << "Everything will be on time";
//		break;
//	case 10:
//		cout << "Everything will be late";
//		break;
//	case 11:
//		cout << "Who knows....";
//		break;
//	case 12:
//		cout << "I don't know...";
//		break;
//	case 13:
//		cout << "Ask universe...";
//		break;
//	case 14:
//		cout << "Maybe later...";
//		break;
//	case 15:
//		cout << "Tomorrow should be better...";
//		break;
//	case 16:
//		cout << "Mystery...";
//		break;
//	case 17:
//		cout << "I am just ball. Even magic";
//		break;
//	case 18:
//		cout << "Some dreams are more reliable...";
//		break;
//	case 19:
//		cout << "Try another Universe...";
//		break;
//	case 20:
//		cout << "Maybe in the next life...";
//	default:
//			cout << "I am just ball. Even magic. Ask properly";
//		break;
//	}
//	cout << "\n" << ball;
//}

//13. Пользователь указывает дату своего рождения(число и месяц).
//Программа определяет знак зодиака пользователя и составляет для него гороскоп на ближайшую неделю.

//14. Валера купил N куриц по M гривен за одну курицу.Каждая курица несёт по X яиц в неделю.
//Валера решил открыть свой бизнес и стал продавать яйца, которые несут курицы.
//За сколько дней окупятся куры, если продавать яйца по Z гривен за десяток
//(с учётом НДС, но без учёта сбора в ПФ)?
//Сроком жизни куриц, влажностью воздуха в курятнике, 
//а также скоростью ветра и фазами луны можно пренебречь.