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

update_info(m1);

int main() {
	setlocale(LC_ALL, "Russian");
	int m, n;


	

	std::cout << "Task 1: Функция  show_movie.\n";
	show_movie(m1);

	std::cout << "Task 2: Функция  expensive.\n";
	expensive(m1, m2, m3);

	std::cout << "Task 3. Функция update_info.";
	



















	return 0;
}