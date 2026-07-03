#include <iostream>



char getSeleccionUsuario();
char getSeleccionOrdenador();
void mostrarSeleccion(char opcion);
void elegirGanador(char jugador,char ordenador);



int main(){

  
    char jugador;
    char ordenador;

    jugador = getSeleccionUsuario();
    std::cout << "Tu seleccion es: ";
    mostrarSeleccion(jugador);

    ordenador = getSeleccionOrdenador();
    std::cout << "El ordenador selecciono: ";
    mostrarSeleccion(ordenador);

    elegirGanador(jugador, ordenador);


    return 0;

}

char getSeleccionUsuario(){
  
    char jugador;
  
    std::cout << "Piedra, papel o tijera!" << '\n';
  
  
  do{
    std::cout << "Elige una acción" << '\n';
    std::cout << "----------------------------" << '\n';
    std::cout << "P para piedra" << '\n';
    std::cout << "e para papel" << '\n';
    std::cout << "T para tijera" << '\n';
    std::cin >> jugador;

  }while(jugador != 'p' && jugador != 'e' && jugador != 't');
  
return jugador;


}

char getSeleccionOrdenador(){

srand(time(0));
int num = rand () % 3 + 1;

switch(num){
    case 1: return 'p';break;
    case 2: return 'e';break;
    case 3: return 't';break;
    default: return 'p';break;

}
return 0;
}

void mostrarSeleccion(char opcion){


    switch(opcion){
        
        case 'p': std::cout << "Piedra" << '\n';break;
        case 'e': std::cout << "Papel" << '\n';break;
        case 't': std::cout << "Tijera" << '\n';break;
        default: std::cout << "Opción no es válida, vuelve a seleccionar." << '\n';

    }
}

void elegirGanador(char jugador,char ordenador){

    switch(jugador){

        case 'p':
        if(ordenador == 'p'){
            std::cout << "Empate" << '\n';
        }else if(ordenador == 'e'){
            std::cout << "Perdiste" << '\n';
        }else{
            std::cout << "Ganaste" << '\n';
        }
        break;

        case 'e':
        if(ordenador == 'p'){
            std::cout << "Ganaste" << '\n';
        }else if(ordenador == 'e'){
            std::cout << "Empate" << '\n';
        }else{
            std::cout << "Perdiste" << '\n';
        }
        break;

        case 't':
        if(ordenador == 'p'){
            std::cout << "Perdiste" << '\n';
        }else if(ordenador == 'e'){
            std::cout << "Ganaste" << '\n';
        }else{
            std::cout << "Empate" << '\n';
        }
        break;
    }

}