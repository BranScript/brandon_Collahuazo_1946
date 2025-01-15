Algoritmo FactoresDivisibles
    Definir n, n2, ope, factor Como Entero
    n2 = 1
    factor = 0
    
    Escribir "Ingresa un numero: "
    Leer n
    
    Si n <= 0 Entonces
        Escribir "No se permiten numeros negativos"
    Sino
        Escribir "Los factores divisibles de ", n, " son:"
		
        Si n = 1 Entonces
            Escribir n
            factor = 1
        Sino
            Mientras n > n2 Hacer
                ope = n MOD n2
                Si ope = 0 Entonces
                    Escribir n2
                    factor = factor + 1
                FinSi
                n2 = n2 + 1
            FinMientras
			
            Escribir "El numero de factores divisibles es: ", factor
        FinSi
    FinSi
FinAlgoritmo
