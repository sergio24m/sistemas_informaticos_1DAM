#include <iostream>
using namespace std;
int main() {
	
	double anual_total; //Cantidad que paga el jefe total
	double numero1, numero2, numero3, numero4; //Porciento del salario anual total que paga el jefe y demas numeros
	double bruto_anual, neto_anual; //Cantidad que recibe el trabajador 
	double cosacien;//Valor de 100 porque no me fio de poner 100 directamente
	double irpf, contingencias, extra1;
	cosacien = 100;
	cout << "Introduce la cantidad que paga tu jefe por ti al año: " << endl;
	cin >> anual_total;
	
	cout << "Introduce el porciento de la seguridad social que paga tu jefe " << endl;
	
	cin >> numero1;
	numero2 = anual_total*(numero1 / cosacien);
	bruto_anual = anual_total - numero2;


	cout << "El salario que supuestamente te da tu jefe en bruto es de.. " << bruto_anual << endl;
//EMPIEZA LA SEGUNDA PARTE DEL CALCULO ANUAL
	cout << "Introduce el porciento de la retención IRPF que se te quita del sueldo" << endl;
	cin >> irpf;
	cout << "Introduce el dinero de las contingencias comunes al año " << endl;
	cin >> contingencias;
	cout << "Introduce gastos de formación y desempleo al año " << endl;
	cin >> extra1;
	numero3 = bruto_anual*(irpf / cosacien);
	neto_anual = bruto_anual - (numero3 + contingencias + extra1);
	
	cout << "Tu salario neto anual es aproximadamente de.. " << neto_anual << endl; 
		double mensual_total, bruto_mensual, neto_mensual;
		double meses;
		cout << "¿Cuantos meses trabajas y te pagan al año?" << endl;
		cin >> meses;
		mensual_total = anual_total / meses;
		bruto_mensual = bruto_anual / meses;
		neto_mensual = neto_anual / meses;
		cout << "Lo que se gasta tu jefe en ti al mes es.. " << mensual_total << endl;
		cout << "Lo que ganas en bruto al mes es.." << bruto_mensual << endl;
		cout << "Lo que ganas en neto al mes es.." << neto_mensual << endl;
//Ostras..
	cout << "Ahora vamos a descontar los demas gastos que tienes al mes" << endl;
	double neto_mensualreal, luz, gasolina, gasolinaimpuestos, comida, comidaimpuestos, autobus, gastosextra, hipoteca;
	double gastosmensuales;
	cout << "¿Cuanto pagas de hipoteca / alguiler al mes?" << endl;
	cin >> hipoteca;
	cout << "¿Cuanto te gastas en gasolina (total) al mes?" << endl;
	cin >> gasolina;
	cout << "¿Cuantos impuestos se lleva el estado de lo que pagas en la gasolina?" << endl;
	cin >> gasolinaimpuestos;
	cout << "¿Cuanto te gastas en luz al mes?" << endl;
	cin >> luz;
	cout << "¿Cuanto te gastas en comida al mes, en total?" << endl;
	cin >> comida;
	cout << "¿Cual es el porciento de impuestos que se lleva el estado de la comida?" << endl; 
	cin >> comidaimpuestos;
	cout << "¿Cuanto te gastas en autobús / tren al mes?" << endl;
	cin >> autobus; 
	cout << "¿Hay algún otro gasto que quieras tener en cuenta? Inserta 0 si no hay nada, por favor." << endl;
	cin >> gastosextra; 
			neto_mensualreal = neto_mensual - (luz + gasolina + comida + autobus + gastosextra + hipoteca);
		
		double gasolinaestado, comidaestado;
		gasolinaestado = gasolina*(gasolinaimpuestos / 100);
		comidaestado = comida*(comidaimpuestos / 100);
		//TERMINAR EN PROXIMA VERSIÓN


	cout << "Lo que ahorras al mes en total, con todos tus gastos.. es.. " << neto_mensualreal << endl;
	//Hacer que el programa calcule lo que te "quita" el estado en una nueva version
	return 0;

}
