# Nome do executável final
TARGET = output/debug.exe

# Compilador
CC = gcc

# Flags de compilação
CFLAGS = -std=c11 -Wall -Wextra -g3 -Iinclude

# Lista todos os arquivos .c da pasta src/
SRC = $(wildcard src/*.c)

# Transforma .c em .o (objetos temporários)
OBJ = $(SRC:src/%.c=output/%.o)

# Regra padrão: como gerar o executável
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@

# Como gerar os .o a partir dos .c
output/%.o: src/%.c
	@if not exist output mkdir output
	$(CC) $(CFLAGS) -c $< -o $@

# Limpar arquivos gerados
clean:
	@del /Q output\*.o output\debug.exe
