
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>
using namespace std;

#define public public:
#define in :
#define pchar char *


class Persona{


    public void uno(){
        std::cout << "uno";
    }
};

int main(int argc, pchar argv[]){
    Persona p;
    p.uno();
    std::cout << "hola"<< endl;
    for(int i=0; i< argc; i++){
        cout << argv[i] << endl;
    }

    //listados
    vector<string> listado ;
    listado.push_back("uno");
    listado.push_back("dos");

    cout << "imprimir listado" << endl;
    cout << "posicion cero: "<< listado[0] << endl;
    for(string str in listado){
        cout << str << endl;
    }

    if(find(listado.begin(), listado.end(), "uno") != listado.end()){
        cout << "contiene el elemento"<< endl;
    }

    //diccionarios
    std::map <string, char> grade_list;
    grade_list["John"] = 'A';
    if(grade_list.find("Tim") == grade_list.end())
    {
        std::cout<<"Tim is not in the map!"<<endl;
        cout << grade_list["John"] << endl;
        grade_list["John"] = 'H';
        cout << grade_list["John"] << endl;
    }
}


