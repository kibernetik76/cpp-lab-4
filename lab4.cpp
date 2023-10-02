#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");
    int n;
    cin >> n;
    long* massiv = new long[n];
    for (int i = 0; i <= n; i++) { 
        massiv[i] = i+1;
      
    }
    int sum_prog = ((n + 1)*n)/2;
    if (sum_prog % 2 !=0)
        cout << "NO" << endl;
    else {
        if (n % 4 == 0) {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i = 0; i < (n / 2); i = i + 2)
                cout << massiv[i] << ", " << massiv[n - i - 1] << ", ";
            cout << endl;
            cout << n / 2 << endl;
            for (int i = 1; i < (n / 2); i = i + 2)
                cout << massiv[i] << ", " << massiv[n - i - 1] << ", ";

        }
        if ((n + 1) % 4 == 0) {
            cout << "YES" << endl;
            cout << n / 2 + 1<< endl;
            for (int i = 0; i < (n / 2); i = i + 2)
                cout << massiv[i] << ", " << massiv[n - i - 2] << ", ";
            cout << endl;
            cout << n / 2 << endl;
            for (int i = 1; i < (n / 2); i = i + 2)
                cout << massiv[i] << ", " << massiv[n - i - 2] << ", ";
            cout << massiv[n - 1];   
        }
        }
    return 0;
}