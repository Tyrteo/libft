*This project has been created as part of the 42 curriculum by martrod2.*
*Este proyecto ha sido creado como parte del currículo de 42 por el estudiante martrod2.*

# Libft - @42cursus

## Sobre el proyecto
La **Libft** es el primer proyecto del 42. Consiste en programar una librería estática en C que replica funciones estándar de la `libc`, además de añadir funciones adicionales para manipulación de memoria, cadenas y listas enlazadas.

Este proyecto sirve para entender profundamente cómo funcionan las funciones básicas de C y para construir una base sólida de herramientas que utilizaremos en próximos proyectos

---

## Contenido

Función,Descripción
ft_isalpha,Comprueba si el carácter es alfabético.
ft_isdigit,Comprueba si el carácter es un dígito (0-9).
ft_isalnum,Comprueba si el carácter es alfanumérico.
ft_isascii,Comprueba si el carácter pertenece al código ASCII.
ft_isprint,Comprueba si el carácter es imprimible.
ft_strlen,Calcula la longitud de una cadena de caracteres.
ft_memset,Llena un bloque de memoria con un byte específico.
ft_bzero,Pone a cero un bloque de memoria.
ft_memcpy,Copia un área de memoria (no gestiona solapamientos).
ft_memmove,Copia un área de memoria de forma segura (gestiona solapamientos).
ft_strlcpy,Copia una cadena a un tamaño específico con cierre nulo garantizado.
ft_strlcat,Concatena cadenas asegurando el cierre nulo y el tamaño del búfer.
ft_toupper,Convierte un carácter a mayúscula.
ft_tolower,Convierte un carácter a minúscula.
ft_strchr,Busca la primera aparición de un carácter en una cadena.
ft_strrchr,Busca la última aparición de un carácter en una cadena.
ft_strncmp,Compara dos cadenas hasta un número determinado de caracteres.
ft_memchr,Busca un byte específico en un bloque de memoria.
ft_memcmp,Compara dos bloques de memoria.
ft_strnstr,Localiza una subcadena dentro de otra con límite de longitud.
ft_atoi,Convierte una cadena de caracteres en un número entero.
ft_calloc,Reserva memoria y la inicializa a cero.
ft_strdup,Duplica una cadena reservando nueva memoria con malloc.

Función,Descripción
ft_substr,Crea una subcadena a partir de una cadena principal.
ft_strjoin,Concatena dos cadenas en una nueva cadena con malloc.
ft_strtrim,Elimina caracteres específicos del principio y final de una cadena.
ft_split,Divide una cadena en un array de cadenas usando un delimitador.
ft_itoa,Convierte un número entero en una cadena de caracteres.
ft_strmapi,Aplica una función a cada carácter de una cadena creando una nueva.
ft_striteri,Aplica una función a cada carácter de una cadena (modificación directa).
ft_putchar_fd,Imprime un carácter en el descriptor de archivo dado.
ft_putstr_fd,Imprime una cadena en el descriptor de archivo dado.
ft_putendl_fd,Imprime una cadena seguida de un salto de línea en el FD.
ft_putnbr_fd,Imprime un número entero en el descriptor de archivo dado.

Función,Descripción
ft_lstnew,Crea un nuevo nodo de lista inicializando el contenido y el puntero siguiente.
ft_lstadd_front,Añade un nodo al principio de la lista.
ft_lstsize,Cuenta el número de elementos de una lista.
ft_lstlast,Devuelve el último nodo de la lista.
ft_lstadd_back,Añade un nodo al final de la lista.
ft_lstdelone,Libera la memoria de un nodo usando una función del para el contenido.
ft_lstclear,Elimina y libera una lista completa y todos sus elementos.
ft_lstiter,Itera la lista y aplica una función al contenido de cada nodo.
ft_lstmap,Itera una lista y crea una nueva lista resultado de aplicar una función a cada nodo.

---

## Instalación y Uso

   El proyecto se gestiona mediante un Makefile que sigue los estándares de la escuela 42, utilizando los flags -Wall -Werror -Wextra.


**Comandos:**

Comando,Acción
make,Compila los archivos fuente (.c) y genera la librería libft.a.
make bonus,Incluye las funciones de listas enlazadas en la librería.
make clean,Elimina todos los archivos objeto (.o) generados.
make fclean,Elimina los archivos objeto y el archivo de la librería libft.a.
make re,Ejecuta fclean y make de forma consecutiva para recompilar todo.

**Notas:**
    Incluye el header en tu código:

    #include "libft.h"

    Al compilar tu proyecto, añade la librería:

    gcc main.c -L. -lft

**Testing**

Este proyecto ha sido testeado con:

    Francinette (Paco): paco --strict

    Libft-war-machine

    libftTester (Tripouille)
    
**Fuentes**

42 cursus gitbook guide
Stack Exchange
Stack overflow
