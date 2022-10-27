#include<iostream>
#include <string>
#include<locale>
#include <fstream>
#include<windows.h>

#define USER "usuario"
#define PASS "administrador"

using namespace std;

int menu();
void agregar (ofstream &es);
void ver (ifstream &le);
void eliminar (ifstream &elim);
void modificar (ifstream &mod);
void buscar (ifstream &bus);
void agregar2(ofstream &es);
void ver2(ifstream &le);
void eliminar2(ifstream &elim);
void modificar2(ifstream &mod);
void buscar2(ifstream &bus);
void agregar3(ofstream &es);
void ver3(ifstream &le);
void eliminar3(ifstream &elim);
void modificar3(ifstream &mod);
void buscar3(ifstream &bus);
void agregar4(ofstream &es);
void ver4(ifstream &le);
void eliminar4(ifstream &elim);
void modificar4(ifstream &mod);
void buscar4(ifstream &bus);
void agregar5(ofstream &es);
void ver5(ifstream &le);
void eliminar5(ifstream &elim);
void modificar5(ifstream &mod);
void buscar5(ifstream &bus);
void agregar6(ofstream &es);
void ver6(ifstream &le);
void eliminar6(ifstream &elim);
void modificar6(ifstream &mod);
void buscar6(ifstream &bus);
void agregar7(ofstream &es);
void ver7(ifstream &le);
void eliminar7(ifstream &elim);
void modificar7(ifstream &mod);
void buscar7(ifstream &bus);
void agregar8(ofstream &es);
void ver8(ifstream &le);
void eliminar8(ifstream &elim);
void modificar8(ifstream &mod);
void buscar8(ifstream &bus);
void agregar9(ofstream &es);
void ver9(ifstream &le);
void eliminar9(ifstream &elim);
void modificar9(ifstream &mod);
void buscar9(ifstream &bus);

int main()
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	setlocale(LC_ALL, "spanish");
	int opcion,op,fun,alt,opc,opci;
	string usuario,password;
	int contador=0;
	bool ingresar=false;
	ifstream Lec,Elim,Mod,Bus,Elim2,Elim3,Elim4; //Archivo para lectura
	ofstream Esc,Esc2,Esc3,Esc4,Esc5,Esc6,Esc7,Esc8,Esc9;
	ifstream Lec2,Lec3,Lec4,Mod2,Mod3,Mod4,Bus1,Bus2,Bus4;
	ifstream Lec5,Bus5,Elim5,Mod5,Lec6,Mod6,Elim6,Bus6;
	ifstream Lec7,Elim7,Mod7,Bus7,Lec8,Bus8,Mod8,Elim8;
	ifstream Lec9,Elim9,Mod9,Bus9;
	do{
	system("cls");
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\n\t\t\t\tREGISTRO DE VACUNACIÓN CONTRA EL COVID 19"<<endl;
	cout<<"\t\t\t\t------------------------------------------"<<endl;
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\t\tINICIAR SESIÓN";
	cout<<"\n\t\t--------------";
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\n\n\n\t\tINGRESE EL USUARIO: ";
	SetConsoleTextAttribute(hConsole,14);
	getline(cin,usuario);
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\n\n\t\tINGRESE LA CONTRASEÑA: ";
	SetConsoleTextAttribute(hConsole,14);
	getline(cin,password);
	
	if(usuario== USER && password==PASS)
	{
		ingresar=true;	
	}else
	{
		
		cout<<"\n\n\tEl usuario y/o la contraseña son incorrectos, ingrese los datos correctamente"<<endl;
		Sleep(1500);
		contador++;
	}
	
	}while(ingresar== false && contador<3);	
	
	if(ingresar==false)
	{
		cout<<"\n\n\tUsted no pudo ingresar al sistema. Adiós"<<endl;	
		
	}else
	{

	do{
	system ("cls");
	opcion = menu();
	switch (opcion)
	{
	do{
	case 1:
	system ("cls");
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\t\t\t\t\t\tREGISTRO SEGÚN EDADES";
	cout<<"\n\t\t\t\t\t\t---------------------";
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\n\n\n\t\t\t\t\t Vacunación COVID 19 - 5 a 12 años"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t1. Primera Dosis"<<endl;
	cout<<"\t2. Segunda Dosis"<<endl;
	cout<<"\t3. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\t\t\t\t\t Vacunación COVID 19 - 12 a 18 años"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t4. Primera Dosis"<<endl;
	cout<<"\t5. Segunda Dosis"<<endl;
	cout<<"\t6. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\t\t\t\t\t Vacunación COVID 19 - 18 años en adelante"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t7. Primera Dosis"<<endl;
	cout<<"\t8. Segunda Dosis"<<endl;
	cout<<"\t9. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,8);
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t10. Salir ";
	SetConsoleTextAttribute(hConsole,3);
	cout<<"\n\n\t\t\t\t\t Elija la opción deseada: ";
	cin>>op;
	switch (op)
	{
	case 1:
		agregar(Esc);
		break;
	case 2:
		agregar2(Esc2);
		break;
	case 3:
		agregar3(Esc3);
		break;
	case 4:
		agregar4(Esc4);
		break;
	case 5:
		agregar5(Esc5);
		break;
	case 6:
		agregar6(Esc6);
		break;
	case 7:
		agregar7(Esc7);
		break;
	case 8:
		agregar8(Esc8);
		break;
	case 9:
		agregar9(Esc9);
		break;
	}
	}while(op!=10);
	break;
	do{
	case 2:
	system ("cls");
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\t\t\t\t\t\tVER PERSONAS SEGÚN EDADES";
	cout<<"\n\t\t\t\t\t\t---------------------";
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\n\n\n\t\t\t\t\t Vacunación COVID 19 - 5 a 12 años"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t1. Primera Dosis"<<endl;
	cout<<"\t2. Segunda Dosis"<<endl;
	cout<<"\t3. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\t\t\t\t\t Vacunación COVID 19 - 12 a 18 años"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t4. Primera Dosis"<<endl;
	cout<<"\t5. Segunda Dosis"<<endl;
	cout<<"\t6. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\t\t\t\t\t Vacunación COVID 19 - 18 años en adelante"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t7. Primera Dosis"<<endl;
	cout<<"\t8. Segunda Dosis"<<endl;
	cout<<"\t9. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,8);
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t10. Salir ";
	SetConsoleTextAttribute(hConsole,3);
	cout<<"\n\n\t\t\t\t\t Elija la opción deseada: ";
	cin>>fun;
	switch (fun)
	{
	case 1:
		ver(Lec);
		break;
	case 2:
		ver2(Lec2);
		break;
	case 3:
		ver3(Lec3);
		break;
	case 4:
		ver4(Lec4);
		break;
	case 5:
		ver5(Lec5);
		break;
	case 6:
		ver6(Lec6);
		break;
	case 7:
		ver7(Lec7);
		break;
	case 8:
		ver8(Lec8);
		break;
	case 9:
		ver9(Lec9);
		break;
	}
	}while(fun!=10);
	break;
	do{
	case 3:
	system ("cls");
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\t\t\t\t\tELIMINAR PERSONAS SEGÚN EDADES";
	cout<<"\n\t\t\t\t\t------------------------------";
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\n\n\n\t\t\t\t\t Vacunación COVID 19 - 5 a 12 años"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t1. Primera Dosis"<<endl;
	cout<<"\t2. Segunda Dosis"<<endl;
	cout<<"\t3. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\t\t\t\t\t Vacunación COVID 19 - 12 a 18 años"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t4. Primera Dosis"<<endl;
	cout<<"\t5. Segunda Dosis"<<endl;
	cout<<"\t6. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\t\t\t\t\t Vacunación COVID 19 - 18 años en adelante"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t7. Primera Dosis"<<endl;
	cout<<"\t8. Segunda Dosis"<<endl;
	cout<<"\t9. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,8);
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t10. Salir ";
	SetConsoleTextAttribute(hConsole,3);
	cout<<"\n\n\t\t\t\t\t Elija la opción deseada: ";
	cin>>alt;
	switch (alt)
	{
	case 1:
		eliminar(Elim);
		break;
	case 2:
		eliminar2(Elim2);
		break;
	case 3:
		eliminar3(Elim3);
		break;
	case 4:
		eliminar4(Elim4);
		break;
	case 5:
		eliminar5(Elim5);
		break;
	case 6:
		eliminar6(Elim6);
		break;
	case 7:
	eliminar7(Elim7);
		break;
	case 8:
		eliminar8(Elim8);
		break;
	case 9:
	    eliminar9(Elim9);
		break;
	}
	}while(alt!=10);
	break;
	do{
	case 4:
	system ("cls");
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\t\t\t\t\tMODIFICAR PERSONAS SEGÚN EDADES";
	cout<<"\n\t\t\t\t\t-------------------------------";
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\n\n\n\t\t\t\t\t Vacunación COVID 19 - 5 a 12 años"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t1. Primera Dosis"<<endl;
	cout<<"\t2. Segunda Dosis"<<endl;
	cout<<"\t3. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\t\t\t\t\t Vacunación COVID 19 - 12 a 18 años"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t4. Primera Dosis"<<endl;
	cout<<"\t5. Segunda Dosis"<<endl;
	cout<<"\t6. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\t\t\t\t\t Vacunación COVID 19 - 18 años en adelante"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t7. Primera Dosis"<<endl;
	cout<<"\t8. Segunda Dosis"<<endl;
	cout<<"\t9. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,8);
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t10. Salir ";
	SetConsoleTextAttribute(hConsole,3);
	cout<<"\n\n\t\t\t\t\t Elija la opción deseada: ";
	cin>>opc;
	switch (opc)
	{
	case 1:
		modificar(Mod);
		break;
	case 2:
		modificar2(Mod2);
		break;
	case 3:
		modificar3(Mod3);
		break;
	case 4:
		modificar4(Mod4);
		break;
	case 5:
		modificar5(Mod5);
		break;
	case 6:
		modificar6(Mod6);
		break;
	case 7:
		modificar7(Mod7);
		break;
	case 8:
		modificar8(Mod8);
		break;
	case 9:
		modificar9(Mod9);
		break;
	}
	}while(opc!=10);
	break;
	do{
	case 5:
	system ("cls");
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\t\t\t\t\tBUSCAR PERSONAS SEGÚN EDADES";
	cout<<"\n\t\t\t\t\t----------------------------";
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\n\n\n\t\t\t\t\t Vacunación COVID 19 - 5 a 12 años"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t1. Primera Dosis"<<endl;
	cout<<"\t2. Segunda Dosis"<<endl;
	cout<<"\t3. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\t\t\t\t\t Vacunación COVID 19 - 12 a 18 años"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t4. Primera Dosis"<<endl;
	cout<<"\t5. Segunda Dosis"<<endl;
	cout<<"\t6. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,7);
	cout<<"\t\t\t\t\t Vacunación COVID 19 - 18 años en adelante"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\t7. Primera Dosis"<<endl;
	cout<<"\t8. Segunda Dosis"<<endl;
	cout<<"\t9. Tercera Dosis\n\n"<<endl;
	SetConsoleTextAttribute(hConsole,8);
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t10. Salir ";
	SetConsoleTextAttribute(hConsole,3);
	cout<<"\n\n\t\t\t\t\t Elija la opción deseada: ";
	cin>>opci;
	switch (opci)
	{
	case 1:
		buscar(Bus);
		break;
	case 2:
		buscar2(Bus1);
		break;
	case 3:
		buscar3(Bus2);
		break;
	case 4:
		buscar4(Bus4);
		break;
	case 5:
		buscar5(Bus5);
		break;
	case 6:
		buscar6(Bus6);
		break;
	case 7:
		buscar7(Bus7);
		break;
	case 8:
		buscar8(Bus8);
		break;
	case 9:
		buscar9(Bus9);
		break;

	}
	}while(opci!=10);
	break;

	}
	}while (opcion!=6);
	
	}
