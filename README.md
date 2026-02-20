*Bu proje, 42 müfredatı kapsamında sumdogan tarafından hazırlanmıştır.*

# ft_printf

## 📝 Açıklama
Bu projenin amacı, C standart kütüphanesindeki popüler `printf()` fonksiyonunu yeniden yazmaktır. Bu proje, **değişken sayıda parametre** (variadic arguments) kavramını (`va_list`, `va_start`, `va_end`) ve biçimlendirilmiş çıktı yönetimini derinlemesine anlamayı sağlar. Sağlam hata yönetimi ve hassas bellek kontrolüne odaklanır.

## Fonksiyonlar

ft_printf, ft_check_box, ft_print_chr ,ft_print_hexa,ft_print_ptr,ft_print_str,ft_print_unumbers,ft_print_numbers

## 📂 Desteklenen Dönüşümler

Fonksiyon prototipi:

`int ft_printf(const char *format, ...)`

Aşağıdaki dönüşüm belirteçlerini destekler:

| Tür | Açıklama |
| :--- | :--- |
| **%c** | Tek bir karakter yazdırır. |
| **%s** | Bir string (C standartlarına uygun şekilde) yazdırır. |
| **%p** | `void *` pointer argümanını hexadecimal formatta yazdırır. |
| **%d** | Onluk (base 10) sayı yazdırır. |
| **%i** | Onluk (base 10) tam sayı yazdırır. |
| **%u** | Unsigned onluk (base 10) sayı yazdırır. |
| **%x** | Hexadecimal (base 16) küçük harf formatında sayı yazdırır. |
| **%X** | Hexadecimal (base 16) büyük harf formatında sayı yazdırır. |
| **%%** | Yüzde işareti yazdırır. |

## KULLANIM

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a
```



## 🛠️ Talimatlar
Kütüphaneyi derlemek için Makefile içindeki şu kurallar kullanılır:

| Komut        | İşlem |
| :---         | :--- |
| `make`       | `ft_printf.a` kütüphanesini derler |
| `make clean` | Object dosyalarını siler |
| `make fclean`| Object dosyalarını ve kütüphaneyi siler |
| `make re`    | Baştan tam derleme yapar |

## 📚 Kaynaklar & Yapay Zeka Kullanımı
- **Kaynaklar:** `man 3 printf`, `man stdarg`, 42 Norm dokümantasyonu , Microsoft learn kanalı.
- **Yapay Zeka Kullanımı:** Yapay zeka, teknik testcase oluşturması ve mantık doğrulayıcı olarak kullanılmıştır. Özellikle **Default Argument Promotions** konusunun anlatımı ve açıklanmasında, README.md oluşturulmasında ve `write` sisteminin çağrılarındaki hataları kavramama yardımcı olmuştur. Kod doğrudan yapay zeka tarafından üretilmemiştir; tüm implementasyon yazar tarafından yazılmıştır.
