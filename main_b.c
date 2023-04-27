/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:15:17 by damachad          #+#    #+#             */
/*   Updated: 2023/04/26 14:15:20 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	print_list(t_list *head)
{
	t_list	*temp;	

	temp = head;
	while (temp)
	{
		printf("%d - ", *((int*)temp->content));
		temp = temp->next;
	}
	printf("\n");
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;
	t_list	*head;
	t_list	*new;
	t_list	*new2;
	t_list	*new3;
	t_list	*last;
	t_list	*temp;
	int		*data;
	int		*data2;
	int		*data3;

	head = NULL;
	if (!(data = (int*)malloc(sizeof(int))))
		return (1);
	if (!(data2 = (int*)malloc(sizeof(int))))
		return (1);
	if (!(data3 = (int*)malloc(sizeof(int))))
		return (1);
	*data = 42;
	node = ft_lstnew(data);
	printf("lstnew: %d\n", *((int*)node->content));
	*data = 50;
	new = ft_lstnew(data);
	new2 = (t_list*)malloc(sizeof(t_list));
	*data2 = 60;
	new2->content = data2;
	ft_lstadd_front(&head, new);
	ft_lstadd_front(&head, new2);
	printf("lstadd_front: ");
	print_list(head);
	printf("size: %d\n", ft_lstsize(head));
	last = ft_lstlast(head);
	printf("last: %d\n", *((int*)last->content));
	new3 = (t_list*)malloc(sizeof(t_list));
	*data3 = 70;
	new3->content = data3;
	ft_lstadd_back(&head, new3);
	printf("lstadd_back: ");
	print_list(head);
	temp = new2->next;
	ft_lstdelone(new2, del);
	new->next = temp;
	printf("after lstdelone: ");
	print_list(head);
//	ft_lstclear(&head, del);
//	printf("after lstclear: ");
//	print_list(head);
}