return 0;	
}


int menu (){
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	setlocale(LC_ALL, "spanish");
	int op;
	SetConsoleTextAttribute(hConsole,11);
	cout<<"\n\n\n\n\t\t\t\t\t REGISTRO VACUNADOS COVID-19";
	cout<<"\n\t\t\t\t\t --------------------------"<<endl;
	SetConsoleTextAttribute(hConsole,14);
	cout<<"\n\t\t\t\t\t 1. Agregar personas"<<endl;
	cout<<"\t\t\t\t\t 2. Ver personas"<<endl;
	cout<<"\t\t\t\t\t 3. Eliminar personas"<<endl;
	cout<<"\t\t\t\t\t 4. Modificar personas"<<endl;
	cout<<"\t\t\t\t\t 5. Buscar personas"<<endl;
	cout<<"\t\t\t\t\t 6. Salir"<<endl;
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\n\t\t\t\t\t Elija la opción deseada"<<endl;
	cout<<"\n\t\t\t\t\t";
	cin>>op;
	return op;
}


/* ingresar, ver, buscar, eliminar, modificar datos de niños de 5 a 12 años / 1ra dosis */

void agregar (ofstream &es)//Envía como paramétro es del archivo
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

system ("cls");
string nombre,apellido,edad,nv;
string pais,snombre,sapellido;
fflush (stdin);
es.open("niñosdosis1.txt",ios::out | ios::app );//
fflush (stdin);
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\t\t\t AGREGAR PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 1RA DOSIS";
cout<<"\n\t\t\t -------------------------------------------------------------";
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\n\t\t\tIngrese el primer nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, snombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el primer apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, apellido);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, sapellido);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese la edad de la persona: ";
cout<<"\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, edad);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el país: ";
cout<<"\t\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, pais);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el número de vacunación: ";
cout<<"\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nv);

//Guardando la información en el archivo es
es<<nombre<<"\t"<<snombre<<"\t"<<apellido<<"\t"<<sapellido<<"\t"<<edad<<"\t"<<pais<<"\t"<<nv<<"\t"<<endl;
es.close();
}


void ver (ifstream &le)
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre, pais,apellido,edad,nv,snombre,sapellido;
le.open("niñosdosis1.txt",ios::in); //Modo lectura
le>>nombre;
//Validando
if(le.is_open())
{
SetConsoleTextAttribute(hConsole,7);	
cout<<"\n\n\n\t\t\t\t VER PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 1RA DOSIS";
cout<<"\n\t\t\t\t ---------------------------------------------------------"<<endl<<endl;
while (!le.eof ())
{
le>>snombre;
le>>apellido;
le>>sapellido;
le>>edad;
le>>pais;
le>>nv;
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
cout<<"\n\t\t\t\t\tEdad:            "<<edad;
cout<<"\n\t\t\t\t\tPaís:            "<<pais;
cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
le>>nombre;
}
le.close();

}else
cout<<"\n\t\t\t\t\tNo hay ningún registro para mostrar"<<endl;
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\n\t\t\t\t\t";
system ("pause"); //Para mostrar en pantalla
}


void eliminar (ifstream &elim)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido;
	string nv;
	string nvaux;	
	
	elim.open("niñosdosis1.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(elim.is_open())
	{
		SetConsoleTextAttribute(hConsole,7);
		cout<<"\n\n\t\t\t\tELIMINAR PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 1RA DOSIS";
		cout<<"\n\t\t\t\t--------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,10);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación a eliminar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		elim>>nombre;
	
	while (!elim.eof())
	{
		elim>>snombre;
		elim>>apellido;
		elim>>sapellido;
		elim>>pais;
		elim>>edad;
		elim>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,10);
			cout<<"\n\n\t\t\tEliminado correctamente\n";
			Sleep(1500);
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<nv<<"\n";
		}
	
		elim>>nombre;
}
	elim.close();
	aux.close();
	
	}else
	cout<<"\n\n\t\t\tError al intentar eliminar"<<endl;
	remove("niñosdosis1.txt");
	rename ("temp.txt","niñosdosis1.txt");
}


void modificar (ifstream &mod)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido;
	string nv;
	string nombreaux,snombreaux,apellidoaux,sapellidoaux,edadaux,paisaux,nvaux;	
	
	mod.open("niñosdosis1.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(mod.is_open())
	{
		SetConsoleTextAttribute(hConsole,14);
		cout<<"\n\n\t\t\t\tMODIFICAR PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 1RA DOSIS";
		cout<<"\n\t\t\t\t---------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,6);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a modificar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		mod>>nombre;
	
	while (!mod.eof())
	{
		mod>>snombre;
		mod>>apellido;
		mod>>sapellido;
		mod>>edad;
		mod>>pais;
		mod>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\n\t\t\t Ingrese el nuevo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>snombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo primer apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>apellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>sapellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo la edad de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>edadaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo el país de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>paisaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo número de vacunación de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nvaux;
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\t\t\tModificado correctamente: ";
			Sleep(1500);
			aux<<nombreaux<<" "<<snombreaux<<" "<<apellidoaux<<" "<<sapellidoaux<<" "<<edadaux<<" "<<paisaux<<" "<<nvaux<<"\n";
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<nv<<"\n";
		}
	
		mod>>nombre;
}
	mod.close();
	aux.close();
	
	}else
	cout<<"Error al intentar modificar"<<endl;
	remove("niñosdosis1.txt");
	rename ("temp.txt","niñosdosis1.txt");
}


