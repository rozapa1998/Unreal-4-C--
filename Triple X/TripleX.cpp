#include <iostream>

int main()
{
    //Strings de Bienvenida
    std::cout <<"//Sistema de intrusion exitoso...";
    std::cout << std::endl;
    std::cout << "//Ingresando al sistema...";
    std::cout << std::endl;
    std::cout << "//[ERROR]...";
    std::cout << std::endl;
    std::cout << "//Para iniciar al sistema debe ingresar clave de 3 dijitos...";

    //Declaracion de variables
    const int CodeA = 2;
    const int CodeB = 3;
    const int CodeC = 7;

    //Suma y multiplicacion de variables
    const int CodeSum = CodeA+CodeB+CodeC;
    const int CodeMult = CodeA*CodeB*CodeC;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "//PROGRAMA DE INTRUCION TRIPLEX CODIFICANDO..."<< std::endl;
    std::cout << "+ Ea suma del codigo es igual a: "<< CodeSum << std::endl;
    std::cout << "+ El producto del codigo es igual a: " << CodeMult << std::endl;

    int PlayerGuess;
    
    
    return 0;
}