# RCP-Firmware

Firmware para ESP32-C3 del proyecto RCP (INTI / UNSAM), basado en ESP-IDF.

## Estructura del repositorio

```
.
├── CMakeLists.txt       # Proyecto ESP-IDF principal (firmware)
├── main/                # app_main()
├── components/          # Componentes reutilizables (drivers, etc.)
│   └── drv_gpio/
├── tests/               # Proyectos ESP-IDF de prueba, uno por componente
│   └── test_gpio/
└── sdkconfig.defaults   # Configuración base (target esp32c3)
```

- La raíz es el proyecto ESP-IDF principal.
- Cada subdirectorio de `tests/` es un proyecto ESP-IDF independiente.
- `components/` es compartido por la raíz y por `tests/`.

## Requisitos

| Herramienta | Versión | Notas |
|---|---|---|
| ESP-IDF | v6.1 | Incluye su propia toolchain RISC-V para esp32c3 |
| CMake | ≥ 3.22 | Requerido por los `CMakeLists.txt` del proyecto |
| Ninja | reciente | Lo instala el instalador de ESP-IDF |
| Python | el que exige ESP-IDF v6.1 | Lo gestiona el instalador de ESP-IDF |
| Git | reciente | |

Hardware: placa con ESP32-C3 y cable USB.

### Instalación de ESP-IDF

Instalar ESP-IDF v6.1 con el instalador oficial de Espressif, siguiendo la [guía oficial](https://docs.espressif.com/projects/esp-idf/en/v6.1/esp32c3/get-started/index.html) para tu sistema operativo. Seleccionar la versión v6.1 y el target esp32c3.

Antes de cada sesión de trabajo hay que cargar el entorno (Linux/macOS):

```sh
source ~/.espressif/tools/activate_idf_v6.1.sh
```

Verificar la instalación con `idf.py --version`.

## Compilar

Desde la raíz del repositorio, con el entorno de ESP-IDF cargado:

```sh
idf.py build   # el target (esp32c3) se toma de sdkconfig.defaults
```

## Tests

Los tests están en `tests/` como proyectos ESP-IDF independientes (hoy: `tests/test_gpio`). Cómo compilarlos y ejecutarlos: pendiente.
