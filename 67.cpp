#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter your string ";
    cin >> s;
    int c = 0;
    for (char i : s)
    {
        if (i == '1' || i == '2' || i == '3' | i == '4' || i == '5' || i == '6' || i == '7' || i == '8' || i == '9' || i == '0')
        {
            c = 0;
            char k;
            for (char j : s)
            {
                if (j == i)
                {
                    k = j;
                    c++;
                }
            }
            cout << k << " occurs " << c << " times" << endl;
        }
    }
}
