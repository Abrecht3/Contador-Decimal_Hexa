# Contador-Decimal_Hexa
Ejemplo de un contador decimal y hexadecimal en arduino

Este Contador muestra secuencialmente los valores que van 
desde 0 a 99 en decimal y de 0 a ff en hexadecimal, al conectar
el puerto 5 a tierra se activa la función BCD() la cual maneja el
contador decimal, si el puerto 5 se conecta a 5 volts, se activa 
la función hex() para activar el contador hexadecimal. el cambio entre
decimal y hexadecimal se realiza cuando termina el conteo si se detecta
el cambio de valor del pin 5. los valores se muestran de forma binaria con
leds y en displays ánodos de 7 segmentos.

Material utilizado
Arduino Mega 2560
protoboard
2 displays de 7 segmentos
9 leds

El proyecto incluye un diagrama con la conexión realizada

Puertos utilizados

PORT A   pines {22,23,24,25,26,27,28,29}
PORT C   pines {37,36,35,34,33,32,31,30}
PORT L   pines {49,48,47,46,45,44,43,42}
PORT B   pines {13,12,11,10,50,51,52,53}

con los puertos A y B se muestra el segundo digito, 
de B solo se ocupan los cuatro pines menos significativos para el código binario

con los puertos C y L se muestra el segundo digito, 
de L solo se ocupan los cuatro pines menos significativos para el código binario
