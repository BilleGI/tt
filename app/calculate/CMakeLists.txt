cmake_minimum_required(VERSION 3.15)

project(calculator VERSION 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)

# Укажите все исходные файлы
set(SOURCES main.c bufsize.c getop.c push_pop.c)

# Создайте исполняемый файл
add_executable(calculator ${SOURCES})

# Линковка с математической библиотекой
target_link_libraries(calculator m)