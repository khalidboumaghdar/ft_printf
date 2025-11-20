# ft_printf

Because `ft_putnbr()` and `ft_putstr()` aren’t enough.

This project is a reimplementation of the standard C `printf()` function.  
It introduces variadic functions, formatting logic, and output handling — essential skills for mastering C at 42.

---

## 📌 Project Overview

The goal is to create a library named **libftprintf.a** that contains your own version of `printf()`, supporting a subset of its functionality.

Your implementation must behave like the real `printf` for the required conversions and follow all 42 standards (Norm, Makefile rules, error handling, etc.).

---

## 🛠️ Mandatory Features

### Function Prototype
```c
int ft_printf(const char *format, ...);
