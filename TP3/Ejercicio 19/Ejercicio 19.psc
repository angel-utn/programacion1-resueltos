Algoritmo Ejercicio19
	contadorPositivos = 0
	contadorCeros = 0
	contadorTernas = 0
	
	Mientras contadorPositivos < 2 Hacer
		Escribir 'Ingrese un numero: '
		Leer numero
		
		Si numero > 0 Entonces
			contadorPositivos = contadorPositivos + 1
			contadorCeros = 0
		SiNo
			contadorPositivos = 0
			Si numero = 0 Entonces
				contadorCeros = contadorCeros + 1
				Si contadorCeros = 3 Entonces
					contadorTernas = contadorTernas + 1
					contadorCeros = 0
				FinSi
			SiNo
				contadorCeros = 0
			FinSi
		FinSi
	FinMientras
	
	Escribir 'La cantidad de ternas de numeros ceros fueron: ', contadorTernas
FinAlgoritmo
