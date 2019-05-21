#include "cfer19.cpp"
using cfer_Console;


int __init__(vector<string> args)
begin
    cfer_Console::Println("hola");
    /*cfer_Console::Print("escribe una letra: ");
    char letra = cfer_Console::Readkey();
    cfer_Console::Println("la letra puesta es ");
    string sletra ;
    sletra+= letra;
    cfer_Console::Println(sletra);*/

        cfer_Convert::ToString(2);
    bool falso = false;

    if(falso is true)
    begin
        cfer_Console::Println("es verdadero");
    butif (falso is false) begin
        cfer_Console::Println("es falso");
    end
    else begin
        cfer_Console::Println("otro");
    end

    if (not falso) begin
        cfer_Console::Println("verdadero");
    end

 cout << args[0] << endl;

end




int Main(int argc, char *argv[])
begin
    vector<string> args;
    for(int i=0; i<argc; i++){
        cout << "[" << i << "] " << argv[i] << endl;
        args.push_back(argv[i]);
    }


    /*string a = cfer_Convert::ToString( argv[0]);
    cout << a << "_____";*/
    cout << sizeof(&argv) << "  argc " << argc ;
    __init__(args);
end

