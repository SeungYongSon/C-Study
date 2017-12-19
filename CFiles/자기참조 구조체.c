#include <stdio.h>

struct list{
	int num;
	struct list *next;
};

int main()
{
	struct list a = {10, 0}, b = {20, 0}, c = {30, 0};
	struct list *head = &a, *current;
	a.next = &b;
	b.next = &c;
	
	printf("%d\n", head->num);
	printf("%d\n", head->next->num);
	
	printf("\n");
	
	current = head;
	while(current != NULL){
		printf("%d\n", current->num);
		current = current->next;
	}
}
