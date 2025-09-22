Algoritmo Ejercicio17
	Escribir 'Ingresar un numero: '
	Leer Nro
	Max1 = Nro
	Para i<-2 Hasta 5 Con Paso 1 Hacer
		Escribir 'Ingresar un numero: '
		Leer Nro
		Si Nro>Max1 Entonces
			Max2 = Max1
			Max1 = Nro
		SiNo
			Si i==2||Nro>Max2 Entonces
				Max2 = Nro
			FinSi
		FinSi
	FinPara
	Escribir 'El mayor de los cinco numeros es: ',Max1
	Escribir 'El segundo mayor de los cinco numeros es: ',Max2
FinAlgoritmo
