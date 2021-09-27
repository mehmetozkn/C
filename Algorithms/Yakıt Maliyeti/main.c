
#include<stdio.h>

int main() {
	
	float lt,tl,km;
	float toplamyakitmaliyeti;
	printf("km basina yakit tuketimi =");
	scanf("%f",&lt);
	printf("1 lt yakitin fiyati = ");
	scanf("%f",&tl);
	printf("aracin katettigi toplam yol =");
	scanf("%f",&km);
	toplamyakitmaliyeti = (km*lt)*tl;
	printf("toplam yakit maliyeti %.2f'dir",toplamyakitmaliyeti);
	
	


	return 0;
}
