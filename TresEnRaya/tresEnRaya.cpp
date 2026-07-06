#include <iostream>
#include <ctime>

void dibujarTablero(char *espacio);
void movimientoJugador(char * espacio, char jugador);
void movimientoOrdenador(char *espacio, char ordenador);
bool comprobarGanador(char *espacio, char jugador, char ordenador);
bool comprobarEmpate(char *espacio);

int main()
{

    char espacio[9] = {' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' '};
    char jugador = 'X';
    char ordenador = 'O';
    bool partida = true;


    dibujarTablero(espacio);

    while(partida){
        movimientoJugador(espacio,jugador);
        dibujarTablero(espacio);

        if(comprobarGanador(espacio,jugador,ordenador)){
            partida = false;
            break;
        }
        else if(comprobarEmpate(espacio)){
            partida = false;
            break;
        }

        movimientoOrdenador(espacio,ordenador);
        dibujarTablero(espacio);
         
        if(comprobarGanador(espacio,jugador,ordenador)){
            partida = false;
            break;
        }
        else if(comprobarEmpate(espacio)){
            partida = false;
            break;
        }

    }

    std::cout << "Final de la partida" << '\n';
    return 0;
}

void dibujarTablero(char *espacio)
{
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << espacio[0] << "  |  " << espacio[1] << "  |  " << espacio[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << espacio[3] << "  |  " << espacio[4] << "  |  " << espacio[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << espacio[6] << "  |  " << espacio[7] << "  |  " << espacio[8] << "  " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}

void movimientoJugador(char * espacio, char jugador)
{

int numero;
do{

std::cout << "introduce un numero entre el 1-9: ";
std::cin >>  numero;
numero--;

if(espacio[numero] == ' '){
    espacio[numero] = jugador;
    break;
}
}while(!numero > 0 || !numero < 8);


}

void movimientoOrdenador(char *espacio, char ordenador)
{

int numero;
srand(time(NULL));

while(true){
    numero = rand() % 9;
    if(espacio[numero] == ' '){
        espacio[numero] = ordenador;
        break;
    }
}
}

bool comprobarGanador(char *espacio, char jugador, char ordenador)
{

    if(espacio[0] != ' ' && espacio[0] == espacio[1] && espacio[1] == espacio[2]){
        espacio[0] == jugador ? std::cout << "Has ganado!!!!" << '\n' : std::cout << "Has perdido!!!!" << '\n';    
    }
    else if(espacio[3] != ' ' && espacio[3] == espacio[4] && espacio[4] == espacio[5]){
        espacio[3] == jugador ? std::cout << "Has ganado!!!!" << '\n' : std::cout << "Has perdido!!!!" << '\n';    
    }
     else if(espacio[6] != ' ' && espacio[6] == espacio[7] && espacio[7] == espacio[8]){
        espacio[6] == jugador ? std::cout << "Has ganado!!!!" << '\n' : std::cout << "Has perdido!!!!" << '\n';    
    }
     else if(espacio[0] != ' ' && espacio[0] == espacio[3] && espacio[3] == espacio[6]){
        espacio[0] == jugador ? std::cout << "Has ganado!!!!" << '\n' : std::cout << "Has perdido!!!!" << '\n';    
    }
    else if(espacio[1] != ' ' && espacio[1] == espacio[4] && espacio[4] == espacio[7]){
        espacio[1] == jugador ? std::cout << "Has ganado!!!!" << '\n' : std::cout << "Has perdido!!!!" << '\n';    
    }
    else if(espacio[2] != ' ' && espacio[2] == espacio[5] && espacio[5] == espacio[8]){
        espacio[2] == jugador ? std::cout << "Has ganado!!!!" << '\n' : std::cout << "Has perdido!!!!" << '\n';    
    }
    else if(espacio[0] != ' ' && espacio[0] == espacio[4] && espacio[4] == espacio[8]){
        espacio[0] == jugador ? std::cout << "Has ganado!!!!" << '\n' : std::cout << "Has perdido!!!!" << '\n';    
    }
    else if(espacio[2] != ' ' && espacio[2] == espacio[4] && espacio[4] == espacio[6]){
        espacio[2] == jugador ? std::cout << "Has ganado!!!!" << '\n' : std::cout << "Has perdido!!!!" << '\n';    
    }
    else{
        return false;
    }

    return true;
}

bool comprobarEmpate(char *espacio)
{
    for(int i = 0; i < 9; i++){
        if(espacio[i] == ' '){
            return false;
        }
    }
    std::cout << "¡Empate!" << '\n';
    return true;
}