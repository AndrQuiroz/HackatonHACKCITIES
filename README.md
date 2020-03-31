# HackatonHACKCITIES
Hackaton realizada el 28/03/20 con el objetivo de brindar soluciones innovadoras y su aplicacion en el municipio de La Paz
## MOVILIDAD URBANA-PUNTOS DE CONTROL
El proyecto desarrollado ayudara mejorar la obtencion de datos con relacion a la velocidad de los buses, la informacion de 
los conductores, el cumplimiento de las rutas y tiempos de recorrido. Esto se lograra gracias a la instalacion de dispositivos RF, que deberan ser instalados en cada parada y en cada bus. 
## Motivación
Al observar que el transporte masivo de la ciudad de La Paz es de beneficio para varios ciudadanos, el poder potenciarlo es una forma de mejora continua al servicio y a la vez, una oportunidad para poder convertirnos en una Ciudad Inteligente. Se pudo detectar que no existen datos especificos sobre los tiempos de recorrido, la cantidad de usuarios, el cumplimineto de horarios en cada ruta y el control en sus determinadas rutas. Generar este tipo de datos nos ayudaran (con su resectivo tratamiento) a generar desiciones para poder medir la eficiencia del servicio. 
## Capturas de pantalla
https://github.com/theramses/HackatonHACKCITIES/blob/master/Captura%20de%20pantalla%20de%202020-03-31%2016-21-29.png

## Tecnologias/Frameworks utilizados
Android Studio 
Python
Colab
Java
## Funcionalidades mas importantes
Generar datos veridicos y personalizados para cada bus en todas las rutas (este sistema se puede ampliar al control de cualquier transporte publico), se podra realizar el control de los trabajadores (hora de salidas y llegadas) y se podran obtener tiempos de recorrido para posteriormente tener tiempos de recorrido y espera. 
Monitorear usuarios por medio del posicionamiento GPS y hallar coincidencias.
## Instalación
1. Descargar el proyecto /App/Readme desde drive
  Importar en Android Studio 1,8
  Actualizar el Graddle
  Compilar la aplicacion
  Generar ruta

2. Exportar los datos .GPX
  ruta por defecto /0/GPX-Recorder/*.GPX
  Extraer dos trayectos

3. Clonar el repositorio https://github.com/zdila/gpx-animator.git
  Ejecutar instrucciones 
  Renderizar video y hallar coincidencias


3.1. Algoritmo de deteccion de coincidencias 
dependencias 
gpxpy
pandas
time
https://colab.research.google.com/drive/1AKpF24eveNklUsnTV5XskhvC7GENqvl_
o en su defecto buscar en PumaTrack/Coronatrack y ejecutar en jupyter notebook
 En el caso de procesamiento de multiples archivos se creo un algoritmo que evalua coincidencias de menos 15 metros entre coordenadas, posterior a la confirmacion podemos realizar el seguimiento por medio de GPX animator para ver las zonas donde se movilizaron las personas contagiadas.
 
 4.En caso de querer instalar el programa de control de la maqueta compilar en el IDE de arduino 
 dependencias
 I2C_liquid_crystal.h
 wire.h
## Creditos
Cristhian Daniel Alvarez Guzman

Mariel Maxy Gutierrez Villega

Carlos Franz Lopez Cocarico

Alejandro Andrés Quiroz Nina

Gpx Animator autor Martin Ždila
## Licencia
The MIT License

Copyright (c) 2020 [MOVIMAKERS]

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

