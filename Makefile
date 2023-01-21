SRCS	=	./Libft/Libft.a ./srcs/push_swap.a
# Hier alle zu kompilierenden Dateien erfassen
NAME	=	push_swap
# Name des kompilierten Programms
RM		=	rm -f
# -f (force) macht fclean jederzeit ausführbar (auch ohne .o-Dateien)
CC		=	cc
# Kompiliersprache
CFLAGS	=	-Wall -Wextra -Werror
# Die verwendeten Flags
${NAME}:	makelibs
			${CC} ${CFLAGS} -o $@ ${SRCS}
# Die .o-Dateien werden nur verlinkt, falls NAME noch nicht existiert
all:		${NAME}
# Die Standard-Regel wird per Konvention eingefügt (und in re genutzt)
makelibs:	
			make -C Libft && make -C srcs
# Erstellt die .a-Dateien in den Unterordnern
clean:
			${RM} ${SRCS}
# Löscht die .a-Dateien
fclean:		clean
			${RM} ${NAME}
			make -C Libft fclean && make -C srcs fclean
# Führt die fclean-Befehle der Unterordner aus und entfernt die .exe
re:			fclean all
# Löscht und rekompiliert
.PHONY:		all clean fclean re
# Führt die Befehle aus, auch wenn eine gleichnamige Datei existiert