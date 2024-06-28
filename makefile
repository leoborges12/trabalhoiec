# Variáveis
CC = gcc
CFLAGS = -Wall -g
TARGETS = calculadora areatriangulo testeferro
REPO_URL = https://github.com/Maduzinha04

# Target padrão
all: $(TARGETS)

# Compilar cada programa
calculadora: calculadora.c
	$(CC) $(CFLAGS) -o calculadora calculadora.c

areatriangulo: areatriangulo.c
	$(CC) $(CFLAGS) -o areatriangulo areatriangulo.c

testeferro: testeferro.c
	$(CC) $(CFLAGS) -o testeferro testeferro.c

# Target com dois comandos Linux
run: all
	@echo "Executando calculadora:"
	./calculadora
	@echo "\nExecutando areatriangulo:"
	./areatriangulo
	@echo "\nExecutando testeferro:"
	./testeferro

# Target para limpar arquivos compilados
clean:
	rm -f calculadora areatriangulo testeferro

# Target para adicionar e enviar para o GitHub
gitpush:
	git add calculadora.c areatriangulo.c testeferro.c Makefile
	git commit -m "Adiciona programas e Makefile"
	git push origin master

# Phony targets
.PHONY: all run clean gitpush
