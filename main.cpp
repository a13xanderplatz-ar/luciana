// Hello World program 
// ANSI Codes
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#include <iostream>

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif

int main() 
{   

	std::system(CLEAR_COMMAND);            // Comando para borrar todo el contenido de la pantalla
    std::cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquierdo
	std::cout << " " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "\x1B[38;5;227m   _______  __   __  _______  ______    _______  _______  _______   _______  _______  __   __  _______  ___  ___     " << std::endl;
	std::cout << "\x1B[38;5;227m  |       ||  |_|  ||       ||    _ |  |       ||       ||   _   | |       ||       ||  |_|  ||       ||   ||   |  " << std::endl;
	std::cout << "\x1B[38;5;227m  |    ___||       ||    _  ||   | ||  |    ___||  _____||  |_|  | |_     _||    ___||       ||_     _||   ||   |      " << std::endl;
	std::cout << "\x1B[38;5;227m  |   |___ |       ||   |_| ||   |_||_ |   |___ | |_____ |       |   |   |  |   |___ |       |  |   |  |   ||   |" << std::endl;
	std::cout << "\x1B[38;5;227m  |    ___||       ||    ___||    __  ||    ___||_____  ||       |   |   |  |    ___| |     |   |   |  |   ||   |___ " << std::endl;
	std::cout << "\x1B[38;5;227m  |   |___ | ||_|| ||   |    |   |  | ||   |___  _____| ||   _   |   |   |  |   |___ |   _   |  |   |  |   ||       |" << std::endl;
	std::cout << "\x1B[38;5;227m  |_______||_|   |_||___|    |___|  |_||_______||_______||__| |__|   |___|  |_______||__| |__|  |___|  |___||_______|" << std::endl;
	std::cout << " \x1B[m" << std::endl;
	
	std::cout << " " << std::endl;
	std::cout << "\x1B[38;5;222m   ************************************************** " << std::endl;
	std::cout << "\x1B[38;5;222m   |                                                | " << std::endl;
	std::cout << "\x1B[38;5;222m   |" << "                      MENU                      " << "|" << std::endl;
	std::cout << "\x1B[38;5;222m   |" << "   1 PARA INGRESAR INFORMACION DEL CLIENTE      " << "|" << std::endl;
	std::cout << "\x1B[38;5;222m   |" << "   2 PARA INGRESAR INFORMACION DE PRENDAS       " << "|"  << std::endl;
	std::cout << "\x1B[38;5;222m   |" << "   3 PARA INGRESAR INFORMACION DE ALMACENES     " << "|"  << std::endl;
	std::cout << "\x1B[38;5;222m   |                                                | \x1B[m" << std::endl;
	std::cout << "\x1B[38;5;222m   ************************************************** \x1B[m" << std::endl;
	
	int comando_elegido {0};
	
	std::cout << " " << std::endl;           
	std::cout << " " << std::endl;  
	std::cout << "\x1B[38;5;227m   COMANDO ELEGIDO: ";
	std::cin >> comando_elegido;
	
	
	
	if (comando_elegido == 1)
	{
		std::system(CLEAR_COMMAND); 
		
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << "\x1B[38;5;117m   _______  ___      ___  _______  __    _  _______  _______ " << std::endl;
		std::cout << "\x1B[38;5;117m  |       ||   |    |   ||       ||  |  | ||       ||       |" << std::endl;
		std::cout << "\x1B[38;5;117m  |      _||   |    |   ||    ___||   |_| ||_     _||    ___|" << std::endl;
		std::cout << "\x1B[38;5;117m  |     |  |   |    |   ||   |___ |       |  |   |  |   |___ " << std::endl;
		std::cout << "\x1B[38;5;117m  |     |  |   |___ |   ||    ___||  _    |  |   |  |    ___|" << std::endl;
		std::cout << "\x1B[38;5;117m  |     |_ |       ||   ||   |___ | | |   |  |   |  |   |___ " << std::endl;
		std::cout << "\x1B[38;5;117m  |_______||_______||___||_______||_|  |__|  |___|  |_______|" << std::endl;
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		
		
		int ID_usuario {0};
		char nombre_usuario[12] {"-"};
		char direccion_usuario[12] {"-"};
		int numero_usuario {0};
		char eleccion2 {'-'};
		
		std::cout << " " << std::endl; 
		std::cout << "\x1B[38;5;117m    *" <<"   ID DEL CLIENTE: \x1B[m" ;
		std::cin >> ID_usuario;
	
		std::cout << "\x1B[38;5;117m    *" << "   NOMBRE DEL CLIENTE: \x1B[m";
		std::cin >> nombre_usuario ;

		std::cout << "\x1B[38;5;117m    *" << "   DIRECCION DEL CLIENTE: \x1B[m";
		std::cin >> direccion_usuario;
	
		std::cout << "\x1B[38;5;117m    *" << "   TELEFONO DEL CLIENTE: \x1B[m";
		std::cin >> numero_usuario ;
	
		
		std::cout << " " << std::endl;           
		std::cout << " " << std::endl; 
		std::cout << "\x1B[38;5;113m     " << "   !! SE GUARDO CON EXITO AL CLIENTE !! \x1B[m"<< std::endl;
		std::cout << " " << std::endl;           
		std::cout << " " << std::endl; 
		std::cout << "\x1B[38;5;75m    *" << "  LISTA DE CLIENTES: \x1B[m"<< std::endl;
		std::cout << " " << std::endl;
		std::cout << "\x1B[38;5;255m        " << ID_usuario << "\t \t" << nombre_usuario << "\t \t" << numero_usuario << "\t" << direccion_usuario << "\t" << "\x1B[m"<< std::endl;
		
	}
	
	else if (comando_elegido == 2)
	{
		std::system(CLEAR_COMMAND); 
		
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << "\x1B[38;5;211m   _______  ______    _______  __    _  ______   _______  _______ " << std::endl;
		std::cout << "\x1B[38;5;211m  |       ||    _ |  |       ||  |  | ||      | |   _   ||       |" << std::endl;
		std::cout << "\x1B[38;5;211m  |    _  ||   | ||  |    ___||   |_| ||  _    ||  |_|  ||  _____|" << std::endl;
		std::cout << "\x1B[38;5;211m  |   |_| ||   |_||_ |   |___ |       || | |   ||       || |_____ " << std::endl;
		std::cout << "\x1B[38;5;211m  |    ___||    __  ||    ___||  _    || |_|   ||       ||_____  |" << std::endl;
		std::cout << "\x1B[38;5;211m  |   |    |   |  | ||   |___ | | |   ||       ||   _   | _____| |" << std::endl;
		std::cout << "\x1B[38;5;211m  |___|    |___|  |_||_______||_|  |__||______| |__| |__||_______|" << std::endl;
		std::cout << " " << std::endl;
		std::cout << " \x1B[m" << std::endl;
		
		int cantidad_prenda {0};
		int cantidad_distribuida{0};
		int precio_unitario {0};
		int cantidad_modelos {0};
		
		std::cout << " " << std::endl; 
		std::cout << "\x1B[38;5;211m    *" <<"    CANTIDAD DE LA PRENDA: \x1B[m" ;
		std::cin >> cantidad_prenda;
	
		std::cout << "\x1B[38;5;211m    *" << "    CANTIDAD DISTRIBUIDA: \x1B[m";
		std::cin >> cantidad_distribuida;

		std::cout << "\x1B[38;5;211m    *" << "    PRECIO UNITARIO: \x1B[m";
		std::cin >> precio_unitario;
	
		std::cout << "\x1B[38;5;211m    *" << "    CANTIDAD DE MODELOS: \x1B[m";
		std::cin >> cantidad_modelos;
	
		
		std::cout << " " << std::endl;           
		std::cout << " " << std::endl; 
		std::cout << "\x1B[38;5;113m     " << "   !! SE GUARDO CON EXITO LA PRENDA !! \x1B[m"<< std::endl;
		std::cout << " " << std::endl;           
		std::cout << " " << std::endl; 
		std::cout << "\x1B[38;5;211m    *" << "  SOBRE LA PRENDA: \x1B[m"<< std::endl;
		std::cout << " " << std::endl;
		std::cout << "\x1B[38;5;211m        " << " - CANTIDAD DE LA PRENDA: " << "\t\x1B[m" << cantidad_prenda << std::endl;
		std::cout << "\x1B[38;5;211m        " << " - CANTIDAD DISTRIBUIDA: " << "\t\x1B[m" << cantidad_distribuida << std::endl; 
		std::cout << "\x1B[38;5;211m        " << " - PRECIO UNITARIO: " << "\t\t\x1B[m" << precio_unitario << std::endl;
		std::cout << "\x1B[38;5;211m        " << " - CANTIDAD DE MODELOS: " << "\t\x1B[m" << cantidad_modelos<< "\x1B[m"<< std::endl;
		
		
	}
	
	
	else if (comando_elegido == 3)
	{
		std::system(CLEAR_COMMAND); 
		
		std::cout << " " << std::endl;
		std::cout << " " << std::endl;
		std::cout << "\x1B[38;5;149m   _______  ___      __   __  _______  _______  _______  __    _ " << std::endl;
		std::cout << "\x1B[38;5;149m  |   _   ||   |    |  |_|  ||   _   ||       ||       ||  |  | |" << std::endl;
		std::cout << "\x1B[38;5;149m  |  |_|  ||   |    |       ||  |_|  ||      _||    ___||   |_| |" << std::endl;
		std::cout << "\x1B[38;5;149m  |       ||   |    |       ||       ||     |  |   |___ |       |" << std::endl;
		std::cout << "\x1B[38;5;149m  |       ||   |___ |       ||       ||     |  |    ___||  _    |" << std::endl;
		std::cout << "\x1B[38;5;149m  |   _   ||       || ||_|| ||   _   ||     |_ |   |___ | | |   |" << std::endl;
		std::cout << "\x1B[38;5;149m  |__| |__||_______||_|   |_||__| |__||_______||_______||_|  |__|" << std::endl;
		std::cout << " " << std::endl;
		std::cout << " \x1B[m" << std::endl;
		
		
		char nombre_almacen[20] {"-"};
		int codigo_almacen {0};
		char nombre_subalmacen[20] {"-"};
		int codigo_subalmacen {0};
		
		std::cout << " " << std::endl; 
		std::cout << "\x1B[38;5;149m    *" <<"   NOMBRE DEL ALMACEN: \x1B[m" ;
		std::cin >> nombre_almacen;
	
		std::cout << "\x1B[38;5;149m    *" << "   CODIGO DEL ALMACEN: \x1B[m";
		std::cin >> codigo_almacen ;

		std::cout << "\x1B[38;5;149m    *" << "   NOMBRE DEL SUB-ALMACEN:: \x1B[m";
		std::cin >> nombre_subalmacen;
	
		std::cout << "\x1B[38;5;149m    *" << "   CODIGO DEL SUB-ALMACEN: \x1B[m";
		std::cin >> codigo_subalmacen ;
	
		
		std::cout << " " << std::endl;           
		std::cout << " " << std::endl; 
		std::cout << "\x1B[38;5;11m     " << "   !! SE GUARDO CON EXITO EL ALMACEN !! \x1B[m"<< std::endl;
		std::cout << " " << std::endl;           
		std::cout << " " << std::endl; 
		std::cout << "\x1B[38;5;149m    *" << "  LISTA DE ALMACENES: \x1B[m"<< std::endl;
		std::cout << " " << std::endl;
		std::cout << "\x1B[38;5;255m        " << nombre_almacen << "\t \t" << codigo_almacen << "\t \t" << nombre_subalmacen << "\t \t" << codigo_subalmacen << "\x1B[m"<< std::endl;
		
	}
	
	

	return 0;
}
