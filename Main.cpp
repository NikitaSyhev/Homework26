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
} m1{ "About hockey", 1980, "Biography", 120, 20 };


void show_movie(movies& P) {
	std::cout << "Title: " << P.title << '\n';
	std::cout << "Year of production: " << P.year << '\n';
	std::cout << "Genre: " << P.genre << '\n';
	std::cout << "Duration: " << P.duration << '\n';
	std::cout << "Price: " << P.price<< '\n';
}




int main() {
	setlocale(LC_ALL, "Russian");
	int m, n;


	

	std::cout << "Task 1: Функция  show_movie.\n";
	show_movie(m1);


















	return 0;
}