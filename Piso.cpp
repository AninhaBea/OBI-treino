#include <iostream>
using namespace std;

int main(){
    int l, h, L1 = 0, L2 = 0;
    cin >> l >> h;
    L1 = l*h + (l-1)*(h-1);
    L2 = 2*(h-1) + 2*(l-1);

    cout << L1 << endl << L2;

    return 0;
}