#include <iostream>

class Employer {
protected:
	std::string name;
	int year;
	std::string lastname;

public:
	Employer(std::string n, std::string l, int y) : name(n), lastname(l), year(y) {}

	virtual void Print() const = 0;


};


class Prisident : Employer {
private:
	std::string role;
public:
	Prisident(std::string r, std::string n, std::string l, int y) :Employer(n, l, y), role(r) {}

	void Print() const override {
		std::cout << "Role : " << role << "\n"
			<< "Name: " << name << "\n"
			<< "Lastname: " << lastname << "\n"
			<< "Year: " << year << std::endl;
	}
};
class Manager : Employer {
private:
	std::string role;
public:
	Manager(std::string r, std::string n, std::string l, int y) :Employer(n, l, y), role(r) {}

	void Print() const override {
		std::cout << "Role : " << role << "\n"
			<< "Name: " << name << "\n"
			<< "Lastname: " << lastname << "\n"
			<< "Year: " << year << std::endl;
	}
};


class  Worker : Employer {
private:
	std::string role;
public:
	Worker(std::string r, std::string n, std::string l, int y) :Employer(n, l, y), role(r) {}

	void Print() const override {
		std::cout << "Role : " << role << "\n"
			<< "Name: " << name << "\n"
			<< "Lastname: " << lastname << "\n"
			<< "Year: " << year << std::endl;
	}
};

int main() {
	Worker w1("Work", "Gorge", "Terov", 5);
	w1.Print();

}