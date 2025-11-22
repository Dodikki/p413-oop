
#include <iostream>

class Student {
public:
    int year;
    std::string  name;
    int curs;

    

    void print() {
        std::cout << "Name: " << name << "\n"
            << "Year: " << year << "\n"
            << "Curs :" << curs << std::endl
            << std::endl;
    }
};

class Asperatn : public Student {
public:
    bool complited;

    

    void complitedProject() {
        if (complited = 1) {
            std::cout << "Project comlited" << std::endl;
        }
        else {
            std::cout << "Project not comlited" << std::endl;
        }
    }

};

int main() {
    Student s1;

    s1.year = 1;
    s1.name = "Tim";
    s1.curs = 3;
    s1.print();


    Asperatn w1;

    w1.year = 2;
    w1.name = "Tom";
    w1.curs = 3;
    w1.complited = true;
    w1.print();
    w1.complitedProject();

}