void buscar (ifstream &bus)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,nv;
	string nvaux;
	bus.open("niñosdosis1.txt",ios::in); //Modo lectura
	bool encontrar = false;
	SetConsoleTextAttribute(hConsole,14);
	cout<<"\n\n\n\t\t\t\tBUSCAR PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 1RA DOSIS";
	cout<<"\n\t\t\t\t------------------------------------------------------------";
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a buscar: ";
	SetConsoleTextAttribute(hConsole,7);
	cin>>nvaux;
	
	bus>>nombre;
	
		while (!bus.eof() && !encontrar)
	{
		bus>>snombre;
		bus>>apellido;
		bus>>sapellido;
		bus>>edad;
		bus>>pais;
		bus>>nv;
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
			cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
			cout<<"\n\t\t\t\t\tEdad:            "<<edad;
			cout<<"\n\t\t\t\t\tPaís:            "<<pais;
			cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
			cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
			encontrar = true;
		}
		bus>>nombre;
	}
	
	bus.close();
	
	if(!encontrar)
	cout<<"\n\t\t\t\t\tDato no encontrado o inexistente"<<endl;
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\n\t\t\t\t";
	system("PAUSE");
}


/* ingresar, ver, buscar, eliminar, modificar datos de niños de 5 a 12 años / 2da dosis */
void agregar2(ofstream &es)//Envía como paramétro es del archivo
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre,apellido,edad,nv;
string pais,snombre,sapellido;
fflush (stdin);
es.open("niñosdosis2.txt",ios::out | ios::app );//
fflush (stdin);
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\t\t\t AGREGAR PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 2DA DOSIS";
cout<<"\n\t\t\t -------------------------------------------------------------";
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\n\t\t\tIngrese el primer nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, snombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el primer apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, apellido);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, sapellido);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese la edad de la persona: ";
cout<<"\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, edad);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el país: ";
cout<<"\t\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, pais);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el número de vacunación: ";
cout<<"\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nv);

//Guardando la información en el archivo es
es<<nombre<<"\t"<<snombre<<"\t"<<apellido<<"\t"<<sapellido<<"\t"<<edad<<"\t"<<pais<<"\t"<<nv<<"\t"<<endl;
es.close();
}


void ver2(ifstream &le)
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre, pais,apellido,edad,nv,snombre,sapellido;
le.open("niñosdosis2.txt",ios::in); //Modo lectura
le>>nombre;
//Validando
if(le.is_open())
{
SetConsoleTextAttribute(hConsole,7);	
cout<<"\n\n\n\t\t\t\t VER PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 2DA DOSIS";
cout<<"\n\t\t\t\t ---------------------------------------------------------"<<endl<<endl;
while (!le.eof ())
{
le>>snombre;
le>>apellido;
le>>sapellido;
le>>edad;
le>>pais;
le>>nv;
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
cout<<"\n\t\t\t\t\tEdad:            "<<edad;
cout<<"\n\t\t\t\t\tPaís:            "<<pais;
cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
le>>nombre;
}
le.close();

}else
cout<<"\n\t\t\t\t\tNo hay ningún registro para mostrar"<<endl;
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\n\t\t\t\t\t";
system ("pause"); //Para mostrar en pantalla
}


void eliminar2(ifstream &elim)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido;
	string nv;
	string nvaux;	
	
	elim.open("niñosdosis2.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(elim.is_open())
	{
		SetConsoleTextAttribute(hConsole,7);
		cout<<"\n\n\t\t\t\tELIMINAR PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 2DA DOSIS";
		cout<<"\n\t\t\t\t--------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,10);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación a eliminar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		elim>>nombre;
	
	while (!elim.eof())
	{
		elim>>snombre;
		elim>>apellido;
		elim>>sapellido;
		elim>>pais;
		elim>>edad;
		elim>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,10);
			cout<<"\n\n\t\t\tEliminado correctamente\n";
			Sleep(1500);
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<nv<<"\n";
		}
	
		elim>>nombre;
}
	elim.close();
	aux.close();
	
	}else
	cout<<"\n\n\t\t\tError al intentar eliminar"<<endl;
	remove("niñosdosis2.txt");
	rename ("temp.txt","niñosdosis2.txt");
}


void modificar2(ifstream &mod)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido;
	string nv;
	string nombreaux,snombreaux,apellidoaux,sapellidoaux,edadaux,paisaux,nvaux;	
	
	mod.open("niñosdosis2.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(mod.is_open())
	{
		SetConsoleTextAttribute(hConsole,14);
		cout<<"\n\n\t\t\t\tMODIFICAR PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 2DA DOSIS";
		cout<<"\n\t\t\t\t---------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,6);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a modificar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		mod>>nombre;
	
	while (!mod.eof())
	{
		mod>>snombre;
		mod>>apellido;
		mod>>sapellido;
		mod>>edad;
		mod>>pais;
		mod>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\n\t\t\t Ingrese el nuevo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>snombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo primer apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>apellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>sapellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo la edad de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>edadaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo el país de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>paisaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo número de vacunación de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nvaux;
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\t\t\tModificado correctamente: ";
			Sleep(1500);
			aux<<nombreaux<<" "<<snombreaux<<" "<<apellidoaux<<" "<<sapellidoaux<<" "<<edadaux<<" "<<paisaux<<" "<<nvaux<<"\n";
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<nv<<"\n";
		}
	
		mod>>nombre;
}
	mod.close();
	aux.close();
	
	}else
	cout<<"Error al intentar modificar"<<endl;
	remove("niñosdosis2.txt");
	rename ("temp.txt","niñosdosis2.txt");
}


void buscar2(ifstream &bus)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,nv;
	string nvaux;
	bus.open("niñosdosis2.txt",ios::in); //Modo lectura
	bool encontrar = false;
	SetConsoleTextAttribute(hConsole,14);
	cout<<"\n\n\n\t\t\t\tBUSCAR PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 2DA DOSIS";
	cout<<"\n\t\t\t\t------------------------------------------------------------";
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a buscar: ";
	SetConsoleTextAttribute(hConsole,7);
	cin>>nvaux;
	
	bus>>nombre;
	
		while (!bus.eof() && !encontrar)
	{
		bus>>snombre;
		bus>>apellido;
		bus>>sapellido;
		bus>>edad;
		bus>>pais;
		bus>>nv;
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
			cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
			cout<<"\n\t\t\t\t\tEdad:            "<<edad;
			cout<<"\n\t\t\t\t\tPaís:            "<<pais;
			cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
			cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
			encontrar = true;
		}
		bus>>nombre;
	}
	
	bus.close();
	
	if(!encontrar)
	cout<<"\n\t\t\t\t\tDato no encontrado o inexistente"<<endl;
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\n\t\t\t\t";
	system("PAUSE");
}


/* ingresar, ver, buscar, eliminar, modificar datos de niños de 5 a 12 años / 3ra dosis */
void agregar3(ofstream &es)//Envía como paramétro es del archivo
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre,apellido,edad,nv;
string pais,snombre,sapellido;
fflush (stdin);
es.open("niñosdosis3.txt",ios::out | ios::app );//
fflush (stdin);
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\t\t\t AGREGAR PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 3RA DOSIS";
cout<<"\n\t\t\t -------------------------------------------------------------";
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\n\t\t\tIngrese el primer nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, snombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el primer apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, apellido);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, sapellido);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese la edad de la persona: ";
cout<<"\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, edad);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el país: ";
cout<<"\t\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, pais);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el número de vacunación: ";
cout<<"\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nv);

//Guardando la información en el archivo es
es<<nombre<<"\t"<<snombre<<"\t"<<apellido<<"\t"<<sapellido<<"\t"<<edad<<"\t"<<pais<<"\t"<<nv<<"\t"<<endl;
es.close();
}


