Algoritmo Ejercicio_12
	Escribir 'Ingrese la cantidad de huevos a comprar:  '
	Leer cantHuevos
	resto = cantHuevos%12
	unidad = 120*resto
	docena = ((cantHuevos-resto)/12)*1000
	totalPagar = unidad+docena
	Escribir 'Total a pagar: $ ',totalPagar
FinAlgoritmo
