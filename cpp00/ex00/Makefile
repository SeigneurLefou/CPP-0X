NAME = megaphone

OUTPUT_DIR = build

OUT_DIRS := $(OUTPUT_DIR)/

SRC = megaphone.cpp

INCLUDES = includes

CXX := c++

ifdef SANIT
	DEBUG=1
endif
ifdef DEBUG
	CXXFLAGS += -g -Wall -Wextra -std=c++98
else
	CXXFLAGS := -Wall -Wextra -Werror -std=c++98
endif
ifdef SANIT
	CXXFLAGS += -fsanitize=address -fsanitize=leak -MMD -MP
endif

OBJ = $(SRC:%.cpp=$(OUTPUT_DIR)/%.o)

$(NAME): $(OUT_DIRS) $(OBJ)
	@$(CXX) $(OBJ) $(CXXFLAGS) -I$(INCLUDES) $(LFLAGS) -o $@
	@echo "COMPILATION"

$(OUTPUT_DIR)/%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -I$(INCLUDES) $(LFLAGS) -c $< -o $@
	@echo -e "$< to $@\n"

$(OUT_DIRS):
	@mkdir -p $(OUT_DIRS)

all: $(NAME)

clean:
	@rm -rf $(OUTPUT_DIR)
	@echo "CLEAN"

fclean: clean
	@rm -f $(NAME)
	@echo "FCLEAN"

re: fclean all

.PHONY: clean all re fclean