void ver3(ifstream &le)
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre, pais,apellido,edad,nv,snombre,sapellido;
le.open("niñosdosis3.txt",ios::in); //Modo lectura
le>>nombre;
//Validando
if(le.is_open())
{
SetConsoleTextAttribute(hConsole,7);	
cout<<"\n\n\n\t\t\t\t VER PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 3RA DOSIS";
cout<<"\n\t\t\t\t ---------------------------------------------------------"<<endl<<endl;
while (!le.eof ())
{
le>>snombre;
le>>apellido;
le>>sapellido;
le>>edad;
le>>pais;
le>>nv;
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
cout<<"\n\t\t\t\t\tEdad:            "<<edad;
cout<<"\n\t\t\t\t\tPaís:            "<<pais;
cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
le>>nombre;
}
le.close();

}else
cout<<"\n\t\t\t\t\tNo hay ningún registro para mostrar"<<endl;
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\n\t\t\t\t\t";
system ("pause"); //Para mostrar en pantalla
}


void eliminar3(ifstream &elim)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido;
	string nv;
	string nvaux;	
	
	elim.open("niñosdosis3.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(elim.is_open())
	{
		SetConsoleTextAttribute(hConsole,7);
		cout<<"\n\n\t\t\t\tELIMINAR PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 3RA DOSIS";
		cout<<"\n\t\t\t\t--------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,10);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación a eliminar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		elim>>nombre;
	
	while (!elim.eof())
	{
		elim>>snombre;
		elim>>apellido;
		elim>>sapellido;
		elim>>pais;
		elim>>edad;
		elim>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,10);
			cout<<"\n\n\t\t\tEliminado correctamente\n";
			Sleep(1500);
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<nv<<"\n";
		}
	
		elim>>nombre;
}
	elim.close();
	aux.close();
	
	}else
	cout<<"\n\n\t\t\tError al intentar eliminar"<<endl;
	remove("niñosdosis3.txt");
	rename ("temp.txt","niñosdosis3.txt");
}


void modificar3(ifstream &mod)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido;
	string nv;
	string nombreaux,snombreaux,apellidoaux,sapellidoaux,edadaux,paisaux,nvaux;	
	
	mod.open("niñosdosis3.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(mod.is_open())
	{
		SetConsoleTextAttribute(hConsole,14);
		cout<<"\n\n\t\t\t\tMODIFICAR PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 3RA DOSIS";
		cout<<"\n\t\t\t\t---------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,6);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a modificar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		mod>>nombre;
	
	while (!mod.eof())
	{
		mod>>snombre;
		mod>>apellido;
		mod>>sapellido;
		mod>>edad;
		mod>>pais;
		mod>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\n\t\t\t Ingrese el nuevo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>snombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo primer apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>apellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>sapellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo la edad de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>edadaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo el país de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>paisaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo número de vacunación de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nvaux;
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\t\t\tModificado correctamente: ";
			Sleep(1500);
			aux<<nombreaux<<" "<<snombreaux<<" "<<apellidoaux<<" "<<sapellidoaux<<" "<<edadaux<<" "<<paisaux<<" "<<nvaux<<"\n";
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<nv<<"\n";
		}
	
		mod>>nombre;
}
	mod.close();
	aux.close();
	
	}else
	cout<<"Error al intentar modificar"<<endl;
	remove("niñosdosis3.txt");
	rename ("temp.txt","niñosdosis3.txt");
}


void buscar3(ifstream &bus)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,nv;
	string nvaux;
	bus.open("niñosdosis3.txt",ios::in); //Modo lectura
	bool encontrar = false;
	SetConsoleTextAttribute(hConsole,14);
	cout<<"\n\n\n\t\t\t\tBUSCAR PERSONAS VACUNADAS COVID 19 - 5 A 12 AÑOS / 3RA DOSIS";
	cout<<"\n\t\t\t\t------------------------------------------------------------";
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a buscar: ";
	SetConsoleTextAttribute(hConsole,7);
	cin>>nvaux;
	
	bus>>nombre;
	
		while (!bus.eof() && !encontrar)
	{
		bus>>snombre;
		bus>>apellido;
		bus>>sapellido;
		bus>>edad;
		bus>>pais;
		bus>>nv;
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
			cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
			cout<<"\n\t\t\t\t\tEdad:            "<<edad;
			cout<<"\n\t\t\t\t\tPaís:            "<<pais;
			cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
			cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
			encontrar = true;
		}
		bus>>nombre;
	}
	
	bus.close();
	
	if(!encontrar)
	cout<<"\n\t\t\t\t\tDato no encontrado o inexistente"<<endl;
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\n\t\t\t\t";
	system("PAUSE");
}


/* ingresar, ver, buscar, eliminar, modificar datos de jovenes de 12 a 18 años / 1ra dosis */

void agregar4(ofstream &es) //Envía como paramétro es del archivo
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre,apellido,edad,nv;
string pais,snombre,sapellido,dpi;
fflush (stdin);
es.open("jovenesdosis1.txt",ios::out | ios::app );//
fflush (stdin);
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\t\t\t AGREGAR PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 1RA DOSIS";
cout<<"\n\t\t\t --------------------------------------------------------------";
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\n\t\t\tIngrese el primer nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, snombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el primer apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, apellido);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, sapellido);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese la edad de la persona: ";
cout<<"\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, edad);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el país: ";
cout<<"\t\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, pais);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el DPI (opcional): ";
cout<<"\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, dpi);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el número de vacunación: ";
cout<<"\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nv);

//Guardando la información en el archivo es
es<<nombre<<"\t"<<snombre<<"\t"<<apellido<<"\t"<<sapellido<<"\t"<<edad<<"\t"<<pais<<"\t"<<dpi<<"\t"<<nv<<"\t"<<endl;
es.close();
}


void ver4(ifstream &le)
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre, pais,apellido,edad,nv,snombre,sapellido,dpi;
le.open("jovenesdosis1.txt",ios::in); //Modo lectura
le>>nombre;
//Validando
if(le.is_open())
{
SetConsoleTextAttribute(hConsole,7);	
cout<<"\n\n\n\t\t\t\t VER PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 1RA DOSIS";
cout<<"\n\t\t\t\t ---------------------------------------------------------"<<endl<<endl;
while (!le.eof ())
{
le>>snombre;
le>>apellido;
le>>sapellido;
le>>edad;
le>>pais;
le>>dpi;
le>>nv;
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
cout<<"\n\t\t\t\t\tEdad:            "<<edad;
cout<<"\n\t\t\t\t\tPaís:            "<<pais;
cout<<"\n\t\t\t\t\tDPI:            "<<dpi;
cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
le>>nombre;
}
le.close();

}else
cout<<"\n\t\t\t\t\tNo hay ningún registro para mostrar"<<endl;
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\n\t\t\t\t\t";
system ("pause"); //Para mostrar en pantalla
}


void eliminar4(ifstream &elim)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,dpi;
	string nv;
	string nvaux;	
	
	elim.open("jovenesdosis1.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(elim.is_open())
	{
		SetConsoleTextAttribute(hConsole,7);
		cout<<"\n\n\t\t\t\tELIMINAR PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 1RA DOSIS";
		cout<<"\n\t\t\t\t---------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,10);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación a eliminar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		elim>>nombre;
	
	while (!elim.eof())
	{
		elim>>snombre;
		elim>>apellido;
		elim>>sapellido;
		elim>>pais;
		elim>>dpi;
		elim>>edad;
		elim>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,10);
			cout<<"\n\n\t\t\tEliminado correctamente\n";
			Sleep(1500);
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<dpi<<" "<<nv<<"\n";
		}
	
		elim>>nombre;
}
	elim.close();
	aux.close();
	
	}else
	cout<<"\n\n\t\t\tError al intentar eliminar"<<endl;
	remove("jovenesdosis1.txt");
	rename ("temp.txt","jovenesdosis1.txt");
}


void modificar4(ifstream &mod)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido;
	string nv,dpi;
	string nombreaux,snombreaux,apellidoaux,sapellidoaux,edadaux,paisaux,nvaux,dpiaux;	
	
	mod.open("jovenesdosis1.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(mod.is_open())
	{
		SetConsoleTextAttribute(hConsole,14);
		cout<<"\n\n\t\t\t\tMODIFICAR PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 1RA DOSIS";
		cout<<"\n\t\t\t\t---------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,6);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a modificar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		mod>>nombre;
	
	while (!mod.eof())
	{
		mod>>snombre;
		mod>>apellido;
		mod>>sapellido;
		mod>>edad;
		mod>>pais;
		mod>>dpi;
		mod>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\n\t\t\t Ingrese el nuevo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>snombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo primer apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>apellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>sapellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo la edad de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>edadaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo el país de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>paisaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo DPI de la persona (opcional): ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>dpiaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo número de vacunación de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nvaux;
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\t\t\tModificado correctamente: ";
			Sleep(1500);
			aux<<nombreaux<<" "<<snombreaux<<" "<<apellidoaux<<" "<<sapellidoaux<<" "<<edadaux<<" "<<paisaux<<" "<<dpiaux<<" "<<nvaux<<"\n";
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<dpi<<" "<<nv<<"\n";
		}
	
		mod>>nombre;
}
	mod.close();
	aux.close();
	
	}else
	cout<<"Error al intentar modificar"<<endl;
	remove("jovenesdosis1.txt");
	rename ("temp.txt","jovenesdosis1.txt");
}


