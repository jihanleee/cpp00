NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRCS = megaphone.cpp

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f *.o */*.o 

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean all re