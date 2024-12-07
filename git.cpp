#include <iostream>
using namespace std;

void world();

int main () {
    cout << "Hello world!" << endl;
    cout << "---------------------------" << endl;
    cout << "|                         |" << endl;
    cout << "|" << world() << "                        |" << endl;
    cout << "|                         |" << endl;
    cout << "---------------------------" << endl;
}

void world()
{
    cout << "Hello";
}