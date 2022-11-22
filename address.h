#pragma once
#include <iostream>
#include <fstream>

class address {
private:
	std::string city;
	std::string street;
	int home;
	int apartment;

public:
	address() {
		city = "city";
		street = "street";
		home = 0;
		apartment = 0;
	}

	void full(std::ifstream& file) {
		file >> city;
		file >> street;
		file >> home;
		file >> apartment;
		file.clear();
	}

	void get_output_address(std::ofstream& out) {
		out << city; out << ", ";
		out << street; out << ", ";
		out << home; out << ", ";
		out << apartment; out << "\n";
	}
};