void buscar4(ifstream &bus)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,nv,dpi;
	string nvaux;
	bus.open("jovenesdosis1.txt",ios::in); //Modo lectura
	bool encontrar = false;
	SetConsoleTextAttribute(hConsole,14);
	cout<<"\n\n\n\t\t\t\tBUSCAR PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 1RA DOSIS";
	cout<<"\n\t\t\t\t------------------------------------------------------------";
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a buscar: ";
	SetConsoleTextAttribute(hConsole,7);
	cin>>nvaux;
	
	bus>>nombre;
	
		while (!bus.eof() && !encontrar)
	{
		bus>>snombre;
		bus>>apellido;
		bus>>sapellido;
		bus>>edad;
		bus>>pais;
		bus>>dpi;
		bus>>nv;
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
			cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
			cout<<"\n\t\t\t\t\tEdad:            "<<edad;
			cout<<"\n\t\t\t\t\tPaís:            "<<pais;
			cout<<"\n\t\t\t\t\tDPI:            "<<dpi;
			cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
			cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
			encontrar = true;
		}
		bus>>nombre;
	}
	
	bus.close();
	
	if(!encontrar)
	cout<<"\n\t\t\t\t\tDato no encontrado o inexistente"<<endl;
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\n\t\t\t\t";
	system("PAUSE");
}

/* ingresar, ver, buscar, eliminar, modificar datos de jovenes de 12 a 18 años / 2da dosis */

void agregar5(ofstream &es) //Envía como paramétro es del archivo
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre,apellido,edad,nv;
string pais,snombre,sapellido,dpi;
fflush (stdin);
es.open("jovenesdosis2.txt",ios::out | ios::app );//
fflush (stdin);
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\t\t\t AGREGAR PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 2DA DOSIS";
cout<<"\n\t\t\t --------------------------------------------------------------";
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\n\t\t\tIngrese el primer nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, snombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el primer apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, apellido);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, sapellido);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese la edad de la persona: ";
cout<<"\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, edad);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el país: ";
cout<<"\t\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, pais);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el DPI (opcional): ";
cout<<"\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, dpi);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el número de vacunación: ";
cout<<"\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nv);

//Guardando la información en el archivo es
es<<nombre<<"\t"<<snombre<<"\t"<<apellido<<"\t"<<sapellido<<"\t"<<edad<<"\t"<<pais<<"\t"<<dpi<<"\t"<<nv<<"\t"<<endl;
es.close();
}


void ver5(ifstream &le)
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre, pais,apellido,edad,nv,snombre,sapellido,dpi;
le.open("jovenesdosis2.txt",ios::in); //Modo lectura
le>>nombre;
//Validando
if(le.is_open())
{
SetConsoleTextAttribute(hConsole,7);	
cout<<"\n\n\n\t\t\t\t VER PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 2DA DOSIS";
cout<<"\n\t\t\t\t ---------------------------------------------------------"<<endl<<endl;
while (!le.eof ())
{
le>>snombre;
le>>apellido;
le>>sapellido;
le>>edad;
le>>pais;
le>>dpi;
le>>nv;
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
cout<<"\n\t\t\t\t\tEdad:            "<<edad;
cout<<"\n\t\t\t\t\tPaís:            "<<pais;
cout<<"\n\t\t\t\t\tDPI:            "<<dpi;
cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
le>>nombre;
}
le.close();

}else
cout<<"\n\t\t\t\t\tNo hay ningún registro para mostrar"<<endl;
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\n\t\t\t\t\t";
system ("pause"); //Para mostrar en pantalla
}


void eliminar5(ifstream &elim)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,dpi;
	string nv;
	string nvaux;	
	
	elim.open("jovenesdosis2.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(elim.is_open())
	{
		SetConsoleTextAttribute(hConsole,7);
		cout<<"\n\n\t\t\t\tELIMINAR PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 2DA DOSIS";
		cout<<"\n\t\t\t\t---------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,10);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación a eliminar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		elim>>nombre;
	
	while (!elim.eof())
	{
		elim>>snombre;
		elim>>apellido;
		elim>>sapellido;
		elim>>pais;
		elim>>dpi;
		elim>>edad;
		elim>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,10);
			cout<<"\n\n\t\t\tEliminado correctamente\n";
			Sleep(1500);
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<dpi<<" "<<nv<<"\n";
		}
	
		elim>>nombre;
}
	elim.close();
	aux.close();
	
	}else
	cout<<"\n\n\t\t\tError al intentar eliminar"<<endl;
	remove("jovenesdosis2.txt");
	rename ("temp.txt","jovenesdosis2.txt");
}


void modificar5(ifstream &mod)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido;
	string nv,dpi;
	string nombreaux,snombreaux,apellidoaux,sapellidoaux,edadaux,paisaux,nvaux,dpiaux;	
	
	mod.open("jovenesdosis2.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(mod.is_open())
	{
		SetConsoleTextAttribute(hConsole,14);
		cout<<"\n\n\t\t\t\tMODIFICAR PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 2DA DOSIS";
		cout<<"\n\t\t\t\t---------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,6);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a modificar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		mod>>nombre;
	
	while (!mod.eof())
	{
		mod>>snombre;
		mod>>apellido;
		mod>>sapellido;
		mod>>edad;
		mod>>pais;
		mod>>dpi;
		mod>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\n\t\t\t Ingrese el nuevo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>snombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo primer apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>apellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>sapellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo la edad de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>edadaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo el país de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>paisaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo DPI de la persona (opcional): ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>dpiaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo número de vacunación de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nvaux;
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\t\t\tModificado correctamente: ";
			Sleep(1500);
			aux<<nombreaux<<" "<<snombreaux<<" "<<apellidoaux<<" "<<sapellidoaux<<" "<<edadaux<<" "<<paisaux<<" "<<dpiaux<<" "<<nvaux<<"\n";
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<dpi<<" "<<nv<<"\n";
		}
	
		mod>>nombre;
}
	mod.close();
	aux.close();
	
	}else
	cout<<"Error al intentar modificar"<<endl;
	remove("jovenesdosis2.txt");
	rename ("temp.txt","jovenesdosis2.txt");
}


void buscar5(ifstream &bus)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,nv,dpi;
	string nvaux;
	bus.open("jovenesdosis2.txt",ios::in); //Modo lectura
	bool encontrar = false;
	SetConsoleTextAttribute(hConsole,14);
	cout<<"\n\n\n\t\t\t\tBUSCAR PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 2DA DOSIS";
	cout<<"\n\t\t\t\t------------------------------------------------------------";
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a buscar: ";
	SetConsoleTextAttribute(hConsole,7);
	cin>>nvaux;
	
	bus>>nombre;
	
		while (!bus.eof() && !encontrar)
	{
		bus>>snombre;
		bus>>apellido;
		bus>>sapellido;
		bus>>edad;
		bus>>pais;
		bus>>dpi;
		bus>>nv;
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
			cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
			cout<<"\n\t\t\t\t\tEdad:            "<<edad;
			cout<<"\n\t\t\t\t\tPaís:            "<<pais;
			cout<<"\n\t\t\t\t\tDPI:            "<<dpi;
			cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
			cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
			encontrar = true;
		}
		bus>>nombre;
	}
	
	bus.close();
	
	if(!encontrar)
	cout<<"\n\t\t\t\t\tDato no encontrado o inexistente"<<endl;
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\n\t\t\t\t";
	system("PAUSE");
}

/* ingresar, ver, buscar, eliminar, modificar datos de jovenes de 12 a 18 años / 3ra dosis */

void agregar6(ofstream &es) //Envía como paramétro es del archivo
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre,apellido,edad,nv;
string pais,snombre,sapellido,dpi;
fflush (stdin);
es.open("jovenesdosis3.txt",ios::out | ios::app );//
fflush (stdin);
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\t\t\t AGREGAR PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 3RA DOSIS";
cout<<"\n\t\t\t --------------------------------------------------------------";
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\n\t\t\tIngrese el primer nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, snombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el primer apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, apellido);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, sapellido);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese la edad de la persona: ";
cout<<"\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, edad);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el país: ";
cout<<"\t\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, pais);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el DPI (opcional): ";
cout<<"\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, dpi);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el número de vacunación: ";
cout<<"\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nv);

