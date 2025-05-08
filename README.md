# 🌌 Fractol – 42 Barcelona

[![Language: C](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Project: 42](https://img.shields.io/badge/42%20Network-fractol-1f425f.svg)](https://42.fr/)
[![Status: Completed](https://img.shields.io/badge/status-completed-brightgreen)](https://github.com/)
[![License: Custom](https://img.shields.io/badge/license-42%20School%20Policy-lightgrey)](https://42.fr/)

---

## 🌐 English Description

**Fractol** is a graphical project where I implemented three classic fractals: **Mandelbrot**, **Julia**, and **Burnship**. The goal was to explore mathematical concepts and graphics programming using **complex numbers** and the **MinilibX** library to visualize and interact with these infinite patterns.

### Fractals Implemented:
- **Mandelbrot Set:** Defined by the equation `Z(n+1) = Z(n)^2 + C`, where `Z(n)` is iterated starting from 0 and `C` is a constant complex number. The Mandelbrot set is a collection of points `C` in the complex plane for which the iteration does not tend to infinity.

- **Julia Set:** Also defined by the equation `Z(n+1) = Z(n)^2 + C`, but here `C` is a fixed complex constant, and the iteration starts from each point in the complex plane. The key difference from Mandelbrot is that the constant `C` remains fixed, while in the Mandelbrot set, `C` varies.

- **Burnship Fractal:** Defined by the equation `Z(n+1) = (Re(Z(n))^2 - Im(Z(n))^2 + C_real) + (2*|Re(Z(n))|*|Im(Z(n))| + C_imag) * i`, where `Z(n)` is a complex number, and `C` is a constant. This fractal is similar to the Mandelbrot set but has a different transformation for the complex numbers.

The program allows for interactive visualization and zooming into the fractals. Users can navigate through different parts of the fractals to explore their infinite complexity.

> ✅ **Status:** This repository is complete and will not receive further updates.
---

## 🇪🇸 Descripción en Español

**Fractol** es un proyecto gráfico desarrollado en **42 Barcelona** en el que implementé tres fractales diferentes: **Mandelbrot**, **Julia** y **Burnship**. El objetivo de este proyecto fue entender y visualizar fractales a través de la programación, además de explorar conceptos clave en la programación gráfica, como:
- **Números complejos** y su uso para generar fractales
- **Renderizado gráfico** con bibliotecas como **MinilibX**
- Conceptos **matemáticos** como la iteración y la recursión
- **Manejo de eventos** e interactividad gráfica

### Fractales Implementados:
- **Conjunto Mandelbrot:** Definido por la ecuación `Z(n+1) = Z(n)^2 + C`, donde `Z(n)` se itera desde 0 y `C` es un número complejo constante. El conjunto de Mandelbrot es un conjunto de puntos `C` en el plano complejo para los cuales la iteración no tiende a infinito.

- **Conjunto Julia:** También definido por la ecuación `Z(n+1) = Z(n)^2 + C`, pero aquí `C` es una constante compleja fija, y la iteración comienza desde cada punto en el plano complejo. La diferencia clave con el conjunto de Mandelbrot es que la constante `C` permanece fija, mientras que en el conjunto Mandelbrot, `C` varía.

- **Fractal Burnship:** Definido por la ecuación `Z(n+1) = (Re(Z(n))^2 - Im(Z(n))^2 + C_real) + (2*|Re(Z(n))|*|Im(Z(n))| + C_imag) * i`, donde `Z(n)` es un número complejo y `C` es una constante. Este fractal es similar al conjunto Mandelbrot, pero tiene una transformación diferente para los números complejos.

El programa permite la visualización interactiva de los fractales y la capacidad de hacer zoom en sus detalles, permitiendo explorar la complejidad infinita de los fractales.

> ✅ **Estado:** Este repositorio está finalizado y no recibirá más actualizaciones.

---
## 🧪 How to Use

```bash
git clone https://github.com/ineiras/fractol.git
cd fractol
make
```
```
Run the program:
./fractol Mandelbrot
./fractol Julia <a> <bi>
./fractol Ship
```
```
Use your mouse and keyboard to interact with the fractals:
Mouse Scroll: Zoom in/out
Shift + Scorll: Zoom in/out in the point where mouse is pointing
Arrow Keys: Move the fractal
Escape: Close Window
```


