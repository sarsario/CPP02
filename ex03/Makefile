# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 10:55:25 by osarsari          #+#    #+#              #
#    Updated: 2023/12/20 11:13:58 by osarsari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ================================ VARIABLES ================================= #

# The name of the executable
NAME	= bsp

# Compiler and compiling flags
CC	= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

# Debug, use with`make DEBUG=1`
ifeq ($(DEBUG),1)
CFLAGS	+= -g3 -fsanitize=address
endif

# Folder names
# SRCDIR	= src/
# INCDIR	= includes/
# OBJDIR	= obj/

# Add include folders
# CFLAGS	+= -I $(INCDIR) -I $(INCDIR)lib -I $(INCDIR)mlx

# Linking stage flags

# List of source files (add your *.c files here)

SRCS =\
	main.cpp\
	Fixed.cpp\
	Point.cpp\
	bsp.cpp\

HEADERS =\

# String manipulation magic
# SRC		:= $(notdir $(SRCS))
# OBJ		:= $(SRC:.c=.o)
# OBJS	:= $(addprefix $(OBJDIR), $(OBJ))

# Colors
GR	= \033[32;1m
RE	= \033[31;1m
YE	= \033[33;1m
CY	= \033[36;1m
RC	= \033[0m

# Implicit rules
# VPATH := $(SRCDIR) $(OBJDIR) $(shell find $(SRCDIR) -type d)

# ================================== RULES =================================== #

# all : $(OBJDIR) $(NAME)
all : $(NAME)
# $(OBJDIR):
# 	@mkdir -p $(OBJDIR)

# Compiling
# $(OBJDIR)%.o : %.c $(HEADERS)
# 	@mkdir -p $(OBJDIR)
# 	@printf "$(GR)+$(RC)"
# 	@$(CC) $(CFLAGS) -c $< -o $@


# Linking
$(NAME): $(SRCS)
	@printf "\n$(GR)=== Compiled [$(CC) $(CFLAGS)] ===\n--- $(SRCS)$(RC)\n"
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@printf "$(YE)&&& Linked [$(CC)] &&&\n--- $(NAME)$(RC)\n"

# Cleaning
clean :
	@printf "$(RE)--- No objects to remove$(RC)\n"
# @printf "$(RE)--- Removing $(OBJDIR)$(RC)\n"
# @rm -rf $(OBJDIR)

fclean :
	@printf "$(RE)--- Removing $(NAME)$(RC)\n"
	@rm -f $(NAME)

# Special rule to force to remake everything
re : fclean all

# This runs the program
run : $(NAME)
	@printf "$(CY)>>> Running $(NAME)$(RC)\n"
	./$(NAME)

# This specifies the rules that does not correspond to any filename
.PHONY: all run clean fclean re