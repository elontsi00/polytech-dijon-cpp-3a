TARGET = APP

# 2. Compilateur et standards
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -g
# LDFLAGS = -lm

# 3. Répertoires
SRC_DIR = .
OBJ_DIR = obj

# 4. Trouve tous les fichiers .cpp automatiquement
SRCS := $(wildcard $(SRC_DIR)/*.cpp)

# 5. Transforme les noms .cpp en .o (dans le dossier obj)
OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# 6. Gestion des dépendances (.h)
DEPS := $(OBJS:.o=.d)

# Règle par défaut
all: $(TARGET)

# Édition de liens (Linking)
$(TARGET): $(OBJS)
	@echo "Création de l'exécutable..."
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

# Compilation (Génération des .o) - Version compatible Windows
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	@echo "Compilation de $<..."
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# Inclusion des dépendances (pour recompiler si un .h change)
-include $(DEPS)

# Nettoyage - Version compatible Windows
clean:
	@echo "Nettoyage..."
	@if exist $(OBJ_DIR) rmdir /S /Q $(OBJ_DIR)
	@if exist $(TARGET).exe del $(TARGET).exe

# Force l'exécution de ces règles même si un fichier porte ce nom
.PHONY: all clean