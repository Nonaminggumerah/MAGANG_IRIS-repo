#include <iostream>
using namespace std;
class YoursClass {
	public:
    YoursClass(int a, int b) {
        cout<<a+b<<endl;
    }};

int main() {
    int a,b; cin>>a>>b;
    YoursClass myObj (a, b);
    return 0;
}
