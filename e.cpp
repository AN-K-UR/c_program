#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    char start = 'A';
    int jj = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            start = 'A' + jj - 1;
            cout << start << " ";
            start++;
            j++;
            jj++;
        }
        cout << endl;
        i++;
    }
}