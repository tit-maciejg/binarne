#include <iostream>
#include <fstream>
#include <string>

using namespace std;
bool sprawdz1 (string s)
{
    int obl=0;
    for (int i=0; i<s.size(); i++)
        if (s[i]=='0') ++obl;
        else --obl;
    if (obl>0) return true;

    return false;
}
int main()
{

    ifstream dane("liczby.txt");
    if(dane.is_open())
    {
        string lb;
        int licz=0;
        for(int i=0; i<1000; i++)
        {
            dane>>lb;
            if(sprawdz1(lb)) ++licz;
        }
        cout << "Liczby binarne z wieksza iloscia zer " << licz << endl;
        dane.close();

    }



    return 0;
}


