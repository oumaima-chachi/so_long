/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:54:50 by ochachi           #+#    #+#             */
/*   Updated: 2025/03/27 11:56:41 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_phex(unsigned long long num, char form);
int		ft_putp(void *p);
int		ft_print_pr(void);
int		ft_printf(const char *format, ...);
int		ft_putunbr(unsigned int n);
size_t	ft_strtool(const char *str);

#endif