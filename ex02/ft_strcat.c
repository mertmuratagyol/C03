// c03 ex02 
char    *ft_strcat(char *dest, char *src) // dışarıdan char değeri alan bir fonksiyon yazdık dest ve src isimli string alacak
{
    int i; // ilk string için sayaç
    int x; // ikinci string için sayaç

    i = 0; // i sayacının 0'dan başlatıyorum
    while(dest[i] != '\0') // dest stringi null değilse gir
    {
        i++; // dest stringini say yani son karakterine geldik
    }
    x = 0; // x'i de 0'dan başlattım
    while(src[x] != '\0') // src stringi null değilse gir
    {
        dest[i] = src[x]; // destde i dediğim şey zaten son karakteri son karakterden başlayarak srcyi en baştan destin sonuna ekliyorum
        i++;// i'yi arttırıyorum çünkü src artık destin bir kısmı olacak
        x++;// x'i baştan arttırıyorum
    }
    dest[i] = '\0'; // bu işlem bitince destin sonunu kapatıyorum
    return (dest); //desti döndürüyorum
}

#include <stdio.h>
int main()
{
    char dest[10] = "ABCDEF";
    char src[10] = "abcdef";
    printf("%s", ft_strcat( dest, src));
}