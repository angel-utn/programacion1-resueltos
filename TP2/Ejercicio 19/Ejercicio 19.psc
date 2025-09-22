Algoritmo Ej19
	Escribir 'Ingrese las horas trabajadas: '
	Leer horas
	Escribir 'Ingrese el lenguaje de programación: '
	Leer lenguaje
	Si lenguaje == 'c' Entonces
		importe = 7500*horas
	SiNo
		Si lenguaje == '#' Entonces
			importe = 6100*horas
		SiNo
			Si lenguaje == 'p' Entonces
				importe = 5400*horas
			SiNo
				Si lenguaje == 'g' Entonces
					importe = 5000*horas
				SiNo
					Escribir 'Error: Caracter invalido.'
					importe = 0
				FinSi
			FinSi
		FinSi
	FinSi
	Escribir "Necesita el proyecto de forma urgente? 1)Si 0)No"
	Leer urgente
	Si urgente == verdadero Entonces
		importe = importe * 2.2
	FinSi
	Si importe > 0 Entonces
		Escribir "El importe total es: $" importe
	FinSi
FinAlgoritmo
