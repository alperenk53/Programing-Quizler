#include <stdio.h>

int main() {
    int sayi;
    int basamakSayisi = 0;
    int temp;
    int temp2;
    int uzeri = 1;
    int basamakDegeri;
    int sonuc = 0;
    int i;
	int j;
	
    printf("sayi giriniz:\n");
    scanf("%d", &sayi);

    temp = sayi;
    while (temp != 0) {
        temp = temp / 10;
        basamakSayisi++;
        uzeri *= 10;
    }
    uzeri /= 10;
	
	temp2 = sayi;
    for (i = 1; i <= basamakSayisi; i++) {
        basamakDegeri = 1; 
        for (j = 0; j < i; j++) {
            basamakDegeri *= (temp2/ uzeri); 
        }
        printf("%d\n", basamakDegeri);
        sonuc += basamakDegeri;
        temp2 = temp2 % uzeri;
        uzeri = uzeri / 10;
    }
    printf("toplam: %d\n",sonuc);
	if(sayi == sonuc){
		printf("evet sayiniz perfect sayidir.");
	}
	else{
		printf("hayir,sayiniz perfect sayi degildir");
	}
	
  
		
    return 0;
}

