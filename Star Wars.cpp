// Star Wars.cpp: определяет точку входа для приложения.
//

#include "Star Wars.h"

using namespace std;



int main()
{
	using json = nlohmann::json;

	httplib::Client* starClient = new httplib::Client("https://swapi.dev");

	int choice, choice1, choice2;
	bool flag = true;
	json resultPerson, resultPlanet, resultMass, resultHeight, resultHair_color, resultEye_color, resultBirth_year, resultGender, resultFilm;

	cout << "name of the person" << resultPerson["name"] << "planet of the person" << resultPlanet["homeworld"] << "mass of the person" << resultMass["mass"] << "height of the person" << resultHeight["height"] << "hair-color of the person" << resultHair_color["hair_color"] << "eye-color of the person" << resultEye_color["eye_color"] << "birth-year of the person" << resultBirth_year["birth_year"] << "gender of the persson" << resultGender["gender"] << "films of the person" << resultFilm["films"];

	json resultClimate, resultDiameter, resultGravity, resultName, resultOrbital_period, resultPopulation, resultResidents;

	cout << "climate of the planet" << resultClimate["climate"] << "diameter of the planet" << resultDiameter["diameter"] << "gravity of the planet" << resultGravity["gravity"] << "name of the planet" << resultName["name"] << "orbital period of the planet" << resultOrbital_period["orbital_period"] << "population of the planet" << resultPopulation["population"] << "residents of the planet" << resultResidents["residents"];

	json resultTitle, resultCreation, resultEdition, resultDirector, resultProducer, resultRelease_date, resultEpisodes, resultCharacters;

	cout << "title of the film" << resultTitle["title"] << "creation of the film" << resultCreation["created"] << "edition of the film" << resultEdition["edited"] << "director of the film" << resultDirector["director"] << "producer of the film" << resultProducer["producer"] << "release date of the film" << resultRelease_date["release_date"] << "episodes of the film" << resultEpisodes["episode_id"] << "characters of the film" << resultCharacters["characters"];
}                                                                      