//Guardando la información en el archivo es
es<<nombre<<"\t"<<snombre<<"\t"<<apellido<<"\t"<<sapellido<<"\t"<<edad<<"\t"<<pais<<"\t"<<dpi<<"\t"<<nv<<"\t"<<endl;
es.close();
}


void ver6(ifstream &le)
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre, pais,apellido,edad,nv,snombre,sapellido,dpi;
le.open("jovenesdosis3.txt",ios::in); //Modo lectura
le>>nombre;
//Validando
if(le.is_open())
{
SetConsoleTextAttribute(hConsole,7);	
cout<<"\n\n\n\t\t\t\t VER PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 3RA DOSIS";
cout<<"\n\t\t\t\t ---------------------------------------------------------"<<endl<<endl;
while (!le.eof ())
{
le>>snombre;
le>>apellido;
le>>sapellido;
le>>edad;
le>>pais;
le>>dpi;
le>>nv;
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
cout<<"\n\t\t\t\t\tEdad:            "<<edad;
cout<<"\n\t\t\t\t\tPaís:            "<<pais;
cout<<"\n\t\t\t\t\tDPI:            "<<dpi;
cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
le>>nombre;
}
le.close();

}else
cout<<"\n\t\t\t\t\tNo hay ningún registro para mostrar"<<endl;
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\n\t\t\t\t\t";
system ("pause"); //Para mostrar en pantalla
}

// André González //
void eliminar6(ifstream &elim)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,dpi;
	string nv;
	string nvaux;	
	
	elim.open("jovenesdosis3.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(elim.is_open())
	{
		SetConsoleTextAttribute(hConsole,7);
		cout<<"\n\n\t\t\t\tELIMINAR PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 3RA DOSIS";
		cout<<"\n\t\t\t\t---------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,10);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación a eliminar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		elim>>nombre;
	
	while (!elim.eof())
	{
		elim>>snombre;
		elim>>apellido;
		elim>>sapellido;
		elim>>pais;
		elim>>dpi;
		elim>>edad;
		elim>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,10);
			cout<<"\n\n\t\t\tEliminado correctamente\n";
			Sleep(1500);
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<dpi<<" "<<nv<<"\n";
		}
	
		elim>>nombre;
}
	elim.close();
	aux.close();
	
	}else
	cout<<"\n\n\t\t\tError al intentar eliminar"<<endl;
	remove("jovenesdosis3.txt");
	rename ("temp.txt","jovenesdosis3.txt");
}


void modificar6(ifstream &mod)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido;
	string nv,dpi;
	string nombreaux,snombreaux,apellidoaux,sapellidoaux,edadaux,paisaux,nvaux,dpiaux;	
	
	mod.open("jovenesdosis3.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(mod.is_open())
	{
		SetConsoleTextAttribute(hConsole,14);
		cout<<"\n\n\t\t\t\tMODIFICAR PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 3RA DOSIS";
		cout<<"\n\t\t\t\t---------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,6);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a modificar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		mod>>nombre;
	
	while (!mod.eof())
	{
		mod>>snombre;
		mod>>apellido;
		mod>>sapellido;
		mod>>edad;
		mod>>pais;
		mod>>dpi;
		mod>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\n\t\t\t Ingrese el nuevo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>snombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo primer apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>apellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>sapellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo la edad de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>edadaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo el país de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>paisaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo DPI de la persona (opcional): ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>dpiaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo número de vacunación de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nvaux;
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\t\t\tModificado correctamente: ";
			Sleep(1500);
			aux<<nombreaux<<" "<<snombreaux<<" "<<apellidoaux<<" "<<sapellidoaux<<" "<<edadaux<<" "<<paisaux<<" "<<dpiaux<<" "<<nvaux<<"\n";
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<dpi<<" "<<nv<<"\n";
		}
	
		mod>>nombre;
}
	mod.close();
	aux.close();
	
	}else
	cout<<"Error al intentar modificar"<<endl;
	remove("jovenesdosis3.txt");
	rename ("temp.txt","jovenesdosis3.txt");
}


void buscar6(ifstream &bus)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,nv,dpi;
	string nvaux;
	bus.open("jovenesdosis3.txt",ios::in); //Modo lectura
	bool encontrar = false;
	SetConsoleTextAttribute(hConsole,14);
	cout<<"\n\n\n\t\t\t\tBUSCAR PERSONAS VACUNADAS COVID 19 - 12 A 18 AÑOS / 3RA DOSIS";
	cout<<"\n\t\t\t\t------------------------------------------------------------";
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a buscar: ";
	SetConsoleTextAttribute(hConsole,7);
	cin>>nvaux;
	
	bus>>nombre;
	
		while (!bus.eof() && !encontrar)
	{
		bus>>snombre;
		bus>>apellido;
		bus>>sapellido;
		bus>>edad;
		bus>>pais;
		bus>>dpi;
		bus>>nv;
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
			cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
			cout<<"\n\t\t\t\t\tEdad:            "<<edad;
			cout<<"\n\t\t\t\t\tPaís:            "<<pais;
			cout<<"\n\t\t\t\t\tDPI:            "<<dpi;
			cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
			cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
			encontrar = true;
		}
		bus>>nombre;
	}
	
	bus.close();
	
	if(!encontrar)
	cout<<"\n\t\t\t\t\tDato no encontrado o inexistente"<<endl;
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\n\t\t\t\t";
	system("PAUSE");
}

/* ingresar, ver, buscar, eliminar, modificar datos de adultos mayores a 18 años / 1ra dosis */

void agregar7(ofstream &es) //Envía como paramétro es del archivo
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre,apellido,edad,nv;
string pais,snombre,sapellido,dpi;
fflush (stdin);
es.open("adultosdosis1.txt",ios::out | ios::app );//
fflush (stdin);
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\t\t\t AGREGAR PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 1RA DOSIS";
cout<<"\n\t\t\t -------------------------------------------------------------------";
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\n\t\t\tIngrese el primer nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, snombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el primer apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, apellido);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, sapellido);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese la edad de la persona: ";
cout<<"\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, edad);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el país: ";
cout<<"\t\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, pais);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el DPI: ";
cout<<"\t\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, dpi);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el número de vacunación: ";
cout<<"\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nv);

//Guardando la información en el archivo es
es<<nombre<<"\t"<<snombre<<"\t"<<apellido<<"\t"<<sapellido<<"\t"<<edad<<"\t"<<pais<<"\t"<<dpi<<"\t"<<nv<<"\t"<<endl;
es.close();
}


void ver7(ifstream &le)
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre, pais,apellido,edad,nv,snombre,sapellido,dpi;
le.open("adultosdosis1.txt",ios::in); //Modo lectura
le>>nombre;
//Validando
if(le.is_open())
{
SetConsoleTextAttribute(hConsole,7);	
cout<<"\n\n\n\t\t\t\tVER PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 1RA DOSIS";
cout<<"\n\t\t\t\t---------------------------------------------------------------"<<endl<<endl;
while (!le.eof ())
{
le>>snombre;
le>>apellido;
le>>sapellido;
le>>edad;
le>>pais;
le>>dpi;
le>>nv;
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
cout<<"\n\t\t\t\t\tEdad:            "<<edad;
cout<<"\n\t\t\t\t\tPaís:            "<<pais;
cout<<"\n\t\t\t\t\tDPI:            "<<dpi;
cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
le>>nombre;
}
le.close();

}else
cout<<"\n\t\t\t\t\tNo hay ningún registro para mostrar"<<endl;
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\n\t\t\t\t\t";
system ("pause"); //Para mostrar en pantalla
}


void eliminar7(ifstream &elim)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,dpi;
	string nv;
	string nvaux;	
	
	elim.open("adultosdosis1.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(elim.is_open())
	{
		SetConsoleTextAttribute(hConsole,7);
		cout<<"\n\n\t\t\t\tELIMINAR PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 1RA DOSIS";
		cout<<"\n\t\t\t\t--------------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,10);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación a eliminar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		elim>>nombre;
	
	while (!elim.eof())
	{
		elim>>snombre;
		elim>>apellido;
		elim>>sapellido;
		elim>>pais;
		elim>>dpi;
		elim>>edad;
		elim>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,10);
			cout<<"\n\n\t\t\tEliminado correctamente\n";
			Sleep(1500);
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<dpi<<" "<<nv<<"\n";
		}
	
		elim>>nombre;
}
	elim.close();
	aux.close();
	
	}else
	cout<<"\n\n\t\t\tError al intentar eliminar"<<endl;
	remove("adultosdosis1.txt");
	rename ("temp.txt","adultosdosis1.txt");
}


