#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char *ch[3] = {"hello", "world00000","wonderful"};

		printf("ch[0] : %p\n",ch);
		printf("&ch[0][0] = %p. ch[0][0] = %c\n",(*(ch)+0),*(*(ch)+0));
		printf("&ch[0][1] = %p\n",(*(ch)+1));
		printf("&ch[0][2] = %p\n",(*(ch)+2));
		printf("&ch[0][3] = %p\n",(*(ch)+3));
		printf("&ch[0][4] = %p\n",(*(ch)+4));


		printf("*****************\n");
		printf("ch[1] : %p\n",ch+1);
		printf("&ch[1][0] = %p\n",(*(ch+1)+0));
		printf("&ch[1][1] = %p\n",(*(ch+1)+1));
		printf("&ch[1][2] = %p\n",(*(ch+1)+2));

		printf("*****************\n");
		printf("ch[2] : %p\n",ch+2);
		printf("ch[2][0] = %p\n",(*(ch+2)+0));
		printf("ch[2][1] = %p\n",(*(ch+2)+1));
		printf("ch[2][6] = %p\n",(*(ch+2)+6));


	return EXIT_SUCCESS;
}