#include <iostream>
using namespace std;

class singleton
{
    private:
	static singleton* A;
	singleton();
	singleton(const singleton&);
	singleton& operator=(const singleton&);

    public:
	static singleton* getInstance();
};

singleton::singleton(){}
singleton::singleton(const singleton&){}
singleton& singleton::operator=(const singleton&){}
singleton* singleton::A = new singleton();
singleton* singleton::getInstance() {
		return A;
}


int main()
{
	cout<<"test singleton.\n";

	singleton* singleton1 = singleton::getInstance();
        singleton* singleton2 = singleton::getInstance();

	if (singleton1 == singleton2)
		cout<<"the object is the same.\n";
	return 1;
}
