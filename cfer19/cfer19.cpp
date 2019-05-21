#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>
using namespace std;

#define public public:
#define private private:
#define protected protected:
#define begin {
#define in :
#define end }
#define butif }else if
#define is ==
#define using using namespace
#define __ ::

#define Main main
#define pchar char *



namespace cfer_Console{

    /// <summary>
    /// Metodo para pintar en consola una linea
    /// </summary>
    /// <param name="text" />
    /// <returns></return>
    inline void Println(string text){
        cout << text << endl;
    }

    /// <summary>
    /// Metodo para pintar en consola
    /// </summary>
    /// <return />
    inline void Print(string text){
        cout << text << endl;
    }

    inline string Readln(){
        string input2 = "";
        getline(cin, input2);
        return input2;
    }

    inline char Readkey(){
        string str = "";
        char letter = ' ';
        fflush(stdout);
        getline(cin, str);

        for (int i=0; i<str.length(); ++i)
          {
            std::cout << str[i] << endl;
          }

        if(str.length() >= 1 )
        {
            cout << str << endl;
            letter = str.at(0);
        }
        return letter;
    }
};

namespace cfer_Convert{
    inline string ToString(char characteres[]){
        string keys ;
        keys+= characteres;
        return keys;
    }

    static string ToString(int number){
        string keys ;
        keys+= number;
        return keys;
    }
};
