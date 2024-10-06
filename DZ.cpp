#include <iostream>
#include <windows.h>
using namespace std;

// структура 1: Компьютер
// задача: описать в деталях некий предмет 
/*struct Computer
{	
	string brand;          // марка компьютера
    string model;          // модель компьютера
    double processorSpeed; // скорость процессора в ГГц
    int ram;               // объем оперативной памяти в ГБ
    int storage;           // объем накопителя в ГБ
    string gpu;			   // модель видеокарты
};

int main() 
{
	int x;

	Computer computer;
	computer.brand = "HP";
	computer.model = "HP Zbook 15 G3";
	computer.processorSpeed = 2.6;
	computer.ram = 8;
	computer.storage = 91.3;
	computer.gpu = "Nvidia Quadro M1000M";

	cout << "Computer: " << computer.brand << ", " << computer.model << ", " << computer.processorSpeed << " GHz, RAM: " << computer.ram << " GB, GPU: " << computer.gpu << "\n";
}*/

// Структура 2

/*struct Manga
{
	string name;        // Название  
	string author;		// Автор
	double pages;		// Страницы
	int publication;	// год пупбликации
	int volumes;        // Количество Томов
	string genre;		// Жанр
};

int main()
{
	int x;

	Manga manga;
	manga.name = "Fullmetal Alchemist";
	manga.author = "Hiromu Arakawa";
	manga.pages = 178;
	manga.publication = 2001;
	manga.volumes = 27;
	manga.genre = "Adventure, Drama, Comedy";

	cout << "Manga: " << manga.name << ", " << manga.author << ", " << manga.pages << ", " << manga.publication << ", " << manga.volumes << ", " << manga.genre << "\n";
}*/

// Структура 3

struct Game
{
	string name;        // Название  
	string Publisher;	// Изадтель
	string Developer;	// Разработчик
	double time;		// Время на прохождение
	int publication;	// год пупбликации
	int achievements;   // Количество Достижений
	string genre;		// Жанр
};

int main()
{
	int x;

	Game game;
	game.name = "Metal Gear Solid 3: Snake Eater";
	game.Publisher = "Konami";
	game.Developer = "Hideo Kojima";
	game.time = 16;
	game.publication = 2004;
	game.achievements = 46;
	game.genre = "Stealth-Action";

	cout << "Game: " << game.name << ", " << game.Publisher << ", " << game.Developer << ", " << game.time << ", " << game.publication << ", " << game.achievements << ", " << game.genre << "\n";
}