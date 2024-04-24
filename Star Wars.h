// Star Wars.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include <iostream>
#include <string>
#include <httplib.h>
#include <nlohmann/json.hpp>
using namespace std;

class StarWarsApp {
	std::string peopleReq = "/api/people/";
	std::string planetReq = "/api/planets/";
	std::string filmReq = "/api/films/";
    httplib::Client* starClient = new httplib::Client("https://swapi.dev");
	std::string person;
	std::string planet;
	std::string mass;
	std::string height;
	std::string hair_color;
	std::string eye_color;
	std::string birth_year;
	std::string gender;
	std::string films;
	std::string climate;
	std::string diameter;
	std::string gravity;
	std::string name;
	std::string orbital_period;
	std::string population;
	std::string residents;
	std::string title;
	std::string created;
	std::string edited;
	std::string director;
	std::string producer;
	std::string release_date;
	std::string episode_id;
	std::string characters;
};

// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
