# 📉 Life Expectancy and Linear Regression – TP3

This repository contains the third practical assignment (*Trabajo Práctico 3*) for the course **Numerical Methods** at the **University of Buenos Aires (UBA), Faculty of Exact and Natural Sciences**, completed during the second semester of 2021.

The project focuses on understanding which statistical characteristics of countries are associated with their **life expectancy**, using **Linear Least Squares Regression** and exploratory data analysis.

---

## 📌 Problem Summary

The objective of this project is to analyze real-world datasets to identify the relationships between life expectancy and other indicators, such as health, economy, or education. Using **linear regression** (least squares method), several model variations are explored and evaluated.

Students were expected to:
- Perform a thorough exploratory data analysis (EDA)
- Identify and visualize correlations and outliers
- Clean and preprocess data (e.g., handle missing values)
- Select and justify predictors (features)
- Iteratively refine regression models (V1, V2, etc.)
- Diagnose and evaluate model quality using statistical metrics

Additionally, the assignment encourages including external datasets from WHO and performing feature engineering based on domain understanding.

---

## 🧠 Topics Covered

- Exploratory Data Analysis (EDA)
- Linear Least Squares Regression (from scratch in C++)
- Correlation and feature selection
- Outlier detection (IQR method)
- Model evaluation and diagnostics
- Data integration from WHO statistics

---

## 📁 Dataset

The dataset used is based on publicly available statistics from the **World Health Organization (WHO)**. It was preprocessed by course staff and includes:

- `expectativa_de_vida.csv` – Main dataset of life expectancy indicators
- `expectativa_de_vida_descripcion.txt` – Description of variables

Additional datasets from WHO can be integrated to improve the regression model.

---

## 🧪 Implementation Notes

- Regression models were implemented in **C++**
- EDA and visualization were performed using **Python** (NumPy, pandas, seaborn, matplotlib)
- New features were created from existing data and WHO sources
- All model versions (V1, V2, ...) are documented with reasoning behind feature selection

---

## 📄 Assignment Statement

The full assignment statement (in Spanish) is included here:  
📎 [`enunciado.pdf`](./enunciado.pdf)

It describes goals, requirements, and evaluation criteria.

---

## 👥 Authors

- Federico Alliani  
- Manuel Nores  
- Lucas Raposeiras  
- Mariano Oca

---

## 🎓 Academic Context

- **Course**: Numerical Methods (Métodos Numéricos)  
- **Institution**: Universidad de Buenos Aires (UBA), Facultad de Ciencias Exactas y Naturales  
- **Semester**: 2nd semester, 2021  
- **Languages**: C++ (core regression), Python (EDA)

---

## 🪪 License

This project is for academic and educational purposes only.



# Reconocimiento de dígitos: TP2 de Métodos Numéricos
## 2021, 2do cuatrimestre

## Instrucciones


1. Crear un repo git en donde se bajen esto

```
git init
git remote add origin <nuestra-nueva-url-de-git>
```

2. Bajarse los repositorios de `pybind` y `eigen` como submódulos

```
git submodule init
git submodule add https://github.com/eigenteam/eigen-git-mirror
git submodule add https://github.com/pybind/pybind11
git mv eigen-git-mirror eigen
# Elegimos versiones de eigen y pybind
cd pybind11/ && git checkout v2.2.4 && cd ..
cd eigen && git checkout 3.3.7 && cd ..
```

3. Instalar requerimientos (*Previamente activar el entorno virtual. Ver  más abajo*)

```
pip install -r requirements.txt
```

4. Correr Jupyter

```
jupyter lab
```

Listo. Ya pueden disfrutar del TP3

### Otros directorios

En `src/` está el código de C++, en particular en `src/metnum.cpp` está el entry-point de pybind.

En `notebooks/` hay ejemplos para correr partes del TP usando sklearn y usando la implementación en C++.


### Con Conda
```
conda config --set auto_activate_base false
conda create --name tp3 python=3.9
conda activate tp3
```

## Instalación de las depencias
```
pip install -r requirements.txt
```

## Correr notebooks de jupyter

```
cd notebooks
jupyter lab
```
o  notebook
```
jupyter notebook
```


## Compilación
Ejecutar la primera celda del notebook `exploracio.ipynb` o seguir los siguientes pasos:


- Compilar el código C++ en un módulo de python
```
mkdir build
cd build
rm -rf *
cmake -DPYTHON_EXECUTABLE="$(which python)" -DCMAKE_BUILD_TYPE=Release ..
```
- Al ejecutar el siguiente comando se compila e instala la librería en el directorio `notebooks`
```
make install
```
