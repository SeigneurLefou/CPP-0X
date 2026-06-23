NAME = stringPointer

OUTPUT_DIR = build

OUT_DIRS := $(OUTPUT_DIR)/$(SRC_DIR)

SRC = main.cpp

CXX := c++

ifdef SANIT
	DEBUG=1
endif
ifdef DEBUG
	CFLAGS += -g -Wall -Wextra -std=c++98
else
	CFLAGS := -Wall -Wextra -Werror -std=c++98
endif
ifdef SANIT
	CFLAGS += -fsanitize=address -fsanitize=leak -MMD -MP
endif

OBJ = $(SRC:%.cpp=$(OUTPUT_DIR)/%.o)

$(NAME): $(OUT_DIRS) $(OBJ)
	@$(CXX) $(OBJ) $(CFLAGS) $(LFLAGS) -o $@
	@echo "COMPILATION"

$(OUTPUT_DIR)/%.o: %.cpp
	@$(CXX) $(CFLAGS) $(LFLAGS) -c $< -o $@
	@echo -e "$< to $@"

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

