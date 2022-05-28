#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void mensajes(string msj) {
	cout << msj << endl;
}

void Sin_stock(string producto, int stock) {
	cout << "Te quedaste sin stock del producto " << producto << ". La cantidad de stock de ese producto es de: " << stock << ". Vuelva a intentarlo" << endl;
}

void finalVenta(string apellido, int dni, string forma_de_pago, float recaudado_X_venta) {
	cout << "El cliente " << apellido << " con DNI " << dni << " pagó con " << forma_de_pago << " y gastó " << recaudado_X_venta << " pesos." << endl;
}

void fin(string apellido_mayor_venta, float mayorVenta, int cantidad_ventas_con_efectivo, int cantidad_ventas_con_tarjeta, float recaudado_en_el_día, string BARQUITO, string QUITAMANCHAS, string FIRMESANDWICH, string HARINADAPAN, string ACEITENOSEPEGA, string MATEKOZI2, string PERCHA, string STANCAFE, float stock_aceitenosepega, float stock_barquito, float stock_firmesandwich, float stock_harinadapan, float stock_matekozi2, float stock_percha, float stock_quitamancas, float stock_stancafe) {
	cout << "El apellido del cliente que más plata gastó es: " << apellido_mayor_venta << " y gastó un totalc de: " << mayorVenta << endl;
	cout << "La cantidad de ventas con efectivo fue de: " << cantidad_ventas_con_efectivo << " y la de tarjeta fue de: " << cantidad_ventas_con_tarjeta << endl;
	cout << "En todo el día el supermercado recaudó " << recaudado_en_el_día << endl;
	cout << stock_aceitenosepega << " es lo que quedó de " << ACEITENOSEPEGA << endl;
	cout << stock_barquito << " es lo que quedó de " << BARQUITO << endl;
	cout << stock_firmesandwich << " es lo que quedó de " << FIRMESANDWICH << endl;
	cout << stock_harinadapan << " es lo que quedó de " << HARINADAPAN << endl;
	cout << stock_matekozi2 << " es lo que quedó de " << MATEKOZI2 << endl;
	cout << stock_percha << " es lo que quedó de " << PERCHA << endl;
	cout << stock_quitamancas << " es lo que quedó de " << QUITAMANCHAS << endl;
	cout << stock_stancafe << " es lo que quedó de " << STANCAFE << endl;
}

int pedirEntero(string msj) {
	int entero;
	cout << msj << endl;
	cin >> entero;
	return entero;
}

float pedirFloat(string msj) {
	float entero;
	cout << msj << endl;
	cin >> entero;
	return entero;
}


int pedirNatural(string msj, string error) {
	int natural;
	natural = pedirEntero(msj);
	while (natural < 0) {
		natural = pedirEntero(error);
	}
	return natural;
}

float pedirEntero_Mayor_0(string msj, string error) {
	float natural;
	natural = pedirEntero(msj);
	while (natural <= 0) {
		natural = pedirEntero(error);
	}
	return natural;
}

string pedirCadena(string msj) {
	string cadena;
	cout << msj << endl;
	cin >> cadena;
	return cadena;
}

string pedirForma_Pago(string msj, string error) {
	string forma_pago;
	forma_pago = pedirCadena(msj);
	while (forma_pago != "EFECTIVO" && forma_pago != "TARJETA") {
		forma_pago = pedirCadena(error);
	}
	return forma_pago;
}

