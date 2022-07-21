#include<stdio.h>
#include <locale.h>
int main() {
	//Hesap Makinesi 1.0.0
	float islem,toplam,ilk,carpim;
	float topla = 0.0;
	int i = 1;
	int sayAdet,secim;
	setlocale(LC_ALL, "Turkish");
	printf("-1.Toplama-\n-2.Çıkarma-\n-3.Çarpma-\n-4.Bölme-\n");
	printf("İşlem Seçiniz: ");
	scanf("%d",&secim);
	switch(secim) {
		case 1:
			printf("Toplanmak İstenen Sayı Adedi: ");
			scanf("%d",&sayAdet);
			while(sayAdet>=1) {
				printf("%d.Sayıyı Giriniz: ",i);
				scanf("%f",&toplam);
				topla += toplam;
				sayAdet--;
				i++;
			}
			printf("Sonuç = %.2f",topla);	
		break;	
		case 2:
			printf("Çıkarılmak İstenen Sayı Adedi: ");
			scanf("%d",&sayAdet);
			printf("1. sayıyı giriniz: ");
			scanf("%d",&ilk);
			while(sayAdet>=2) {
				printf("%d.Sayıyı Giriniz: ",i+1);
				scanf("%f",&toplam);
				ilk -= toplam;
				sayAdet--;
				i++;
			}
			printf("Sonuç = %.2f",ilk);
		break;
		case 3:
			printf("Çarpılmak istenen sayı adedi: ");
			scanf("%d",&sayAdet);
			printf("1.Sayıyı Giriniz: ");
			scanf("%f",&ilk);
			while(sayAdet>=2) {
				printf("%d.sayıyı giriniz: ",i+1);
				scanf("%f",&toplam);
				ilk *= toplam;
				sayAdet--;
				i++;
			}
			printf("Sonuç=%.2f",ilk);		
		break;
		case 4:
			printf("Bölünmek istenen sayı adedi: ");
			scanf("%d",&sayAdet);
			printf("1.Sayıyı Giriniz: ");
			scanf("%f",&ilk);
			while(sayAdet>=2) {
				printf("%d.sayıyı giriniz: ",i+1);
				scanf("%f",&toplam);
				ilk /= toplam;
				sayAdet--;
				i++;
			}
			printf("Sonuç=%f",ilk);
		break;
		default:
			printf("\n-Hatalı Giriş Yaptınız. Lütfen Programı Yeninden Çalıştırın.-\n");		
	}
	return 0;
}
