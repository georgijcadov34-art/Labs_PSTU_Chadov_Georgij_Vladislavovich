#include <iostream>
using namespace std;

int main()
{
    int h{1}, pos{1}; 
    
    char ar[] = {' ', '1', '0', '1', '1', ' ', '\0'}; 
    
    char al[] = {'0', '1', ' '}; 

    while (h != 0) 
    {
        if (h == 1)
        {
            if (ar[pos] == al[0])
            {
                ar[pos] = al[1]; 
                pos += 1;
            }
            else if (ar[pos] == al[1])
            {
                ar[pos] = al[0]; 
                pos += 1;
            }
            else if (ar[pos] == al[2])
            {
                h = 0; 
            }
        }
    }
    
    cout << "answer: \n" << ar;
    return 0;
}