void modificar7(ifstream &mod)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido;
	string nv,dpi;
	string nombreaux,snombreaux,apellidoaux,sapellidoaux,edadaux,paisaux,nvaux,dpiaux;	
	
	mod.open("adultosdosis1.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(mod.is_open())
	{
		SetConsoleTextAttribute(hConsole,14);
		cout<<"\n\n\t\t\t\tMODIFICAR PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 1RA DOSIS";
		cout<<"\n\t\t\t\t---------------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,6);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a modificar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		mod>>nombre;
	
	while (!mod.eof())
	{
		mod>>snombre;
		mod>>apellido;
		mod>>sapellido;
		mod>>edad;
		mod>>pais;
		mod>>dpi;
		mod>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\n\t\t\t Ingrese el nuevo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>snombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo primer apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>apellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>sapellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo la edad de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>edadaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo el país de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>paisaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo DPI de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>dpiaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo número de vacunación de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nvaux;
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\t\t\tModificado correctamente: ";
			Sleep(1500);
			aux<<nombreaux<<" "<<snombreaux<<" "<<apellidoaux<<" "<<sapellidoaux<<" "<<edadaux<<" "<<paisaux<<" "<<dpiaux<<" "<<nvaux<<"\n";
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<dpi<<" "<<nv<<"\n";
		}
	
		mod>>nombre;
}
	mod.close();
	aux.close();
	
	}else
	cout<<"Error al intentar modificar"<<endl;
	remove("adultosdosis1.txt");
	rename ("temp.txt","adultosdosis1.txt");
}


void buscar7(ifstream &bus)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,nv,dpi;
	string nvaux;
	bus.open("adultosdosis1.txt",ios::in); //Modo lectura
	bool encontrar = false;
	SetConsoleTextAttribute(hConsole,14);
	cout<<"\n\n\n\t\t\t\tBUSCAR PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 1RA DOSIS";
	cout<<"\n\t\t\t\t------------------------------------------------------------------";
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a buscar: ";
	SetConsoleTextAttribute(hConsole,7);
	cin>>nvaux;
	
	bus>>nombre;
	
		while (!bus.eof() && !encontrar)
	{
		bus>>snombre;
		bus>>apellido;
		bus>>sapellido;
		bus>>edad;
		bus>>pais;
		bus>>dpi;
		bus>>nv;
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
			cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
			cout<<"\n\t\t\t\t\tEdad:            "<<edad;
			cout<<"\n\t\t\t\t\tPaís:            "<<pais;
			cout<<"\n\t\t\t\t\tDPI:            "<<dpi;
			cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
			cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
			encontrar = true;
		}
		bus>>nombre;
	}
	
	bus.close();
	
	if(!encontrar)
	cout<<"\n\t\t\t\t\tDato no encontrado o inexistente"<<endl;
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\n\t\t\t\t";
	system("PAUSE");
}


/* ingresar, ver, buscar, eliminar, modificar datos de adultos mayores a 18 años / 1ra dosis */

void agregar8(ofstream &es) //Envía como paramétro es del archivo
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre,apellido,edad,nv;
string pais,snombre,sapellido,dpi;
fflush (stdin);
es.open("adultosdosis2.txt",ios::out | ios::app );//
fflush (stdin);
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\t\t\t AGREGAR PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 2DA DOSIS";
cout<<"\n\t\t\t -------------------------------------------------------------------";
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\n\t\t\tIngrese el primer nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, snombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el primer apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, apellido);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, sapellido);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese la edad de la persona: ";
cout<<"\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, edad);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el país: ";
cout<<"\t\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, pais);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el DPI: ";
cout<<"\t\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, dpi);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el número de vacunación: ";
cout<<"\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nv);

//Guardando la información en el archivo es
es<<nombre<<"\t"<<snombre<<"\t"<<apellido<<"\t"<<sapellido<<"\t"<<edad<<"\t"<<pais<<"\t"<<dpi<<"\t"<<nv<<"\t"<<endl;
es.close();
}


void ver8(ifstream &le)
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre, pais,apellido,edad,nv,snombre,sapellido,dpi;
le.open("adultosdosis2.txt",ios::in); //Modo lectura
le>>nombre;
//Validando
if(le.is_open())
{
SetConsoleTextAttribute(hConsole,7);	
cout<<"\n\n\n\t\t\t\tVER PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 2DA DOSIS";
cout<<"\n\t\t\t\t---------------------------------------------------------------"<<endl<<endl;
while (!le.eof ())
{
le>>snombre;
le>>apellido;
le>>sapellido;
le>>edad;
le>>pais;
le>>dpi;
le>>nv;
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
cout<<"\n\t\t\t\t\tEdad:            "<<edad;
cout<<"\n\t\t\t\t\tPaís:            "<<pais;
cout<<"\n\t\t\t\t\tDPI:            "<<dpi;
cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
le>>nombre;
}
le.close();

}else
cout<<"\n\t\t\t\t\tNo hay ningún registro para mostrar"<<endl;
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\n\t\t\t\t\t";
system ("pause"); //Para mostrar en pantalla
}


void eliminar8(ifstream &elim)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,dpi;
	string nv;
	string nvaux;	
	
	elim.open("adultosdosis2.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(elim.is_open())
	{
		SetConsoleTextAttribute(hConsole,7);
		cout<<"\n\n\t\t\t\tELIMINAR PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 2DA DOSIS";
		cout<<"\n\t\t\t\t--------------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,10);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación a eliminar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		elim>>nombre;
	
	while (!elim.eof())
	{
		elim>>snombre;
		elim>>apellido;
		elim>>sapellido;
		elim>>pais;
		elim>>dpi;
		elim>>edad;
		elim>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,10);
			cout<<"\n\n\t\t\tEliminado correctamente\n";
			Sleep(1500);
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<dpi<<" "<<nv<<"\n";
		}
	
		elim>>nombre;
}
	elim.close();
	aux.close();
	
	}else
	cout<<"\n\n\t\t\tError al intentar eliminar"<<endl;
	remove("adultosdosis2.txt");
	rename ("temp.txt","adultosdosis2.txt");
}


void modificar8(ifstream &mod)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido;
	string nv,dpi;
	string nombreaux,snombreaux,apellidoaux,sapellidoaux,edadaux,paisaux,nvaux,dpiaux;	
	
	mod.open("adultosdosis2.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(mod.is_open())
	{
		SetConsoleTextAttribute(hConsole,14);
		cout<<"\n\n\t\t\t\tMODIFICAR PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 2DA DOSIS";
		cout<<"\n\t\t\t\t---------------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,6);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a modificar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		mod>>nombre;
	
	while (!mod.eof())
	{
		mod>>snombre;
		mod>>apellido;
		mod>>sapellido;
		mod>>edad;
		mod>>pais;
		mod>>dpi;
		mod>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\n\t\t\t Ingrese el nuevo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>snombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo primer apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>apellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>sapellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo la edad de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>edadaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo el país de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>paisaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo DPI de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>dpiaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo número de vacunación de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nvaux;
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\t\t\tModificado correctamente: ";
			Sleep(1500);
			aux<<nombreaux<<" "<<snombreaux<<" "<<apellidoaux<<" "<<sapellidoaux<<" "<<edadaux<<" "<<paisaux<<" "<<dpiaux<<" "<<nvaux<<"\n";
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<dpi<<" "<<nv<<"\n";
		}
	
		mod>>nombre;
}
	mod.close();
	aux.close();
	
	}else
	cout<<"Error al intentar modificar"<<endl;
	remove("adultosdosis2.txt");
	rename ("temp.txt","adultosdosis2.txt");
}


void buscar8(ifstream &bus)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,nv,dpi;
	string nvaux;
	bus.open("adultosdosis2.txt",ios::in); //Modo lectura
	bool encontrar = false;
	SetConsoleTextAttribute(hConsole,14);
	cout<<"\n\n\n\t\t\t\tBUSCAR PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 2DA DOSIS";
	cout<<"\n\t\t\t\t------------------------------------------------------------------";
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a buscar: ";
	SetConsoleTextAttribute(hConsole,7);
	cin>>nvaux;
	
	bus>>nombre;
	
		while (!bus.eof() && !encontrar)
	{
		bus>>snombre;
		bus>>apellido;
		bus>>sapellido;
		bus>>edad;
		bus>>pais;
		bus>>dpi;
		bus>>nv;
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
			cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
			cout<<"\n\t\t\t\t\tEdad:            "<<edad;
			cout<<"\n\t\t\t\t\tPaís:            "<<pais;
			cout<<"\n\t\t\t\t\tDPI:            "<<dpi;
			cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
			cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
			encontrar = true;
		}
		bus>>nombre;
	}
	
	bus.close();
	
	if(!encontrar)
	cout<<"\n\t\t\t\t\tDato no encontrado o inexistente"<<endl;
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\n\t\t\t\t";
	system("PAUSE");
}


