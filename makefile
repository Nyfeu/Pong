# Nome do arquivo executável
TARGET = bin/launch

# Diretório de código-fonte
SRC_DIR = src

# Diretório de objetos
BUILD_DIR = build

# Diretório de recursos
ASSETS_DIR = assets

# Compilador
CXX = g++

# Flags de compilação
CXXFLAGS = -std=c++11 -Wall

# Flags de ligação
LDFLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

# Lista de arquivos fonte
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)

# Lista de arquivos de cabeçalho
HEADERS = $(wildcard $(SRC_DIR)/*.h)

# Lista de arquivos objeto gerados
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SOURCES))

# Regra padrão
all: $(TARGET)

# Regra para compilar arquivos .cpp em arquivos .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regra para gerar o executável
$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LDFLAGS)

# Limpar arquivos gerados (intermediários e executável)
clean:
	rm -f $(OBJS) $(TARGET)