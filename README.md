# 🌌 Fractol – 42 Barcelona

[![Language: C](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Project: 42](https://img.shields.io/badge/42%20Network-fractol-1f425f.svg)](https://42.fr/)
[![Status: Completed](https://img.shields.io/badge/status-completed-brightgreen)](https://github.com/)
[![License: Custom](https://img.shields.io/badge/license-42%20School%20Policy-lightgrey)](https://42.fr/)

---

## 🌐 English Description

**Fractol** is a graphical project where I implemented three classic fractals: **Mandelbrot**, **Julia**, and **Burnship**. The goal was to explore mathematical concepts and graphics programming using **complex numbers** and the **MinilibX** library to visualize and interact with these infinite patterns.

### Fractals Implemented:
- **Mandelbrot Set:** Defined by the equation `Z(n+1) = Z(n)^2 + C`, where `Z(n)` starts at `0` and `C` varies across the complex plane. It determines whether the sequence escapes to infinity.
  
- **Julia Set:** Same equation `Z(n+1) = Z(n)^2 + C`, but `C` is fixed and `Z(n)` starts at each pixel. The key difference is that Julia uses a constant `C`, while Mandelbrot uses varying `C`.

- **Burnship Fractal:** Defined by `Z(n+1) = (Re(Z)^2 - Im(Z)^2 + C_real) + (2 * |Re(Z)| * |Im(Z)| + C_imag) * i`, applying absolute values before squaring. This creates a flame-like visual, unlike Mandelbrot’s.

> ✅ **Status:** This repository is complete and will not receive further updates.

---

## 🇪🇸 Descripción en Español

**Fractol** es un proyecto gráfico desarrollado en **42 Barcelona** en el que implementé tres fractales diferentes: **Mandelbrot**, **Julia** y **Burnship**. El objetivo fue entender y visualizar fractales mediante la programación de gráficos y el uso de **números complejos** con la librería **MinilibX**.

### Fractales Implementados:
- **Conjunto Mandelbrot:** `Z(n+1) = Z(n)^2 + C`, comenzando con `Z = 0` y variando `C`. Determina qué puntos no escapan al infinito.

- **Conjunto Julia:** Misma ecuación, pero con `C` fijo y `Z` comenzando en cada punto. La diferencia clave es que `C` no cambia.

- **Fractal Burnship:** `Z(n+1) = (Re(Z)^2 - Im(Z)^2 + C_real) + (2 * |Re(Z)| * |Im(Z)| + C_imag) * i`. Aplica valores absolutos antes de elevar, generando formas como llamas.

> ✅ **Estado:** Este repositorio está finalizado y no se actualizará, pero su funcionalidad se reutilizará en futuros proyectos.

---

## 📸 Fractal Gallery

| Mandelbrot | Julia | Burnship |
|------------|-------|----------|
| ![mandelbrot](assets/mandelbrot.png) | ![julia](assets/julia.png) | ![burnship](assets/burnship.png) |

---

## 🧪 How to Use

```bash
git clone https://github.com/ineiras/fractol.git
cd fractol
make
```
---

## 👾 Run the Program:

```
./fractol Mandelbrot
./fractol Julia <a> <bi>
./fractol Ship
```
---

## 🖱️ Controls

**Shift + Scroll:** Zoom in/out at the point where the mouse is pointing

**Mouse Scroll:** Zoom in/out centered

**Arrow Keys:** Move around the fractal

**Escape:** Close the window


