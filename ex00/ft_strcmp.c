// c03 ex00 

int     ft_strcmp(char *s1, char *s2) // fonksiyon iki adet char türünden parametre alacak dışarıdan
{
    int i;
    i = 0; // sayaç ekledim ve sayacı o'dan başlattım
    while(s1[i] == s2[i] && s1[i] && s2[i]) // eğer s1 varsa ve s2 de varsa ve bir de s1 ve s2nin o an takipte olan karakterleri aynıysa bu döngüye gir
    {
        i++; // stringi oku 
    } // bu döngüden çıkılıyorsa demek ki farklılık olan bir yere geldi veya string bitti
    return(s1[i] - s2[i]);// bu durumda o sırada olduğum karakteri birinci stringdekinden ikincisini çıkar
}   // ascıı değerleri üstünde çalışıyor

#include <stdio.h>
int main()
{
    char s1[10] = "abcdeF";
    char s2[10] = "abcdef";
    printf("%d", ft_strcmp(s1, s2));
} // büyük F ascıı değerinden küçük f ascıı değerini çıkaracak