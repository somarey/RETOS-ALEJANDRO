
#include <iostream>

using namespace std;

/// @brief 
float ingles;
float frances;
float ruso;
float historia;

float resultado = ingles + frances+ ruso+historia;
 float  promedio = resultado / 4;
int main () {

cout << "Introduce calificacion de ingles:" << endl;
	
cin >> ingles;

cout << "Introduce calificacion de frances:" << endl;
cin >> frances;

cout << "Introduce calificacion de ruso:" << endl;
cin >> ruso;

cout << "Introduce calificacion de historia:" << endl;
cin >> historia;


if (promedio < 60 ) {cout << "aprobado"<< endl;
}

else { cout << "reprobado"<< endl;
}
	
	
	return 0; 
}