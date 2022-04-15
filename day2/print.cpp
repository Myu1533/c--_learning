#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int i, j, k, f;
    for (i = 1; i <= 4; i++) {
        for ( j = 1; j <= 30; j++ ) 
            cout<<" ";
        for (k = 1; k <= 4 - i; k++)
            cout<<" ";
        for (f = 1; f <= i * 2; f++)
            cout<<"*";
        cout<<endl;
    }

    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 30; j++)
            cout<<" ";
        for(k = 1; k <= i; k++)
            cout<<" ";
        for(f = 1; f <= 8 - 2 * i; f++)
            cout<<"*";
        cout<<endl;
    } 
    system("pause");
    return 0;
}