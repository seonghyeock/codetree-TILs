#include <iostream>

using namespace std;

int main() {
    cout<<fixed;
    cout.precision(1);

    double x=9.2;
    double y=1.3;

    cout<<x<<"ft = "<<x*30.48<<"cm\n";
    cout<<y<<"mi = "<<y*160934<<"cm\n";
    return 0;
}