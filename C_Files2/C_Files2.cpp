#include <iostream>
#include <fstream>
using namespace std;

//(1)=====================================================
//int main()
//{
//    ifstream in("txt1.txt");
//
//    if (in.is_open())
//    {
//        int count = 0;
//        char ch;
//        string word;
//
//        cout << "Enter first symbol: "; 
//        cin >> ch;
//
//        while (in >> word)
//        {
//            if (word[0] == ch) count++;
//        }
//
//        cout << "Words: " << count << "\n";
//
//        in.close();
//    }
//
//    else
//    {
//        cout << "NOT OPEN";
//    }
//}
//========================================================


//(2)=====================================================
int main()
{
    ifstream in("txt1.txt");
    ofstream out("txt2.txt");

    if (in.is_open() && out.is_open())
    {
        char ch;

        while (in.get(ch))
        {
            if (ch == '0')
            {
                out << '1';
            }

            else if (ch == '1')
            {
                out << '0';
            }

            else if (ch == '\n')
            {
                out << '\n';
            }
        }

        cout << "MISSION COMPLETE";

        in.close();
        out.close();
    }

    else
    {
        cout << "NOT OPEN";
    }
}
//========================================================