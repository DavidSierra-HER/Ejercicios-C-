# Ejercicios C++

Repositorio de ejercicios de práctica mientras avanzo en un curso de C++. Cada carpeta es un ejercicio independiente, autocontenido, con su propio código fuente.

## Estructura

```
Ejercicios-C++/
├── AplicacionBanco/
│   └── AplicacionBanco.cpp
├── HelloWorld/
│   └── Helloworld.cpp
└── ...
```

Según avance el curso, se irán añadiendo nuevas carpetas con nuevos ejercicios.

## Índice de ejercicios

| Ejercicio | Descripción | Conceptos |
|---|---|---|
| [AplicacionBanco](./AplicacionBanco) | Simulador de operaciones bancarias por consola (ver balance, depositar, retirar) | Funciones con retorno, `switch`, `do-while`, validación de entradas, `iomanip` |
| [HelloWorld](./HelloWorld) | Primer programa de prueba | Sintaxis básica, `std::cout` |

*(Esta tabla se actualiza según se añaden ejercicios nuevos)*

## Compilación

Todos los ejercicios se compilan igual, con g++:

```bash
g++ NombreDelArchivo.cpp -o NombreDelEjecutable
./NombreDelEjecutable
```

## Notas

- Los ejecutables (.exe) no se suben al repositorio, están excluidos vía .gitignore.
- Repositorio en construcción: el código refleja mi nivel de aprendizaje en cada momento, no busca ser código profesional optimizado.
