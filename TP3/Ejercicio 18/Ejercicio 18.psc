Algoritmo Ejercicio18
	ordenado = Verdadero
	Escribir 'Ingrese 8 numeros'
	Para i<-1 Hasta 8 Con Paso 1 Hacer
		Escribir 'Numero ',i,': '
		Leer num
		Si i==1 Entonces
			numAnterior = num
		SiNo
			Si num<numAnterior Entonces
				ordenado = Falso
			FinSi
			numAnterior = num
		FinSi
	FinPara
	Si ordenado==Verdadero Entonces
		Escribir 'Conjunto Ordenado'
	SiNo
		Escribir 'Conjunto NO Ordenado'
	FinSi
FinAlgoritmo
