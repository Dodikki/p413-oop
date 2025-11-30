#include <iostream>

template <typename T>
class Box {
public:
	T value;
	Box(T v) : value(v) {

		T get() const {
			return value;
		}
	}
};


int main() {
	Box<int> a(10);
	Box<std::string> b("Hello");

}