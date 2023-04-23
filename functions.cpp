# include <bits/stdc++.h>
using namespace std;

void funPassByVal(int a, string s) {
    
    a += 4;
    cout << a << " a funPassByVal\n";

    s[2] = '_';
    cout << s << " s funPassByVal\n";

}

void funPassByRef(int &a, string &s) {
    
    a += 4;
    cout << a << " a funPassByRef\n";

    s[2] = '_';
    cout << s << " s funPassByRef\n";

}

int main() {

    int a = 4;
    string s = "sks";

    funPassByVal(a, s);
    cout << a << ' ' << s << " Main\n";

    funPassByRef(a, s);
    cout << a << ' ' << s << " Main after PassByRef\n";

    return 0;
}