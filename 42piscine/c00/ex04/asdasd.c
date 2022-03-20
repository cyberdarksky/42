#include <unistd.h>
#include <stdio.h> 
int main()
{
    int x = 153; // x 153 oldu
    char y[10]; 
    int i = 0; // i 0'dı
    while(i < 3) // i 3 oldu ve işlemi bitirdi alta geçti ayenn
    {
        y[i] = (x % 10) + '0'; // y[1] = 5 oldu 15 ten çektik
        x = x / 10; // 15 i 1 yaptı bunun sayesinde
        i++; // i bir arttı 0 +1 diye 
    }
    y[i] = '\0'; // burada i = 3 tü, dize sonunu belirttik

    // -----------------------------------------------------
    //
    // biz bunu tersten okutacaktık bu yüzden ikinci while ı açıyorum 
    // altta 153 yerine 351 verdi çünkü y0 y1 diye ilerledi bize y2 y1 y0 lazım sırayla
    // i 0 olana kadar okutacak

    // üstte 3'e kadar gelmişti çünkü şuan i = 3
    // ve y[3] = '\0'
    // dize sonuydu, dize sonunda bize gerekli bir değer yok
    // bu yüzden i'den bir eksik olan yani 3-1= 2 olacak
    // i den bir çıkaracağım
    while(i >= 0)
    {
        i--;    
        write(1, &y[i], 1);
    }
    return 0;
}// aslahdsglşahsdg
// adım adım tekrar edeyim