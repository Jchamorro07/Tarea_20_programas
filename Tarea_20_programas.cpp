#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <math.h>
using namespace std;

void gotoxy(int x1,int y1){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x1;  
      dwPos.Y= y1;  
      SetConsoleCursorPosition(hcon,dwPos);
}
int main(){
	
	int opcion,op;
	cout<<"ingrese el numero del programa al que quiere ingresar:"<<endl;
	cout<<" "<<endl;
	cout<<"1. Suma, Resta, Multiplicacion y division de 2 numeros"<<endl;
	cout<<"2. Determinar si un numero es par o impar"<<endl;
	cout<<"3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
	cout<<"4. Determinar si una palabra o un numero es palindromo."<<endl;
	cout<<"5. Conversion de numeros arabigos a romanos (minimo 1,000)"<<endl;
	cout<<"6. Conversion de numeros enteros a letras"<<endl;
	cout<<"7. Conversion de numeros enteros con decimal a letras"<<endl;
	cout<<"8. Tabla de multiplicar"<<endl;
	cout<<"9. Tabla de multiplicar del 1 al 10 "<<endl;
	cout<<"10. Crear de forma grafica la multiplicación manual"<<endl;
	cout<<"11. Conversion de numeros decimales a binario"<<endl;
	cout<<"12. Conversion de numeros decimales a hexadecimales"<<endl;
	cout<<"13. Crear Figuras Geometricas Basicas"<<endl;
	cout<<"14. Mover un punto en toda la pantalla "<<endl;
	cout<<"15. Simulacion de un Cajero (Automata)"<<endl;
	cout<<"16. Calcular la hipotenusa"<<endl;
	cout<<"17. Suma, Resta, Multiplicacion y division de numeros al cuadrado"<<endl;
	cout<<"18. calcula el mes y el dia ingresado"<<endl;
	cout<<"19. temporizador"<<endl;
	cout<<"20. verificar si la letra ingresada es mayuscula o minuscula"<<endl;
	cout<<"21. salir"<<endl;
	cout<<endl;
	cout<<"Opcion: ";
	cin>> opcion;
	
	system("cls");
	
	if (opcion==1){
	
		int num1,num2;
		float total;
		cout<<"bienvenido al programa de Suma, Resta, Multiplicacion y Divison"<<endl;
		cout<<" "<<endl;
		cout<<"ingrese el primer numero:"<<endl;
		cin>> num1;
		cout<<"ingrese el segundo numero:"<<endl;
		cin>> num2;
		
		system("cls");
		cout<<"que operacion desea realizar"<<endl;
		cout<<" "<<endl;
		cout<<"1.Suma"<<endl;
		cout<<"2.Resta"<<endl;
		cout<<"3.Multiplicacion"<<endl;
		cout<<"4.Division"<<endl;
		cin>>op;
		
		system("cls");
		
		if(op==1){
			
			total= num1+num2;
			cout<<"El resultado es:"<<endl;
			cout<<" "<<endl;
			cout<<" "<<num1;
			cout<<" + "<<num2;
			cout<<" = "<<total;
		}
		
		if(op==2){
			
			total= num1-num2;
			cout<<"El resultado es:"<<endl;
			cout<<" "<<endl;
			cout<<" "<<num1;
			cout<<" - "<<num2;
			cout<<" = "<<total;
		}
		
		if(op==3){
			
			total= num1*num2;
			cout<<"El resultado es:"<<endl;
			cout<<" "<<endl;
			cout<<" "<<num1;
			cout<<" * "<<num2;
			cout<<" = "<<total;
		}
		
		if(op==4){
			
			total= num1/num2;
			cout<<"El resultado es:"<<endl;
			cout<<" "<<endl;
			cout<<" "<<num1;
			cout<<" / "<<num2;
			cout<<" = "<<total;
		}
	}
	
	if (opcion==2){
		int num;
			
			cout<<"Ingrese un numero:"<<endl;
			cin>> num;
			
			if (num%2==0){
				
				cout<<"El numero es par"<<endl;
			}
			
			else {
				cout<<"El numero es impar"<<endl;
			}
	}
	
	if (opcion==3){
	double kilometro,milla,metro,pulgada,libra,kilo;
		
		
		cout<<" Que conversion desea realizar"<<endl;
		cout<<" "<<endl;
		cout<<"1. Kilometros a millas"<<endl;
		cout<<"2. millas a Kilometros"<<endl;
		cout<<"3. Metros a pulgadas"<<endl;
		cout<<"4. Pulgadas a metros"<<endl;
		cout<<"5. Libras a Kilos "<<endl;
		cout<<"6. kilos a libras"<<endl;		
		cin>> op;
		
		system("cls");
		
			if (op==1){
			cout<<"ingrese el numero de Kilometros que desea convertir"<<endl;
			cin>>kilometro;
			
			milla= kilometro * 0.621371;
			cout<<" "<<endl;
			cout<<"El total de millas es de: "<<milla;
			}
			
			if (op==2){
			cout<<"ingrese el numero de Millas que desea convertir"<<endl;
			cin>>milla;
			
			kilometro= milla * 1.60934;
			cout<<" "<<endl;
			cout<<"El total de Kilometros es de: "<<kilometro;
			}	
			
			if (op==3){
			cout<<"ingrese el numero de Metros que desea convertir"<<endl;
			cin>>metro;
			
			pulgada= metro * 39.3701;
			cout<<" "<<endl;
			cout<<"El total de Pulgadas es de: "<<pulgada;
			}	
			
			if (op==4){
			cout<<"ingrese el numero de Pulgadas que desea convertir"<<endl;
			cin>>pulgada;
			
			metro= pulgada * 0.0254;
			cout<<" "<<endl;
			cout<<"El total de Metros es de: "<<metro;
			}	
			
			if (op==5){
			cout<<"ingrese el numero de Libras que desea convertir"<<endl;
			cin>>libra;
			
			kilo= libra * 0.453592;
			cout<<" "<<endl;
			cout<<"El total de Kilos es de: "<<kilo;
			}
			
			if (op==6){
			cout<<"ingrese el numero de Kilos que desea convertir"<<endl;
			cin>>kilo;
			
			libra= kilo * 2.20462;
			cout<<" "<<endl;
			cout<<"El total de Libras es de: "<<libra;
			}
	}
	
	if (opcion==4){
		
		string palabra,copia;
				int i=0;
				
				cout<<"ingrese una palabra o numero a verificar: "<<endl;
				cout<<endl;
				cin>>palabra;
				
				for (i= palabra.size() - 1; i >= 0 ; i--){
				copia += palabra[i];
				}
				
				if (palabra== copia){
					
					cout<< endl;
					cout<<"Es palindroma"<<endl;
					
				}
				else {
					cout<< endl;
					cout<<"No es palindroma"<<endl;
				}
	}
	
	if (opcion==5){
		int numero,unidades,decenas,centenas,millares;
		
		cout<<"Ingrese un numero"<<endl; 
		cin>> numero; 
		cout<<"--------------"<<endl;
		cout<<"Numeros romanos \n "<<endl;
		
		unidades=numero%10; numero=numero/10;
		decenas=numero%10; numero=numero/10;
		centenas=numero%10; numero=numero/10;
		millares=numero%10; numero=numero/10;
		
		switch (millares){
			case 1: cout<<"M"; break;
			case 2: cout<<"MM"; break;
			case 3: cout<<"MMM"; break;
		}
		
		switch (centenas){
			case 1: cout<<"C"; break;
			case 2: cout<<"CC"; break;
			case 3: cout<<"CCC"; break;
			case 4: cout<<"CD"; break;
			case 5: cout<<"D"; break;
			case 6: cout<<"DC"; break;
			case 7: cout<<"DCC"; break;
			case 8: cout<<"DCCC"; break;
			case 9: cout<<"CM"; break;
		}
		
		switch (decenas){
			case 1: cout<<"X"; break;
			case 2: cout<<"XX"; break;
			case 3: cout<<"XXX"; break;
			case 4: cout<<"XL"; break;
			case 5: cout<<"L"; break;
			case 6: cout<<"LX"; break;
			case 7: cout<<"LXX"; break;
			case 8: cout<<"LXXX"; break;
			case 9: cout<<"XC"; break;
		}
		
		switch (unidades){
			case 1: cout<<"I"; break;
			case 2: cout<<"II"; break;
			case 3: cout<<"III"; break;
			case 4: cout<<"IV"; break;
			case 5: cout<<"V"; break;
			case 6: cout<<"VI"; break;
			case 7: cout<<"VII"; break;
			case 8: cout<<"VIII"; break;
			case 9: cout<<"IX"; break;
		}
	}
	
	if (opcion==6){
		double valor;
		int miles,cientos,unidades;
		char numeros[100][20] = 
		
			 {
			  {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
			  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
			  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
			  {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
			  {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
			  {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
			  {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
			  {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
			  {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
			  {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
			 };
			
			 char centenas[10][20] = 
			 {
			  {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
			 };
			 
			 std::cout << "Ingrese un numero para convertir a letras: ";
			 std::cin >> valor;
			
			 miles = ((int)valor)/1000;
			 cientos = (((int)valor)%1000)/100;
			 unidades = ((int)valor)%100;
			
			
			 if (miles)
			  std::cout << numeros[miles] << " mil ";
			 
			 if (cientos)
			  std::cout << centenas[cientos] << " ";
			 
			 if (unidades) 
			  std::cout << numeros[unidades];
			 
			
	}
	
	if (opcion==7){
		double valor;
		int miles,cientos,unidades,decimales;
		char numeros[100][20] = 
		
			 {
			  {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
			  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
			  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
			  {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
			  {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
			  {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
			  {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
			  {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
			  {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
			  {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
			 };
			
			 char centenas[10][20] = 
			 {
			  {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
			 };
			 
			 std::cout << "Ingrese un numero para convertir a letras: ";
			 std::cin >> valor;
			
			 miles = ((int)valor)/1000;
			 cientos = (((int)valor)%1000)/100;
			 unidades = ((int)valor)%100;
			 decimales = ((int) (valor*100.0))%100 ;
			
			 if (miles)
			  std::cout << numeros[miles] << " mil ";
			 
			 if (cientos)
			  std::cout << centenas[cientos] << " ";
			 
			 if (unidades) 
			  std::cout << numeros[unidades];
			 
			 if (decimales)
			 {
			  if(miles || cientos || unidades)
			  {
			   std::cout << " con ";
			  }
			 
			  std::cout << numeros[decimales] << " centimos.";
			 }
			
			 std::cout << std::endl;
		
	}
	
	if (opcion==8){
		int num=5; 
		
			cout<<"Tabla de multiplicar del 5 \n"<<endl;
		for (int i=1; i<=10; i++){
				
			cout<<num<<" * "<<i<<" = "<<num*i<<endl;
		}
	}
	
	if (opcion==9){
		int inicio=0,fin = 0,multiplicar = 0;
		cout<<"Ingrese Tabla Inicio:";
		cin>>inicio;
		cout<<"Ingrese Tabla Fin:";
		cin>>fin;
		
		
		for (int i=inicio;i<=fin;i++){
			
			for(int ii=1;ii<=10;ii++){
					multiplicar = i * ii;
					cout<<i<< " X "<<ii<<" = "<<multiplicar<<endl;
		
			}
			cout<<endl;
		}
	
	}
	
	if (opcion==10){
		
	}
	
	if (opcion==11){
		int decimal;
		short binario[8];
	
		
		cout<<"ingrese el numero a convertir a binario"<<endl;
		cin>> decimal;
		
		for (int i=0; i<8; i++){
			binario [i]= decimal % 2;
			decimal /=2;
		}
		
		cout<<"El numero en binario es: "<<endl;
		
		for( int i=7; i>=0; i--){
			cout<<binario[i]; 
		}
	}
	
	if (opcion==12){
		int digitoex[20];
		int decimal,residuo,resultado, i=0; 
		
		cout<<"ingrese el numero a convertir"<<endl;
		cin>> decimal;
		
		do{
			residuo = decimal % 16;
			resultado = decimal / 16; 
			digitoex[i] = residuo;
			decimal = resultado;
			i++;
		}while(resultado > 15);
		digitoex[i] = resultado;
		
		cout<<"el resultado en hexadecimal es de: "<<endl;
		
		for (int j = i; j>=0; j--){
			if (digitoex[j]==10){
				cout<<"A";
			}
			else if (digitoex[j]==11){
				cout<<"B";
			}
			else if (digitoex[j]==12){
				cout<<"C";
			}
			else if (digitoex[j]==13){
				cout<<"D";
			}
			else if (digitoex[j]==14){
				cout<<"E";
			}
			else if (digitoex[j]==15){
				cout<<"F";
			}
			else {
				cout<<digitoex[j];
			} 
		}		
	}
	
	if (opcion==13){
		cout<<"que figura geometrica desea realizar"<<endl;
		cout<<endl;
		cout<<"1. circulo"<<endl;
		cout<<"2. cuadrado"<<endl;
		cout<<"3. rectangulo"<<endl;
		cout<<"4. triangulo"<<endl;
		cout<<endl;
		cin>>op;
		system("cls");
		
		if(op==1){
			cout<<" CIRCULO \n "<<endl;
			cout<<"   @@@@@ "<<endl;
			cout<<"  @@@@@@@ "<<endl;
			cout<<" @@@@@@@@@ "<<endl;
			cout<<" @@@@@@@@@ "<<endl;
			cout<<"  @@@@@@@ "<<endl;
			cout<<"   @@@@@ "<<endl;
		}
		
		if(op==2){
			cout<<" cuadrado \n "<<endl;
			cout<<" ########## "<<endl;
			cout<<" ########## "<<endl;
			cout<<" ########## "<<endl;
			cout<<" ########## "<<endl;
			cout<<" ########## "<<endl;
		}
		if(op==3){
			cout<<" rectangulo \n "<<endl;
			cout<<" %%%%%%%%%%%%%%%%%%%% "<<endl;
			cout<<" %%%%%%%%%%%%%%%%%%%% "<<endl;
			cout<<" %%%%%%%%%%%%%%%%%%%% "<<endl;
			cout<<" %%%%%%%%%%%%%%%%%%%% "<<endl;
			cout<<" %%%%%%%%%%%%%%%%%%%% "<<endl;
			
		}
		
		if(op==4){
			cout<<" triangulo \n "<<endl;
			cout<<"       ^ "<<endl;
			cout<<"      ^^^ "<<endl;
			cout<<"     ^^^^^ "<<endl;
			cout<<"    ^^^^^^^ "<<endl;
			cout<<"   ^^^^^^^^^ "<<endl;
			cout<<"  ^^^^^^^^^^^ "<<endl;
			cout<<" ^^^^^^^^^^^^^ "<<endl;
			cout<<"^^^^^^^^^^^^^^^ "<<endl;
		}
		
	}
	
	if (opcion==14){
			int x=5, y=5;
   
				char asterisco;
			  while(asterisco!=27)
			  {
			    asterisco=getch();
			  	if(asterisco=='a')x--;
			  	if(asterisco=='d')x++;
			  	if(asterisco=='w')y--;
			  	if(asterisco=='s')y++;
			  	
			  	system("cls");
			  	gotoxy(x,y);  
		      	cout<<"*";  
			  }
	}
		
	
	if (opcion==15){
		int saldo_ini=5000,deposito,retiro,saldo_tot=0;
		cout<<"BIENVENIDO A SU CAJERO  5B"<<endl;
		cout<<"1. Depositar dinero a la cuenta"<<endl;
		cout<<"2. Retirar dinero de la cuenta"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>op;
		system("cls");
		
		switch(op)
		{
			case 1:
				cout<<"Cuanto dinero desea depositar a su cuenta"<<endl;
				cin>>deposito;
				
				saldo_tot=saldo_ini+deposito;
				
				cout<<"\n\n";
				cout<<"Su deposito se ha realizado con exito"<<endl;
				cout<<"\n\n";
				cout<<"Su saldo actual es de: "<<saldo_tot;
				break; 
				
			case 2:
				cout<<" Cuanto dinero desea retirar"<<endl;
				cin>>retiro;
				
				if(retiro>saldo_ini){
					cout<<"Su transaccion no se puede realizar"<<endl;
				}else{
					
					saldo_tot=saldo_ini-retiro;
				
				cout<<"\n\n";
				cout<<"Su retiro se ha realiado con exito";
				cout<<"\n\n";
				cout<<"Su saldo actual es de: "<<saldo_tot;
					
				}
			break;
			
			case 3: break; 
		}
	}
	
	if (opcion==16){
		int co,ca;
		float h; 
		
		cout<<"ingrese el valor del Cateto opuesto: ";
		cin>>co; 
		cout<<endl;
		cout<<"Ingrese el valor del cateto adyavente: ";
		cin>>ca;
		
		h= sqrt (pow(co,2)+pow(ca,2));
		cout<<endl;
		cout<<"el valor de la hipotenusa es de: "<<h;
		
	}
	
	if (opcion==17){
			int n1,n2,t;
		
		
		cout<<"ingrese el valor del primer numero: ";
		cin>>n1; 
		cout<<endl;
		cout<<"Ingrese el valor del segundo numero: ";
		cin>>n2;
		system("cls");
		cout<<endl;
		cout<<"1. suma"<<endl;
		cout<<"2. resta"<<endl;
		cout<<"3. multiplicacion"<<endl;
		cout<<"4. division"<<endl;
		cout<<"5. salir"<<endl;
		cin>>op;
		system("cls");
		
		switch(op){
			case 1:
					t= (pow(n1,2)+pow(n2,2));
					cout<<endl;
					cout<<"el resultado de la suma es de: "<<t;
			case 2:
					t= (pow(n1,2)-pow(n2,2));
					cout<<endl;
					cout<<"el resultado de la suma es de: "<<t;
			case 3:
					t= (pow(n1,2)*pow(n2,2));
					cout<<endl;
					cout<<"el resultado de la suma es de: "<<t;
			case 4:
					t= (pow(n1,2)/pow(n2,2));
					cout<<endl;
					cout<<"el resultado de la suma es de: "<<t;
			case 5:break;					
		}
	}
	
	
	if (opcion==18){
		int mes,dia; 
		
		cout<<"ingrese el numero del mes que desee"<<endl;
		cin>>mes; 
		cout<<endl;
		cout<<"ingrese el numero del dia que desee"<<endl;
		cin>>dia;
		
		if (mes==1){cout<<"El mes que ingreso fue enero"<<endl;}
		if (mes==2){cout<<"El mes que ingreso fue febrero"<<endl;}
		if (mes==3){cout<<"El mes que ingreso fue marzo"<<endl;}
		if (mes==4){cout<<"El mes que ingreso fue abril"<<endl;}
		if (mes==5){cout<<"El mes que ingreso fue mayo"<<endl;}
		if (mes==6){cout<<"El mes que ingreso fue junio"<<endl;}
		if (mes==7){cout<<"El mes que ingreso fue julio"<<endl;}
		if (mes==8){cout<<"El mes que ingreso fue agosto"<<endl;}
		if (mes==9){cout<<"El mes que ingreso fue septiembre"<<endl;}
		if (mes==10){cout<<"El mes que ingreso fue octubre"<<endl;}
		if (mes==11){cout<<"El mes que ingreso fue noviembre"<<endl;}
		if (mes==12){cout<<"El mes que ingreso fue diciembre"<<endl;}
		if(mes>12){cout<<"el mes que ingreso es incorrecto"<<endl;
		}
		cout<<endl;
		if (dia==1){cout<<"El dia que ingreso fue lunes"<<endl;}
		if (dia==2){cout<<"El dia que ingreso fue martes"<<endl;}
		if (dia==3){cout<<"El dia que ingreso fue miercoles"<<endl;}
		if (dia==4){cout<<"El dia que ingreso fue jueves"<<endl;}
		if (dia==5){cout<<"El dia que ingreso fue viernes"<<endl;}
		if (dia==6){cout<<"El dia que ingreso fue sabado"<<endl;}
		if (dia==7){cout<<"El dia que ingreso fue domingo"<<endl;}
		if(dia>8){cout<<"el dia que ingreso es incorrecto"<<endl;}
	}
	
	if (opcion==19){
		int min=0, seg=0,max_seg=0,max_min=0;
		
			gotoxy(43,9);
			for(int i=0; i<25; i++)
			{
				cout<<"*";	
			}
			
			gotoxy(43,15);
			for(int i=0; i<25; i++)
			{
				cout<<"*";	
			}
			
			gotoxy(50,8);
			cout<<"TEMPORIZADOR"<<endl;
			gotoxy(45,10);
			cout<<"cuantos minutos desea \n";
			gotoxy(45,13);
			cout<<"cuantos segundos desea \n";
			gotoxy(55,11);
			cin>>max_min;
			gotoxy(55,14);
			cin>>max_seg;
			
			while (1) 
			{
			seg++; 
				
				if(seg==60)
				{
					seg=0;
					min++; 
						
				}
					
				
			system("cls");
			
				gotoxy(43,12);
			for(int i=0; i<26; i++)
			{
				cout<<"*";	
			}
			
			gotoxy(43,18);
			for(int i=0; i<26; i++)
			{
				cout<<"*";	
			}
			
			gotoxy(50,10);
			cout<<"TEMPORIZADOR"<<endl;
			gotoxy(45,15);
			cout<<"Minutos: "<<min<<" segundos: "<<seg;
			sleep(1);
			
			if (seg==max_seg && min==max_min)
			{
			 break;
						
			}		
		}	
	}
	
	if (opcion==20){
		char dato;
		
		cout<<"ingrese una letra y verifique si es mayuscula o minuscula \n"<<endl; 
		cout<<"letra: "<<endl;
		cin>>dato; 
		cout<<endl;
		
		if(dato>='a' && dato<='z'){
			cout<<"La letra "<<dato<<" que ingreso es minuscula"<<endl; 
		}else 
		if(dato>='A' && dato<='Z'){
			cout<<"La letra "<<dato<<" que ingreso es mayuscula"<<endl;
		}
		else{
			cout<<"el caracter ingresado es incorrecto"<<endl;
		}	
	}
	
	if(opcion==21){
		
		gotoxy(45,10);
		cout<<"Gracias por utilizar este programa.";
	}
	
cout<<"\n\n";

system("pause");		
return 0;
}











