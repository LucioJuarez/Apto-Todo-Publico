#Pago de intereses
deuda= float(input("Cuanta plata debes? en pesos: "))
apr = float(input("Cual es el porcentaje anual:\n")) #Consultar con su proveedor de tarjeta de credito
pago = float(input("Cuanta plata pagas por mes: "))
meses = int(input("En cuanto meses queres calcular el pago:"))

#Calculo el APR anual
rango_mes = apr/100/12

for indice in range(meses):
    # Calculo interes
    interesPago = deuda * rango_mes
    deuda = deuda + interesPago

    if(deuda - pago < 0):
        print ("El ultimo pago es: ", deuda)
        print("Pagaste todo en ", indice+1, "meses")
        break

    #Pago 
    deuda = deuda - pago


    #Imprimo resultado 

    print("Pago", pago, "de los cuales",interesPago, "son de interes ", end='' )
    print(" Ahora me falta pagar:  ",deuda)