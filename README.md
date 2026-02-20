*This project has been created as part of the 42 curriculum by martrod2.*

# Libft - @42cursus

## Sobre el proyecto
La **Libft** es el primer proyecto del currículo de 42. Consiste en programar una librería estática en C que replica funciones estándar de la `libc`, además de añadir funciones adicionales para manipulación de memoria, cadenas y listas enlazadas.

Este proyecto sirve para entender profundamente cómo funcionan las funciones básicas de C y para construir una base sólida de herramientas que utilizaremos en futuros proyectos (como *get_next_line* o *ft_printf*).

---

## 🛠️ Contenido

La librería se divide en tres secciones principales:

### 1. Funciones de la Libc (Replicación)
* `ft_strlen` `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove`
* `ft_strlcpy` `ft_strlcat` `ft_strchr` `ft_strrchr` `ft_strncmp`
* `ft_memchr` `ft_memcmp` `ft_strnstr` `ft_atoi` `ft_calloc` `ft_strdup`
* `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_toupper` `ft_tolower`

### 2. Funciones adicionales (Manipulación)
* `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_itoa`
* `ft_strmapi` `ft_striteri` `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`

### 3. Funciones de Listas (Estructuras de datos)
* `ft_lstnew` `ft_lstadd_front` `ft_lstsize` `ft_lstlast` `ft_lstadd_back`
* `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`

---

## Instalación y Uso

1. **Clona el repositorio:**
   ```bash
   git clone [https://github.com/tu_usuario/libft.git](https://github.com/tu_usuario/libft.git) && cd libft

   Esto generará el archivo libft.a.

2. **Uso en tu proyecto:**
    Incluye el header en tu código:

    #include "libft.h"

    Al compilar tu proyecto, añade la librería:

    gcc main.c -L. -lft

3. **Testing**

Este proyecto ha sido testeado con:

    Francinette (Paco): paco --strict ✅

    Libft-war-machine ✅

    libftTester (Tripouille) ✅

*This project has been created as part of the 42 curriculum by martrod2.*