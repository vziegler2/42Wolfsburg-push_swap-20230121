SRCS	=	push_swap.c ft_count_int.c ft_ps_atoi.c ft_error.c ft_check_repeat.c ft_sort.c ft_sort_tmp.c ft_sort_small_a.c ft_sort_small_b.c ft_check_sort.c ft_sa.c ft_sb.c ft_sort_three_a.c ft_rra.c ft_rrb.c ft_ra.c ft_rb.c ft_get_mediane.c ft_sort_tmp.c ft_pa.c ft_pb.c ft_quicksort_a.c ft_quicksort_b.c ft_push.c ft_return.c ft_empty_b.c
# Hier alle zu kompilierenden .c-Dateien erfassen
OBJS	=	${SRCS:.c=.o}
# Damit nur veränderte .c-Dateien in .o-Dateien kompiliert werden
NAME	=	push_swap.a
# Name des kompilierten Programms
RM		=	rm -f
# -f (force) macht fclean jederzeit ausführbar (auch ohne .o-Dateien)
CC		=	cc
# Kompiliersprache
CFLAGS	=	-Wall -Wextra -Werror
# Die verwendeten Flags
${NAME}:	${OBJS}
			ar rcs $@ $^
# Die .o-Dateien werden nur verlinkt, falls NAME noch nicht existiert
all:		${NAME}
# Die Standard-Regel wird per Konvention eingefügt (und in re genutzt)
clean:
			${RM} ${OBJS}
# Löscht die .o-Dateien
fclean:		clean
			${RM} ${NAME}
# Löscht die .o- und exe-Dateien
re:			fclean all
# Löscht und rekompiliert
.PHONY:		all clean fclean re
# Führt die Befehle aus, auch wenn eine gleichnamige Datei existiert