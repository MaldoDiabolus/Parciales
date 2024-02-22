#include <iostream>

using namespace::std;

struct nodo {
	int num_list;
	nodo* sig;
} *cabeza, *cola;

void insertar_nodo();
void mostrar_lista();

int main() {

	int menu_prin = 0;
	
	while ( menu_prin != 3){
	
	cout << "Ingrese el numero correspondiente a la accion que desea realizar: \n\n";
	cout << "1). Ingresar un nuevo numero a la lista.\n";
	cout << "2). Ver los numeros enlistados.\n";
	cout << "3). Salir del programa.\n\n";
	
	cin >> menu_prin;
	
		switch (menu_prin){
		
			case 1:
				insertar_nodo();
			break;
			
			case 2:
				mostrar_lista();
			break;
			
			case 3:
				cout << "\nPrograma terminado.\n\n";
			break;
			
			default:
				cout << "\nOpcion invalida. Intente nuevamente.\n\n";
			break;
		}	
	}

    return 0;
}


void insertar_nodo(){
	
	nodo* nuevo = new nodo ();
	cout << "Ingrese el siguiente numero que quiere ingresar a la lista: ";
	cin >> nuevo->num_list;
	
	if (cabeza == NULL){
		
		cabeza = nuevo;
		cabeza->sig = NULL;
		cola = nuevo;
	} else {
		
		cola->sig = nuevo;
		nuevo->sig = NULL;
		cola = nuevo;
		
	}
	
	cout << "\n\nNumero ingresado a la lista.";
	
}

void mostrar_lista(){

	nodo* actual = new nodo();
	actual = cabeza;
	
	if (cabeza != NULL){
		
		while ( actual != NULL){
		
			cout << "  " << actual->num_list << endl;
			actual = actual->sig;
		} 
	} else {
			
		cout << "\n\nNo ha insertado ningun numero aun.\n\n";
			
	}
		
		
}
