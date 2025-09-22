Algoritmo Ej15
	Escribir 'Ingrese el año: '
	Leer anio
	Si (anio%100 == 0) && (anio%400 <> 0) Entonces
		Escribir 'No es bisiesto'
	SiNo
		Si anio%4 == 0 Entonces
			Escribir 'Es bisiesto'
		SiNo
			Escribir 'No es bisiesto'
		FinSi
	FinSi
FinAlgoritmo
