#include <iostream>
#include <limits>

using namespace std;
template<class T1, class T2>
class Info {
public:
	T1 i;
	Info(T1 i) {
		this->i = i;
	}

	void init() {

		cout << i << " Type: " << typeid(i).name() << " Size : " << sizeof(i) << endl;
		cout << "Range: " << numeric_limits<T1>::min() << ", " << numeric_limits<T1>::max() << endl;
		// Нашёл в интернете интересную библиотеку, благодаря которой очень просто можно вывести минимальные и максимальные диапазоны переменных.
		// Надеюсь, так можно:)
	}
	
};

int main()
{

	Info<int, string> g(10);
	g.init();

}
