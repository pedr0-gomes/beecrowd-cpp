# Makefile para compilar soluções Beecrowd
# Uso: make <ID_PROBLEMA>
# Exemplo: make 1252

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
BIN_DIR = bin
SRC_DIR = src

# Alvo padrão: fazer nada se não especificar um ID
.DEFAULT_GOAL := help

# Regra genérica: make <ID> localiza src/ID_*.cpp e compila para bin/ID.exe
%: $(SRC_DIR)/%_*.cpp | $(BIN_DIR)
	@echo "Compilando $(SRC_DIR)/$*_*.cpp..."
	$(CXX) $(CXXFLAGS) $(SRC_DIR)/$*_*.cpp -o $(BIN_DIR)/$*.exe
	@echo "✓ Compilado: $(BIN_DIR)/$*.exe"

# Criar diretório bin se não existir
$(BIN_DIR):
	@mkdir -p $(BIN_DIR)

# Alvo de ajuda
help:
	@echo "Uso: make <ID_PROBLEMA>"
	@echo "Exemplo: make 1252"
	@echo ""
	@echo "Localizará src/1252_*.cpp, compilará com g++ e colocará o binário em bin/1252.exe"

.PHONY: help clean
clean:
	@rm -rf $(BIN_DIR)/*.exe
	@echo "✓ Limpados executáveis em $(BIN_DIR)/"
