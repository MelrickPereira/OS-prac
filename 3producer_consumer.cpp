#include <iostream>
#include <conio.h>
#include <queue>

using namespace std;

int main()
{
    int p=-1,c=-1,n;

    cout<<"Enter size: ";
    cin>>n;
    queue<char> result;
    char* seq = new char[n];
    for (int i = 0; i < n; i++)
    {
        cin>>seq[i];
    }

    for (int j = 0; j < n; j++)
    {
        if(seq[j] == 'P' || seq[j] == 'p'  )
        {
             p++;result.push('P');
        }
        else if(seq[j] == 'C' || seq[j] == 'c'  )
        {
             c--; result.pop();
        }
        if(c>p)
        {
            cout<<"No producer to consume";
            exit(1);
        }       
    }
        queue<char> temp = result;
        while (!temp.empty()) {
        cout << temp.front()<<" ";
        temp.pop();
        }
        cout << '\n';
    
    
    _getch();
}