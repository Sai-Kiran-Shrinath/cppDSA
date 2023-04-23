# include <bits/stdc++.h>
using namespace std;

void pattern1(int n) {

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << '\n';
    }
}

void pattern2(int n) {

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << '\n';
    }
}

void pattern3(int n) {

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << '\n';
    }
}

void pattern4(int n) {

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << '\n';
    }
}

void pattern5(int n) {

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i + 1; j++) {
            cout << "* ";
        }
        cout << '\n';
    }
}

void pattern6(int n) {

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        cout << '\n';
    }
}

void pattern7(int n) {

    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++) {
            cout << "  ";
        }
        for(int j = 1; j < 2 * i; j++) {
            cout << "* ";
        }
        cout << '\n';
    }
}

void pattern8(int n) {

    for(int i = 1; i <= n; i++) {
        for(int s = 1; s < i; s++) {
            cout << "  ";
        }
        for(int j = 1; j < 2 * (n - i + 1); j++) {
            cout << "* ";
        }
        cout << '\n';
    }
}

void pattern9(int n) {

    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++) {
            cout << "  ";
        }
        for(int j = 1; j < 2 * i; j++) {
            cout << "* ";
        }
        cout << '\n';
    }

    for(int i = 1; i < n; i++) {
        for(int s = 1; s <= i; s++) {
            cout << "  ";
        }
        for(int j = 1; j < 2 * (n - i); j++) {
            cout << "* ";
        }
        cout << '\n';
    } 
}

int main() {
    
    int n = 5;

    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    pattern9(n);

    return 0;
}