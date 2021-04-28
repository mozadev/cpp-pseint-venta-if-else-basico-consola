Algoritmo pta1
	Definir tipoequipo Como Caracter
	Definir marca Como Caracter
	Definir conSoftware Como Entero
	Definir pagofinal Como Real
	
	
	
	Escribir "ingrese el tipo de equipo";
	Leer tipoequipo;
	
	Escribir "ingrese la marca";
	Leer marca;
	
	Escribir "Con software 1 : si y 0 : no";
	Leer conSoftware;
	
	
	Si tipoequipo='l' Entonces
		Si marca='h' Entonces
			Si conSoftware=1 Entonces
				pagofinal=4500*0.9
			SiNo
				pagofinal=4350
			Fin Si
		SiNo
			Si  marca='d' Entonces
				Si conSoftware=1 Entonces
					pagofinal=3500*0.9
				SiNo
					pagofinal=3250
				FinSi
			SiNo
				Si  marca='c' Entonces
					Si conSoftware=1 Entonces
						pagofinal=3150*0.9
					SiNo
						pagofinal=2900
					FinSi
				FinSi
			FinSi
			
		FinSi
			
			
	SiNo 
		Si tipoequipo='p' Entonces
			Si marca='l' Entonces
				Si conSoftware=1 Entonces
					pagofinal=3350*0.9
				SiNo
					pagofinal=3100
				Fin Si
			SiNo
				Si  marca='m' Entonces
					Si conSoftware=1 Entonces
						pagofinal=4880*0.9
					SiNo
						pagofinal=4650
					FinSi
				SiNo
					Si  marca='a' Entonces
						Si conSoftware=1 Entonces
							pagofinal=3500*0.9
						SiNo
							pagofinal=3250
						FinSi
					FinSi
				FinSi
				
			FinSi
			
		FinSi
	FinSi
	
	escribir "el pago final ess:  " , pagofinal
FinAlgoritmo