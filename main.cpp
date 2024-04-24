#include "Star Wars.h"

using namespace std;

int main()
{
	using json = nlohmann::json;

	httplib::Client* starClient = new httplib::Client("https://swapi.dev");

	class StarWarsApp {
		void showMenu() {
			std::cout << "1 - Information about people " << std::endl;
			int choice;
			std::cout << "2 - Information about planets " << std::endl;
			int choice1;
			std::cout << "3 - Information about films " << std::endl;
			int choice2;
			std::string starClient;
			bool flag = true;
		}
	};
}

