//Этот проект создан с помощью классического шаблона
#include <iostream>
#include <string>
#include <cmath>
struct movies {
	std::string title;
	int year;
	std::string genre;
	unsigned int duration;
	unsigned int price;
} m1{ "About hockey", 1980, "Biography", 120, 20 },
m2{"Travel around the world", 2000, "Traveling", 100, 25},
m3{"Predator", 1990, "Action", 100, 15}
;


void show_movie(movies& P) {
	std::cout << "Title: " << P.title << '\n';
	std::cout << "Year of production: " << P.year << '\n';
	std::cout << "Genre: " << P.genre << '\n';
	std::cout << "Duration: " << P.duration << '\n';
	std::cout << "Price: " << P.price<< '\n';
}

movies expensive(movies &P1, movies& P2, movies& P3) {
	
	if (P1.price > P2.price && P1.price > P3.price)
		return m1;
	else
		if (P2.price > P1.price && P2.price > P3.price)
			return m2;
		else
			return m3;
}

void update_info(movies& P) {
	int n;
	std::string title_update;
	int year_update;
	std::string genre_update;
	unsigned int duration_update;
	unsigned int price_update;

	std::cout << "Выберите, какую информацию о фильме необходимо обновить : ";
	std::cout << "1. Название.\n";
	std::cout << "2. Год выхода.\n";
	std::cout << "3. Жанр.\n";
	std::cout << "4. Продолжительность.\n";
	std::cout << "5. Цена за диск.\n";

	std::cin >> n;
	switch (n) {
	case 1:
		std::cout << "Введите новое название: \n";
		std::cin >> title_update;
		P.title = title_update;
		std::cout << "Информация обновлена.\n";
		break;

	case 2:
		std::cout << "Введите новый год выхода: \n";
		std::cin >> year_update;
		P.year = year_update;
		std::cout << "Информация обновлена.\n";
	case 3:
		std::cout << "Введите новый жанр: \n";
		std::cin >> genre_update;
		P.genre = genre_update;
		std::cout << "Информация обновлена.\n";

	case 4:
		std::cout << "Введите новую продолжительность: \n";
		std::cin >> duration_update;
		P.duration = duration_update;
		std::cout << "Информация обновлена.\n";

	case 5:
		std::cout << "Введите новую цену за диск: \n";
		std::cin >> price_update;
		P.price = price_update;
		std::cout << "Информация обновлена.\n";



	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int m, n;


	

	std::cout << "Task 1: Функция  show_movie.\n";
	show_movie(m1);

	std::cout << "Task 2: Функция  expensive.\n";
	expensive(m1, m2, m3);

	std::cout << "Task 3. Функция update_info.\n";
	update_info(m1);
	show_movie(m1);



















	return 0;
}