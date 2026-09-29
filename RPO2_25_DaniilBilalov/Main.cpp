#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	const int row = 3;
	const int col = 4;

	int arr[row][col];

	arr[0][1] = 5;


	return 0;
} 
 
// aaa


// тип_данных имя_массива [кол_ячеек]





/*
	double val = 0;
	double rubles = 0;


	std::cout << "укажите кол-во рублей:^\n";
	std::cin >> rubles;
	std::cout << "выберете валюту: 1 Евро, 2 Доллар, 3 Фарит, 4 Юань";
	std::cin >> val;

	rubles = rubles * 0.95;

	if (val == 1)
	{
		std::cout << rubles / 99.75;
	}
	else if (val == 2)
	{
		std::cout << rubles / 100.5;
	}
	else if (val == 3)
	{
		std::cout << rubles / 67;
	}
	else if (val == 4)
	{
		std::cout << rubles / 12.79;
	}\


	Типы данных:

	bool						true/false					0 - false
	char						'+'							43
	unsigned char				'+'							43		0 - 255

	short						123							-32768  --  32767
	unsigned short				123								0 - 65535

	int						123456789						-2147483648  --  2147483647
	unsigned int			123456789							-----------
	long long int			45619846219								большой


	float					123456.987654						3.4T-38 -- 3.4E+38
	double					987646523149.156546					1.7T-308 -- 1.7E+308
	long double		

	auto

	Операторы:
	Математические: + - * / = % ++ -- += -= *= /= ()
	Сравнительные: < > <= >= == !=		<=>
	Логические: && (и)		|| (или)	! (не)

	ТАБУ:	goto	and or not			int имяПеременной	

	int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	std::cout << "данил\n\tпитаться\n\t\tпросто так\n\t" << 0 << "\nне знаю\n\n";


	return 0;
}


	double a = 0;
	double b = 0;

	if (a == b)
	{
		std::cout << 1;
	}

	std::cin >> a;
	std::cin >> b;

	std::cout << a << "\n" << b << "\n";

		double dollar = 85.7 * 0.95;
	double euro = 99.8 * 0.95;
	double cny = 12.8 * 0.95;
	double farit = 14.25 * 0.95;


	std::cout << "Решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";
	std::cout << "Введите A: ";
	std::cin >> a;
	std::cout << "Введите B: ";
	std::cin >> b;
	std::cout << "Введите C: ";
	std::cin >> c;

	std::cout << a << "x^2 + " << b << "x + " << c << " = 0\n\n ";

	d = std::pow(b, 2) - 4 * a * c;
	std::cout << "Дискриминант: " << d << "\n\n";

	if (d < 0)
	{
		std::cout << "Корней нет!";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень: " << x1 << "\n";
	}
	else
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b - std::sqrt(d)) / (2 * a);
		std::cout << "Первый корень: " << x1 << "\n";
		std::cout << "Второй корень: " << x2 << "\n";
	}
	return 0;










	int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int choose = 0, hp = 0, number = 0, randomNumber = 0;
	int maxHp = 25, maxHpHard = 25;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\tИгра \"Угадай число\"\n\n\n";
		std::cout << "1 - Начать игру\n";
		std::cout << "2 - Настройки\n";
		std::cout << "0 - Выход \n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tВыберите уровень сложности\"\n\n\n";
				std::cout << "1 - Легкий (1 - 500)\n";
				std::cout << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;

					while (true)
					{
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 500:";
						std::cin >> number;
						if (number == randomNumber)
						{
							std::cout << "Вы угадали! Поздравялем\n";
							system("pause");
							break;
						}

						else if (number < 1 || number > 500);
						{
							std::cout << "Вы вышли за лимиты\n";
							Sleep(1200);
						}
		else if (choose == 2)
		{
			while (true)
			{
				systen("cls");
				std::cout << "\n\n\n\t\tНастройки игры\"\n\n\n";
				std::cout << "1 - Изменить кол-во жизней для легкой игры\n";
				std::cout << "2 - Изменить кол-во жизней для сложной игры\n";
				std::cout << "3 - Изменить шанс бесплатной подсказки\n";
				std::cout << "\n\n\n\t\tНастройки игры\"\n\n\n";
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
			break;
		}
		else
		{
			std::cout << "\nНекорректный ввод\n\n";
			Sleep(1500);
		}





	}






	return 0;
}

*/














