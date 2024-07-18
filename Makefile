# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdoignie <vdoignie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 16:39:57 by vdoignie          #+#    #+#              #
#    Updated: 2024/07/17 16:41:55 by vdoignie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

MY_C_FILES = srcs/*.c
MY_H_FILES = includes/*.h

pwgen: ${MY_C_FILES}
	${CC} ${CFLAGS} -o pwgen ${MY_C_FILES}
