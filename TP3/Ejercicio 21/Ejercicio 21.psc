Algoritmo Ejercicio21
	Escribir 'Ingrese un numero: '
	Leer numero
	
	contDivisores = 0
	
	Para i=1 Hasta numero Con Paso 1 Hacer
		Si numero % i == 0 Entonces
			contDivisores = contDivisores + 1
		FinSi
	FinPara
	
	Si contDivisores == 2 Entonces
		Escribir 'El numero es primo'
	SiNo
		Escribir 'El numero NO es primo'
	FinSi
FinAlgoritmo
