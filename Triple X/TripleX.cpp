#include <iostream>
#include <ctime>

    void PrintIntroduction(int Difficulty)
    {
        std::cout << "\nBienvenido a la Interfaz\n";
        std::cout << "Su codigo de agente es: 4457XLR\n\n";
        std::cout << "//+ Mensaje: Dada la situacion actual debemos ingresar a la base de datos del anemigo,\n";
        std::cout << "se que eres el mejor en tu trabajo pero ten cuidado, si triangulan tu posicion no tendras donde ir,\n";
        std::cout << "busca los codigos de acceso y usa el programa TRIPLEX para decodificarlos.\n";
        std::cout << "Suerte. Atte: Comandante H.\n\n";
        std::cout << "El nivel de intrucion es: " << Difficulty << std::endl;
    }

    void PrintLevel(int Difficulty)
    {
        std::cout << "//...Firewall detectado necesario ingresar clave de pase...";
        std::cout << "El nivel de intrucion es: " << Difficulty << std::endl;
        std::cout << "\n";
    }



bool PlayGame(int Difficulty)
{
    if (Difficulty <= 1) 
    {
        PrintIntroduction(Difficulty);
    } else{
        PrintLevel(Difficulty);
    }

    //Declaracion de variables
    //Usando funcion rand() mas modulo para dificultad
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    //Suma y multiplicacion de variables
    const int CodeSum = CodeA+CodeB+CodeC;
    const int CodeMult = CodeA*CodeB*CodeC;

    //Strings de Bienvenida
    std::cout <<"//Proceso de intrusion exitoso...\n//Ingresando al sistema...\n//[ERROR]...\n//Para iniciar al sistema debe ingresar clave de 3 dijitos...";
    std::cout <<"\n\n//PROGRAMA DE INTRUCION TRIPLEX CODIFICANDO...\n";
    std::cout << "\n+ La suma del codigo es igual a: "<< CodeSum;
    std::cout << "\n+ El producto del codigo es igual a: " << CodeMult << std::endl;

    //Declarando variables de intentos
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessMult = GuessA*GuessB*GuessC;

    //Set up Condicionales
    if (GuessSum==CodeSum && GuessMult==CodeMult)
    {
        std::cout << "\n//Exito!..Redirigiendo al sistema...\n";
        return true;
    } 
    else
    {
        std::cout << "\n//[ERROR] Intente nuevamente...\n";
        return false;
    }
}

int main()
{
    srand(time(NULL)); //Crea una secuencia random en ralcion al horario de la pc

    int LevelDifficulty = 1;
    const int MaxLevelDifficulty = 5;

    while (LevelDifficulty <= MaxLevelDifficulty) //Hasta que todos los niveles esten completos
    {
        bool bLevelCompleted = PlayGame(LevelDifficulty);
        std::cin.clear(); //Limpia errores
        std::cin.ignore();//Discard the buffer

        if (bLevelCompleted)
        {
            ++ LevelDifficulty;
        }
        
    }
    
    std::cout << "//Intrucion exitosa los archivos se estan descargando a la base de datos del sistema de la compania...\n";
    std::cout << "//Gran trabajo!..";
    
    return 0;
}