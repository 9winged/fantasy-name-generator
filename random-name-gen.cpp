#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
	std::string userName;

	//ask user for his actual name
	std::cout << "What is your actual name? \n";
	//user input
	std::cin >> userName;


	//Vector is better for this situation than arrey 
	// cuz its changeable later on
	std::vector<std::string> nameList = 
	{ 
		"the wild",
		"the Strong",
		"the Brave",
		"the Wise",
		"the Clown",
		"the Untamed",
		"the Wanderer",
		"the Whisperer",
		"the Stormborn",
		"the Dragonslayer",
		"the Arcane",
		"the Shadow",
		"the Wilderer",
		"the Moonlit",
		"the Oathsworn",
		"the Steadfast",
		"the Silversong",
		"the Dawnblade",
		"the Everdawn",
		"the Whisperwind",
		"the Nightsinger",
		"the Forgeborn",
		"the Farseer",
		"the Kinless",
		"the Oathbreaker",
	};

	//seed the random number generator (optional, 
	//sicherstellen das es wirklich random ist)
	srand(time(nullptr));

	//genrate a random index within the array bounds
	// +1 (to the vector size) make it less likely to pick the same name
	int randomIndex = rand() % (nameList.size() + 1);
	
	//pick the name at the random index
	std::string randomName = nameList[randomIndex];

	std::cout << "Welcome to the Jungle, " << userName << " " << randomName << "!";
}