// c_03 ex_03 öncekinin aynısı ama sayı ile olacak,

char    *ft_strncat(char *dest, char *src, unsigned int y) // sayıyı belirleyebileyim diye inti buraya koydum dışarodan alacağım
{// pointer döndüreceği zaman fonksyonun da pointer olması lazım
    unsigned int i; // ilk sayaç
    unsigned int b; // ikinci sayaç
 
    i = 0;
    while(dest[i] != '\0')
    {
        i++; // ilk stringi sonuna kadar sayıyoruz
    }
    b = 0;
    while(src[b] != '\0' && b < y) // striingi saymayı dışarıdan verilen int verisi kadar yapıyorum
    {
        dest[i] = dest[b]; //ikinci stringi ilkinin sonuna ekledim 
        i++; // sayaçları arttırıyorum
        b++; // burda i'yi sayma sebebim bu arada sonradan destin sonuna null ekleyecek olmam
    }
    dest[i] = '\0';
    return (dest); // desti döndür
}

#include <stdio.h>
int main()
{
    char dest[10] = "ABCDEFG";
    char src[10] = "abcdef";
    printf("%s", ft_strncat(dest, src, 4));
}