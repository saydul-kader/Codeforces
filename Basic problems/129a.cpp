#include <iostream>

using namespace std;

int main()
{
    int n, a, o=0, e=0;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            e += 1;
        }
        else
        {
            o += 1;
        }
    }

    cout << (o % 2 == 1 ? o : e) << endl;
    return 0;
}

