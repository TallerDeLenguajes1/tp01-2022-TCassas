# tp01-2022-TCassas

#¿Por qué es conveniente incluir el archivo .gitignore en un repositorio?

El echo de indicarle a Git que debe ignorar los cambios (o directamente su existencia en el repositorio remoto) que sucedan en archivos/directorios especificos nos ayuda a filtrar archivos que no puedan obstaculizar el desarrollo de aquello en lo que estemos trabajando.
Esta mecanica debe ser utilizada, por ejemplo, en casos como cuando tenemos **archivos/directorios** demasiado **pesados** como para tener que estar descargandolos cada vez que clonemos dicho repositorio, archivos que contengan **configuración propia** de cada integrante del proyecto/ambiente de desarrollo, archivos con información sensible, etc.

#Como utilizarlo
Un archivo .gitignore puede ser editado como qualquier otro archivo de texto, solo que hay que hacerlo de una forma especifica.

Se pueden ignorar archivos y directorios de la siguiente manera:
- Ignorar un archivo: ignorado.txt
- Ignorar un directorio: ejemplo/
- Ignorar todos los archivos dentro de un directorio: ejemplo/*
- Ignorar todos los archivos con una extensión determinada: *.js
- Ignorar archivos, directorios, archivos y directorios dentro del directorio indicado: ejemplo
- Ignorar un archivo que solo puede ser encontrado en el root: /ignorado.txt

_Cada una de estas opciones debe ocupar una linea dentro del archivo de texto **.gitignore**_