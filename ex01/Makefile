NAME	=	main
CPP		=	c++
SRCS	=	main.cpp	ClapTrap.cpp	ScavTrap.cpp
OBJCS	=	$(SRCS:.cpp=.o)
CPFLAGS	=	-Werror	-Wextra	-Wall	-std=c++98
RM		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJCS)
			$(CPP) $(CPFLAGS) $(OBJCS) -o $(NAME)
%.o:%.cpp
			$(CPP) $(CPFLAGS) -c $< -o $@
clean	:	
			$(RM) $(OBJCS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all