string pedirProducto(string prd1, string prd2, string prd3, string prd4, string prd5, string prd6, string prd7, string prd8, string msj, string error) {
	string producto;
	producto = pedirCadena(msj);
	while (producto != prd1 && producto != prd2 && producto != prd3 && producto != prd4 && producto != prd5 && producto != prd6 && producto != prd7 && producto != prd8 && producto != "FIN") {
		producto = pedirCadena(error);
	}
	return producto;
}
int main() {
	setlocale(LC_ALL, "spanish");

	float recaudado_en_el_día;
	int cantidad_ventas_con_tarjeta;
	int cantidad_ventas_con_efectivo;

	float mayorVenta;
	string apellido_mayor_venta;

	string producto;
	float cantidad_producto;

	float recaudado_X_producto;

	float recaudado_X_venta;

	float stock_barquito;
	float stock_quitamancas;
	float stock_firmesandwich;
	float stock_harinadapan;
	float stock_aceitenosepega;
	float stock_matekozi2;
	float stock_percha;
	float stock_stancafe;


	int dni;
	string apellido;
	string forma_de_pago;

	int cantidad_ventas;


	const string INICIO = "Hola bienvenido al programa AKO-MER, en este programa podras ingresar datos acerca de ventas y recibiras los resultados. Para finalizar la venta marque FIN y cuando termine su uso marque 0 en el DNI.";
	const string INGRESO_DNI = "Ingrese el DNI del cliente.";
	const string ERROR = "Error, vuelva a intentarlo.";
	const string INGRESO_APELLIDO = "Ingrese el apellido del cliente.";
	const string INGRESO_FORMA_PAGO = "Ingrese la forma de pago en mayuscula (EFECTIVO o TARJETA).";
	const string VENTAS = "Ingrese el nombre del producto y su cantidad cuando se le pida y en caso de finalizar la compra escriba fin cuando le pregunte el nombre del producto.";
	const string PEDIR_PRODUCTO = "Ingrese el nombre del producto en mayusculas";
	const string PEDIR_CANTIDAD = "Ingrese la cantidad que va a llevar del producto.";

	const string BARQUITO = "BARQUITO";
	const float PRECIO_BARQUITO = 50;
	const string QUITAMANCHAS = "QUITAMANCHAS";
	const float PRECIO_QUITAMANCHAS = 100;
	const string FIRMESANDWICH = "FIRMESANDWICH";
	const float PRECIO_FIRMESANDWICH = 50;
	const string HARINADAPAN = "HARINADAPAN";
	const float PRECIO_HARINADAPAN = 75;
	const string ACEITENOSEPEGA = "ACEITENOSEPEGA";
	const float PRECIO_ACEITENOSEPEGA = 200;
	const string MATEKOZI2 = "MATEKOZI2";
	const float PRECIO_MATEKOZI2 = 90;
	const string PERCHA = "PERCHA";
	const float PRECIO_PERCHA = 150;
	const string STANCAFE = "STANCAFE";
	const float PRECIO_STANCAFE = 500;



	stock_barquito = 20;
	stock_quitamancas = 10;
	stock_firmesandwich = 15;
	stock_harinadapan = 17;
	stock_aceitenosepega = 20;
	stock_matekozi2 = 30;
	stock_percha = 5;
	stock_stancafe = 2;
	mayorVenta = 0;
	cantidad_ventas_con_efectivo = 0;
	cantidad_ventas_con_tarjeta = 0;
	recaudado_en_el_día = 0;
	cantidad_ventas = 0;

	mensajes(INICIO);
	do {
		dni = pedirNatural(INGRESO_DNI, ERROR);
		if (dni != 0) {
			apellido = pedirCadena(INGRESO_APELLIDO);
			forma_de_pago = pedirForma_Pago(INGRESO_FORMA_PAGO, ERROR);
			mensajes(VENTAS);
			recaudado_X_venta = 0;
			do {
				recaudado_X_producto = 0;
				producto = pedirProducto(BARQUITO, QUITAMANCHAS, FIRMESANDWICH, HARINADAPAN, ACEITENOSEPEGA, MATEKOZI2, PERCHA, STANCAFE, PEDIR_PRODUCTO, ERROR);
				if (producto != "FIN") {
					cantidad_ventas++;
					cantidad_producto = pedirEntero_Mayor_0(PEDIR_CANTIDAD, ERROR);
					if (producto == ACEITENOSEPEGA) {
						if (cantidad_producto > stock_aceitenosepega) {
							Sin_stock(producto, stock_aceitenosepega);
						}
						else {
							stock_aceitenosepega = stock_aceitenosepega - cantidad_producto;
							recaudado_X_producto = PRECIO_ACEITENOSEPEGA * cantidad_producto;
						}
					}
					else if (producto == BARQUITO) {
						if (cantidad_producto > stock_barquito) {
							Sin_stock(producto, stock_barquito);
						}
						else {
							stock_barquito = stock_barquito - cantidad_producto;
							recaudado_X_producto = PRECIO_BARQUITO * cantidad_producto;
						}
					}
					else if (producto == FIRMESANDWICH) {
						if (cantidad_producto > stock_firmesandwich) {
							Sin_stock(producto, stock_firmesandwich);
						}
						else {
							stock_firmesandwich = stock_firmesandwich - cantidad_producto;
							recaudado_X_producto = PRECIO_FIRMESANDWICH * cantidad_producto;
						}
					}
					else if (producto == HARINADAPAN) {
						if (cantidad_producto > stock_harinadapan) {
							Sin_stock(producto, stock_harinadapan);
						}
						else {
							stock_harinadapan = stock_harinadapan - cantidad_producto;
							recaudado_X_producto = PRECIO_HARINADAPAN * cantidad_producto;
						}
					}
					else if (producto == MATEKOZI2) {
						if (cantidad_producto > stock_matekozi2) {
							Sin_stock(producto, stock_matekozi2);
						}
						else {
							stock_matekozi2 = stock_matekozi2 - cantidad_producto;
							recaudado_X_producto = PRECIO_MATEKOZI2 * cantidad_producto;
						}
					}
					else if (producto == PERCHA) {
						if (cantidad_producto > stock_percha) {
							Sin_stock(producto, stock_percha);
						}
						else {
							stock_percha = stock_percha - cantidad_producto;
							recaudado_X_producto = PRECIO_PERCHA * cantidad_producto;
						}
					}
					else if (producto == QUITAMANCHAS) {
						if (cantidad_producto > stock_quitamancas) {
							Sin_stock(producto, stock_quitamancas);
						}
						else {
							stock_quitamancas = stock_quitamancas - cantidad_producto;
							recaudado_X_producto = PRECIO_QUITAMANCHAS * cantidad_producto;
						}
					}
					else {
						if (cantidad_producto > stock_stancafe) {
							Sin_stock(producto, stock_stancafe);
						}
						else {
							stock_stancafe = stock_stancafe - cantidad_producto;
							recaudado_X_producto = PRECIO_STANCAFE * cantidad_producto;
						}
					}

					recaudado_X_venta = recaudado_X_venta + recaudado_X_producto;
				}
			} while (producto != "FIN");
			if (forma_de_pago == "EFECTIVO") {
				recaudado_X_venta = recaudado_X_venta * 0.9;
				cantidad_ventas_con_efectivo++;
			}
			else {
				cantidad_ventas_con_tarjeta++;
			}
			if (recaudado_X_venta > mayorVenta) {
				mayorVenta = recaudado_X_venta;
				apellido_mayor_venta = apellido;
			}
			recaudado_en_el_día = recaudado_en_el_día + recaudado_X_venta;

			finalVenta(apellido, dni, forma_de_pago, recaudado_X_venta);
		}
	} while (dni != 0);
	if (cantidad_ventas == 0) {
		cout << "No hubo ventas.";
	}
	else {
		fin(apellido_mayor_venta, mayorVenta, cantidad_ventas_con_efectivo, cantidad_ventas_con_tarjeta, recaudado_en_el_día, BARQUITO, QUITAMANCHAS, FIRMESANDWICH, HARINADAPAN, ACEITENOSEPEGA, MATEKOZI2, PERCHA, STANCAFE, stock_aceitenosepega, stock_barquito, stock_firmesandwich, stock_harinadapan, stock_matekozi2, stock_percha, stock_quitamancas, stock_stancafe);
	}
	system("pause");
}