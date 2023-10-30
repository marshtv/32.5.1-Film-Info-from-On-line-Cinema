#include <iostream>
#include <string>
#include <fstream>
#include "nlohmann/json.hpp"

struct Actor_Hero {
	std::string actor;
	std::string hero;
};

struct Film_info {
	std::string title;
	int year = 1900;
	std::string country;
	std::string cinema_studio;
	std::string genre_1;
	std::string genre_2;
	std::string genre_3;
	std::string director;
	std::string writer_1;
	std::string writer_2;
	std::string writer_3;
	std::string producer_1;
	std::string producer_2;
	std::string producer_3;
	std::string producer_4;
	Actor_Hero main_hero_1;
	Actor_Hero main_hero_2;
	Actor_Hero main_hero_3;
};

int main() {
	Film_info ace_ventura;
	std::ofstream file("record.json");

	ace_ventura.title = "Ace Ventura: Animal Detective.";
	ace_ventura.year = 1993;
	ace_ventura.country = "USA";
	ace_ventura.genre_1 = "Comedy";
	ace_ventura.genre_2 = "Detective";
	ace_ventura.genre_3 = "Adventure";
	ace_ventura.director = "Tom Shadyac";
	ace_ventura.writer_1 = "Tom Shadyac";
	ace_ventura.writer_2 = "Jim Carrey";
	ace_ventura.writer_3 = "Jack Bernstein";
	ace_ventura.producer_1 = "Gary Barber";
	ace_ventura.producer_2 = "Peter Bogart";
	ace_ventura.producer_3 = "Bob Israel";
	ace_ventura.producer_4 = "James G. Robinson";
	ace_ventura.main_hero_1.actor = "Jim Carrey";
	ace_ventura.main_hero_1.hero = "Ace Ventura";
	ace_ventura.main_hero_2.actor = "Sean Young";
	ace_ventura.main_hero_2.hero = "Einhorn";
	ace_ventura.main_hero_3.actor = "Courteney Cox";
	ace_ventura.main_hero_3.hero = "Melissa";

	nlohmann::json main_hero_1_dict = {
		{"Main actor", ace_ventura.main_hero_1.actor},
		{"Main hero", ace_ventura.main_hero_1.hero}
	};
	nlohmann::json main_hero_2_dict = {
		{"Main actor", ace_ventura.main_hero_2.actor},
		{"Main hero", ace_ventura.main_hero_2.hero}
	};
	nlohmann::json main_hero_3_dict = {
		{"Main actor", ace_ventura.main_hero_3.actor},
		{"Main hero", ace_ventura.main_hero_3.hero}
	};
	nlohmann::json ace_ventura_dict = {
		{"Title", ace_ventura.title},
		{"Year", ace_ventura.year},
		{"Country", ace_ventura.country},
		{"Studio", ace_ventura.cinema_studio},
		{"Genre 1", ace_ventura.genre_1},
		{"Genre 2", ace_ventura.genre_2},
		{"Genre 3", ace_ventura.genre_3},
		{"Director", ace_ventura.director},
		{"Writer 1", ace_ventura.writer_1},
		{"Writer 2", ace_ventura.writer_2},
		{"Writer 3", ace_ventura.writer_3},
		{"Producer 1", ace_ventura.producer_1},
		{"Producer 2", ace_ventura.producer_2},
		{"Producer 3", ace_ventura.producer_3},
		{"Producer 4", ace_ventura.producer_4},
		{"Main Hero 1", main_hero_1_dict},
		{"Main Hero 2", main_hero_2_dict},
		{"Main Hero 3", main_hero_3_dict}
	};

	file << ace_ventura_dict;
	file.close();
}