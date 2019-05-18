#include "cfer19.cpp"
using namespace cfer_Console;

int main(int argc, pchar argv[])
begin
    cfer_Console::Println("hola");
    cfer_Console::Print("escribe una letra: ");
    char letra = cfer_Console::Readkey();
    cfer_Console::Println("la letra puesta es ");
    string sletra ;
    sletra+= letra;
    cfer_Console::Println(sletra);

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
end

