Algoritmo Ejercicio07
	contPos = 0
	contNeg = 0
	contCero = 0
	Para i=1 Hasta 10 Con Paso 1 Hacer
		Escribir 'Ingrese el numero ',i,' de los 10 numeros: '
		Leer numero
		Si numero>0 Entonces
			contPos = contPos+1
		SiNo
			Si numero<0 Entonces
				contNeg = contNeg+1
			SiNo
				contCero = contCero+1
			FinSi
		FinSi
	FinPara
	Escribir 'La cantidad de numeros positivos es: ',contPos
	Escribir 'La cantidad de numeros negativos es: ',contNeg
	Escribir 'La cantidad de ceros es: ',contCero
FinAlgoritmo
