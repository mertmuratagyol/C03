// c03 ex01 strcmp ne yapıyorsa onu yapar ama kaç byteda yapacağını ben seçebiliyorum
int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;
    if(n == 0) // içerideki değer sıfırsa 0 döndür
        return(0);
    i = 0; // int 0 olsun 
    while(s1[i] && s2[i] && s1[i] == s2[i] && i < n-1) // s1 s2 varsa ve bunların aynı sırasındaki karakter aynıysa gir
        i++; // sayacı arttır
    return(s1[i] - s2[i]); // fark olduğunda dur onu döndür
}
#include <stdio.h>
int main()
{
    printf("%d\n", ft_strncmp("ABCDEF", "ABCeEF", 6));

}