/* ingresar, ver, buscar, eliminar, modificar datos de adultos mayores a 18 años / 3ra dosis */

void agregar9(ofstream &es) //Envía como paramétro es del archivo
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre,apellido,edad,nv;
string pais,snombre,sapellido,dpi;
fflush (stdin);
es.open("adultosdosis3.txt",ios::out | ios::app );//
fflush (stdin);
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\t\t\t AGREGAR PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 3RA DOSIS";
cout<<"\n\t\t\t -------------------------------------------------------------------";
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\n\t\t\tIngrese el primer nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo nombre de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, snombre);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el primer apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, apellido);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el segundo apellido de la persona: ";
cout<<"\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, sapellido);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese la edad de la persona: ";
cout<<"\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, edad);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el país: ";
cout<<"\t\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, pais);
fflush (stdin);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el DPI: ";
cout<<"\t\t\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, dpi);
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\n\t\t\tIngrese el número de vacunación: ";
cout<<"\t\t";
SetConsoleTextAttribute(hConsole,7);
getline(cin, nv);

//Guardando la información en el archivo es
es<<nombre<<"\t"<<snombre<<"\t"<<apellido<<"\t"<<sapellido<<"\t"<<edad<<"\t"<<pais<<"\t"<<dpi<<"\t"<<nv<<"\t"<<endl;
es.close();
}


void ver9(ifstream &le)
{
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
system ("cls");
string nombre, pais,apellido,edad,nv,snombre,sapellido,dpi;
le.open("adultosdosis3.txt",ios::in); //Modo lectura
le>>nombre;
//Validando
if(le.is_open())
{
SetConsoleTextAttribute(hConsole,7);	
cout<<"\n\n\n\t\t\t\tVER PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 3RA DOSIS";
cout<<"\n\t\t\t\t---------------------------------------------------------------"<<endl<<endl;
while (!le.eof ())
{
le>>snombre;
le>>apellido;
le>>sapellido;
le>>edad;
le>>pais;
le>>dpi;
le>>nv;
SetConsoleTextAttribute(hConsole,10);
cout<<"\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
cout<<"\n\t\t\t\t\tEdad:            "<<edad;
cout<<"\n\t\t\t\t\tPaís:            "<<pais;
cout<<"\n\t\t\t\t\tDPI:            "<<dpi;
cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
le>>nombre;
}
le.close();

}else
cout<<"\n\t\t\t\t\tNo hay ningún registro para mostrar"<<endl;
SetConsoleTextAttribute(hConsole,14);
cout<<"\n\n\t\t\t\t\t";
system ("pause"); //Para mostrar en pantalla
}


void eliminar9(ifstream &elim)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,dpi;
	string nv;
	string nvaux;	
	
	elim.open("adultosdosis3.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(elim.is_open())
	{
		SetConsoleTextAttribute(hConsole,7);
		cout<<"\n\n\t\t\t\tELIMINAR PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 3RA DOSIS";
		cout<<"\n\t\t\t\t--------------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,10);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación a eliminar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		elim>>nombre;
	
	while (!elim.eof())
	{
		elim>>snombre;
		elim>>apellido;
		elim>>sapellido;
		elim>>pais;
		elim>>dpi;
		elim>>edad;
		elim>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,10);
			cout<<"\n\n\t\t\tEliminado correctamente\n";
			Sleep(1500);
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<dpi<<" "<<nv<<"\n";
		}
	
		elim>>nombre;
}
	elim.close();
	aux.close();
	
	}else
	cout<<"\n\n\t\t\tError al intentar eliminar"<<endl;
	remove("adultosdosis3.txt");
	rename ("temp.txt","adultosdosis3.txt");
}


void modificar9(ifstream &mod)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system ("cls");
	string nombre,apellido,pais,edad,snombre,sapellido;
	string nv,dpi;
	string nombreaux,snombreaux,apellidoaux,sapellidoaux,edadaux,paisaux,nvaux,dpiaux;	
	
	mod.open("adultosdosis3.txt",ios::in); //Modo lectura
	ofstream aux("temp.txt",ios::out); //Modo Escritura
	
	if(mod.is_open())
	{
		SetConsoleTextAttribute(hConsole,14);
		cout<<"\n\n\t\t\t\tMODIFICAR PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 3RA DOSIS";
		cout<<"\n\t\t\t\t---------------------------------------------------------------------";
		SetConsoleTextAttribute(hConsole,6);
		cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a modificar: ";
		SetConsoleTextAttribute(hConsole,14);
		cin>>nvaux;
		mod>>nombre;
	
	while (!mod.eof())
	{
		mod>>snombre;
		mod>>apellido;
		mod>>sapellido;
		mod>>edad;
		mod>>pais;
		mod>>dpi;
		mod>>nv;
		
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\n\t\t\t Ingrese el nuevo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo nombre de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>snombreaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo primer apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>apellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo segundo apellido de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>sapellidoaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo la edad de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>edadaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo el país de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>paisaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese de nuevo DPI de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>dpiaux;
			SetConsoleTextAttribute(hConsole,7);
			cout<<"\n\t\t\t Ingrese el nuevo número de vacunación de la persona: ";
			SetConsoleTextAttribute(hConsole,10);
			cin>>nvaux;
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\t\t\tModificado correctamente: ";
			Sleep(1500);
			aux<<nombreaux<<" "<<snombreaux<<" "<<apellidoaux<<" "<<sapellidoaux<<" "<<edadaux<<" "<<paisaux<<" "<<dpiaux<<" "<<nvaux<<"\n";
		}else
		{
			aux<<nombre<<" "<<snombre<<" "<<apellido<<" "<<sapellido<<" "<<edad<<" "<<pais<<" "<<dpi<<" "<<nv<<"\n";
		}
	
		mod>>nombre;
}
	mod.close();
	aux.close();
	
	}else
	cout<<"Error al intentar modificar"<<endl;
	remove("adultosdosis3.txt");
	rename ("temp.txt","adultosdosis3.txt");
}

 
void buscar9(ifstream &bus)
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system("cls");
	string nombre,apellido,pais,edad,snombre,sapellido,nv,dpi;
	string nvaux;
	bus.open("adultosdosis3.txt",ios::in); //Modo lectura
	bool encontrar = false;
	SetConsoleTextAttribute(hConsole,14);
	cout<<"\n\n\n\t\t\t\tBUSCAR PERSONAS VACUNADAS COVID 19 - MAYORES A 18 AÑOS / 3RA DOSIS";
	cout<<"\n\t\t\t\t------------------------------------------------------------------";
	SetConsoleTextAttribute(hConsole,10);
	cout<<"\n\n\n\t\t\t Ingrese el número de vacunación de la persona a buscar: ";
	SetConsoleTextAttribute(hConsole,7);
	cin>>nvaux;
	
	bus>>nombre;
	
		while (!bus.eof() && !encontrar)
	{
		bus>>snombre;
		bus>>apellido;
		bus>>sapellido;
		bus>>edad;
		bus>>pais;
		bus>>dpi;
		bus>>nv;
		if(nv==nvaux)
		{
			SetConsoleTextAttribute(hConsole,14);
			cout<<"\n\n\t\t\t\t\tNombres:	 "<<nombre<<" "<<snombre;
			cout<<"\n\t\t\t\t\tApellidos:	 "<<apellido<<" "<<sapellido;
			cout<<"\n\t\t\t\t\tEdad:            "<<edad;
			cout<<"\n\t\t\t\t\tPaís:            "<<pais;
			cout<<"\n\t\t\t\t\tDPI:            "<<dpi;
			cout<<"\n\t\t\t\t\tNúmero de vacunación:      "<<nv;
			cout<<"\n\t\t\t\t\t--------------------------------"<<endl;
			encontrar = true;
		}
		bus>>nombre;
	}
	
	bus.close();
	
	if(!encontrar)
	cout<<"\n\t\t\t\t\tDato no encontrado o inexistente"<<endl;
	SetConsoleTextAttribute(hConsole,6);
	cout<<"\n\n\t\t\t\t";
	system("PAUSE");
}
