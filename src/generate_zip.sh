
#!/usr/bin/env bash

project_name='prog3_unit2_template_function_v2023_1'
source_code=$(echo P{1..12}.{h,cpp})

# Borrar zip viejo
rm -f "${project_name}.zip"

# Usamos tar para crear un .zip (tar en Windows lo soporta)
echo "Comprimiendo archivos..."
tar -a -c -f "${project_name}.zip" ${source_code}

echo "¡Listo! Archivo creado: ${project_name}.zip"