#include <iostream>

int main()
{
	const char *questions[] = {"In which year did SpaceX land their first Flacon 9 first booster?",
			"In the film \"Clue\", what is the order for number of bullets shot from the revolver",
			"Which keyboard layout does not exist?",
			"Which company created the product that would become MS-DOS?",
			"What is the airspeed velocity of an unladen swallow?"};
	const char *answers[][3] = {{"2014", "2015", "2016"},
			{"1 + 1 + 2 + 1", "1 + 2 + 1 + 1", "1 + 2 + 2 + 1"},
			{"azerty", "acip", "dvorak"},
			{"Microsoft", "IBM", "Seattle Computer Products"},
			{"30 MPH", "15 MPH", "African or European?"}};
	const unsigned char correct[] = {2, 1, 2, 3, 3};
	unsigned short correct_count = 0;
	const unsigned short total = 5;

	for (int i = 0; i < total; i++) {
		std::cout << questions[i] << "\n";
		for (int j = 0; j < 3; j++)
			std::cout << j + 1 << ". " << answers[i][j] << "\n";

		std::cout << "> ";

		int answer;
		std::cin >> answer;
		std::cin.ignore(INT_MAX, '\n');
		if (answer == correct[i]) {
			std::cout << "Correct!\n\n";
			correct_count++;
		} else {
			std::cout << "Incorrect.\n\n";
		}
	}

	std::cout << "You got " << correct_count << "/" << total << " answers correct.\n";
}