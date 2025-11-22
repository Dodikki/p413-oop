#include <iostream>
#include <vector>

using namespace std;

class Passport {
protected:
    string fullName;
    string dateOfBirth;
    string passportNumber;
public:
    Passport(const string name, const string birth, const string num)
        : fullName(name), dateOfBirth(birth), passportNumber(num) {
    }
    virtual void display() const {
        cout << "Name: " << fullName << "\nDOB: " << dateOfBirth
            << "\nPassport: " << passportNumber << endl;
    }
};

class ForeignPassport : public Passport {
private:
    string foreignNumber;
    vector<string> visas;
public:
    ForeignPassport(const string name, const string birth,
        const string num, const string& fNum)
        : Passport(name, birth, num), foreignNumber(fNum) {
    }
    void addVisa(const string visa) {
        visas.push_back(visa);
    }
    void display() const override {
        Passport::display();
        cout << "Foreign Passport: " << foreignNumber << "\nVisas: ";
        for (const auto& v : visas) cout << v << " ";
        cout << endl;
    }
};

int main() {
    Passport passport("Maria Sidorova", "15.03.1990", "123");
    ForeignPassport foreignPassport("Maria Sidorova", "15.03.1990", "1223", "12223");

    foreignPassport.addVisa("USA");
    foreignPassport.addVisa("Germany");

    cout << "Passport:\n";
    passport.display();
    cout << "\nForeign Passport:\n";
    foreignPassport.display();

    return 0;
}