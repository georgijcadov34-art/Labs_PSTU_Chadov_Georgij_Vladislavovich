#include <iostream>
using namespace std;

int main()
{
    int h{1}, pos{0};
    char ar[] = {' ', '1', '1', '+', '1', '1', ' ', '\0'};
    char al[] = {' ', '1', '+'};

    while (h && ar[pos] != '\0') 
    {
        if (h == 1) 
        {
            if (ar[pos] == al[2]) 
            {
                ar[pos] = al[0];
                h = 2;
                pos += 1;
            }
            else 
            {
                pos += 1;
            }
        }
        else if (h == 2) 
        {
            if (ar[pos] == al[1]) 
            {
                if (pos > 0) { 
                    ar[pos - 1] = al[1];
                }
                ar[pos] = al[0];
                pos += 1;
            }
            else 
            {
                h = 0;
            }
        }
    }
    
    cout << "answer: " << ar << endl;  
    return 0;
