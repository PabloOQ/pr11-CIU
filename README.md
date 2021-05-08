# Práctica 11 CIU

Toma de contacto con arduino.
 
Programar el Arduino de manera que se genere una pulsación de frecuencia variable en el
LED integrado en la placa. Deberá producirse una señal senoidal que definirá la envolvente,
de manera que cuando dicha señal alcance su valor máximo el LED parpadeará a una
cierta frecuencia freqMax, mientras que cuando alcance el valor mínimo parpadeará a una
frecuencia mínima freqMin.

# Implementación

Un trabajo bastante sencillo simplemente tiene un contador cíclico entre 0 y 359, decidimos hacerlo así simplemente para complicar un poco más la práctica, así en el improbable caso de que el arduino se quede encendido el tiempo necesario para que haya overflow pues lo evitamos. Usamos el valor de este contador en una función senoidal y cuando obtenemos el resultado lo aplicamos al LED.
