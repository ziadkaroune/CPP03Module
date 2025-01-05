NAME	=	main
CPP		=	c++
SRCS	=	main.cpp	ClapTrap.cpp	ScavTrap.cpp	FragTrap.cpp	DiamonTrap.cpp
OBJCS	=	$(SRCS:.cpp=.o)
CPFLAGS	=	-Werror	-Wextra	-Wall	-std=c++98
RM		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJCS)
			$(CPP) $(CPFLAGS) $(OBJCS) -o $(NAME)

clean	:	
			$(RM) $(OBJCS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all


