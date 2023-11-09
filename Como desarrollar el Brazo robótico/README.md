# Introducción
El Brazo Robótico es un proyecto que se basa en el desarrollo de un brazo mecánico programable el cual busca replicar los movimientos que un brazo humano es capaz de realizar, donde cada uno de los movimientos en diferentes direcciones pueden ser controlados por medio de potenciómetros conectados a servomotores.

Los brazos robóticos como el que se propone pueden tener múltiples aplicaciones tanto dentro y como fuera de la industria, tales como operaciones de ensamblaje, traslado de materiales, manipulación de objetos a distancia, etc. La capacidad de realizar estas tareas con tal precisión llega a tener un impacto significativo en la eficiencia y rapidez de procesos de producción.

# Objetivo

El objetivo de realizar este proyecto consiste en: 

1. Desarrollar un brazo mecánico programable que pueda ser fácilmente manipulado por el usuario.

2. Implementar controles intuitivos y fáciles de usar.

3. Optimizar tareas que requieran de eficiencia y precisión dad la versatilidad del modelo propuesto.

# Materiales
Para llevar a cabo el proyecto se requieren los siguientes materiales
## Hardware
- 1 x Arduino MEGA
- 4 x Servomotores 9g
- 4 x Potenciómetros 1K
- 1 x Protoboard
- Jumpers

# Requisitos previos
## IDE Arduino
Para poder subir el código a nuestro Arduino MEGA requerimos tener previamente instalado el software IDE Arduino.
[Arduino Software](https://www.arduino.cc/en/software)

## Agregar la librería Servo
La librería  utilizada en este proyecto es "Servo", la cual se puede instalar desde el gestor de librerías del IDE Arduino. También se pueden descargar directamente e instalarlas desde  Sketch -> Include Library -> Add .ZIP Library

![Servo](https://github.com/DanielChaparro82/Imagenes/blob/main/Captura%20de%20pantalla%202023-11-09%20044031.png?raw=true)

![Librería ZIP](https://github.com/DanielChaparro82/SmartPill-Dispensador-de-pastillas-inteligente/assets/135756954/77bd9b17-445a-4f13-95e4-dc4bad0496f7)

# Instrucciones

1. A continuación se muestra el diagrama de conexión del circuito que se necesita realizar para que el brazo robótico funcione correctamente.

![Brazo](https://github.com/DanielChaparro82/Imagenes/blob/main/Brazo.jpg)

2. Una vez descargado y abierto el código en el IDE Arduino se deberá de seleccionar la pestaña Tools y seleccionar las siguientes configuraciones:

Board: Arduino MEGA or MEGA 2560.
Port: Depende de donde sea conectado.

![Configuración](https://github.com/DanielChaparro82/Imagenes/blob/main/Captura%20de%20pantalla%202023-11-09%20043318.png)

3. Al realizar todos los pasos y cumplir con los requerimientos previos lo siguiente será subir el código al microcontrolador Arduino.

![Upload](https://github.com/DanielChaparro82/Brazo-robotico/assets/135756954/7f366195-b1bf-44e5-b1b1-d66d656ddd00)
