#include <iostream>

class Book {
private:
    std::string author;
    std::string name;
    std::string publishion_house;
    int year;
    int pages;

public:
    explicit Book(std::string a, std::string n, std::string p_b, int y, int p) : author(a), name(n), publishion_house(p_b), year(y), pages(p) {}

    const std::string& getAuthor() const { return author; }
    const int getYear() const { return year; }
    const std::string& getPublisher() const { return publishion_house; }

    void showBook() const {
        std::cout << "Автор: " << author << "\n"
            << "Название: " << name << "\n"
            << "Издательство: " << publishion_house << "\n"
            << "Год: " << year << "\n"
            << "Страниц: " << pages << "\n"
            << "__________________\n";
    }

    
    static void showBookToAuthor(const Book list[], int size, const std::string& author) {
        std::cout << "Книги автора " << author << std::endl;
        for (int i = 0; i < size; i++) {
            if (list[i].getAuthor() == author) {
                list[i].showBook();
            }
        }
    }

    static void showBookListYear(const Book list[], int size, int year) {
        std::cout << "Книги, выпущенные после " << year << " года:\n";
        for (int i = 0; i < size; i++) {
            if (list[i].getYear() > year) {  
                list[i].showBook();
            }
        }
    }

    static void showPulishHouse(const Book list[], int size, const std::string& publishion_house) {
        std::cout << "Книги издательства " << publishion_house << ":\n";
        for (int i = 0; i < size; i++) {
            if (list[i].getPublisher() == publishion_house) {
                list[i].showBook();
            }
        }
    }
};

int main() {
    setlocale(LC_ALL, "RU");

    Book b("Tolya", "Big Bob", "Piter", 2001, 102);
    Book b1("Artem", "Zhorik339", "Piter", 2010, 300);
    Book b2("Artem", "Ztnik", "Piter", 2010, 300);

    const int size = 3;
    Book list[size] = { b, b1, b2 };

   
    Book::showBookToAuthor(list, size, "Tolya");


    Book::showPulishHouse(list, size, "Piter");


    Book::showBookListYear(list, size, 2008);

    return 0;
}

