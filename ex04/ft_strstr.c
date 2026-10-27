// c_03 ex04 iki string arasında birinin içinden diğeriyle aynı olan kısmı bulacak

char    *ft_strstr(char *str, char *find)
{
    int i;
    int x;

    i = 0;
    x = 0;
    if(find[x] == '\0')
        return (str);
    while(str[i] != '\0')
    {
        while(str[i + x] == find[x] && str[i + x] != '\0')
            x++;
        if(find[x] == '\0')
            return (str + i);
        i++;
        x = 0;
    }
    return (0);
}

#include <stdio.h>

int main()
{
    char str[] = "mertmuratagyol";
    char find[] = "gy";
    printf("%s", ft_strstr(str, find));

}