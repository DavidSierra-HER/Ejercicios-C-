#include <iostream>
#include <iomanip>
#include <limits>

void mostrarBalance(double balance);
double depositar();
double retirar(double balance);

int main(){

    double balance = 0;
    int opcion = 0;

do{
    std::cout << "introduzca su seleccion" << '\n';
    std::cout << "----------------------------" << '\n';
    std::cout << "1.Ver su balance" << '\n';
    std::cout << "2.Depositar dinero" << '\n';
    std::cout << "3.Retirar dinero" << '\n';
    std::cout << "4.Salir" << '\n';
    std::cin >> opcion;

  if(std::cin.fail()){
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    opcion = 0;
}

    switch(opcion){
       
        case 1:mostrarBalance(balance);break;
        
        case 2:
            balance += depositar();
            mostrarBalance(balance);
            break;
        
            case 3:
                balance -= retirar(balance);
                mostrarBalance(balance);
            break;
        
        case 4: std::cout << "Saliendo del programa..." << '\n';break;
        default:  std::cout << "Opción no es válida, vuelve a seleccionar." << '\n';

    }

}while(opcion != 4);

    return 0;

}

void mostrarBalance(double balance){

    std:: cout << "Su balanace actual es:$ " << std::setprecision(2) << std::fixed << balance << '\n';

}

double depositar(){

    double cantidad = 0;

    std::cout << "Introduzca una cantidad a depositar: $";
    std::cin >> cantidad;


    if(cantidad < 0){
       
        std::cout << "No se puede depositar una cantidad negativa." << '\n';
        return 0;

    }else{
       
        return cantidad;
    }
    
}

double retirar(double balance){
   
    double cantidad = 0;
  
    std::cout << "Introduzca una cantidad a retirar: $";
    std::cin >> cantidad;
  
    if (cantidad > balance) {
       
        std::cout << "Fondos insuficientes." << '\n';
        return 0;

    }else if (cantidad < 0) {
       
        std::cout << "No se puede retirar una cantidad negativa." << '\n';
        return 0;

    }else{

        return cantidad;
    }
    
}