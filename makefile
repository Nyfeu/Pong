# Nome do arquivo executável
TARGET = launch

# Compilador
CXX = g++

# Flags
FLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

# Lista de arquivos fonte
SOURCES = $(wildcard ./entities/*.cpp) $(wildcard *.cpp)

# Lista de arquivos de cabeçalho
HEADERS = $(wildcard ./entities/*.h) $(wildcard *.h)

# Lista de arquivos objeto gerados
OBJS = $(SOURCES:.cpp=.o)

# Regra padrão
all: $(TARGET)

# Regra para compilar arquivos .cpp em arquivos .o
%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

# Regra para gerar o executável
$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(FLAGS)

# Limpar arquivos gerados (intermediários)
clean:
	rm -f $(OBJS) $(TARGET)