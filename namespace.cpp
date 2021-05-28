#include <iostream>
using namespace std;
namespace n1 {
    int value = 100;
    int val(){return value;}
}

namespace n2 {
    double value =200.55;
    double val(){return value;}
}

char value[10] = "Hello";

int main() {
	cout<<n1::value<<endl;
	cout<<n1::val()<<endl;
	cout<<n2::value<<endl;
	cout<<n2::val()<<endl;
	cout<<value<<endl;
	return 0;
}