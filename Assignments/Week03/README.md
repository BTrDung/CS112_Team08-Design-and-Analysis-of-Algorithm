# Week 03

## Progress
| Problem | Status |
|:---:|:---:|
| [Tảo biển](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/2/3) | ![](https://img.shields.io/badge/-Accepted-brightgreen) |
| [Trạm thu phí](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/2/1) | ![](https://img.shields.io/badge/-Accepted-brightgreen) |

## Problem 1: [Tảo biển](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/2/3)
**Time limit per test: 1 second**

**Memory limit per test: 50 megabytes**

Tảo biển sinh sản rất nhanh khi có môi trường thuận lợi với chúng và có những loài còn tiết ra môi trường những chất độc hại.

Một loại tảo nâu trong môi trường nước bị ô nhiễm nặng sinh sản theo quy luật sau:

Ngày đầu tiên (ngày **0**) có **n** cá thể ở mức **1**,
Ở mỗi ngày tiếp theo, mỗi cá thể mức *i* sinh ra **i** cá thể mức **1**, các cá thể mới sinh sẽ sinh sôi, phát triển từ ngày hôm sau.
Bản thân các cá thể mức **i** phát triển thành mức **i+1** và chu kỳ phát triển trong ngày chấm dứt.
Hãy xác định sau **k** ngày trong nước biển có bao nhiêu cá thể.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm một dòng chứa **2** số nguyên **n** và **k (1 ≤ n ≤ 1000, 1 ≤ k ≤ 10^17)**.

**Kết quả**: Đưa ra thiết bị xuất chuẩn một số nguyên – số lượng cá thể  tảo theo mô đun **10^9+7**.

| Input | Output |
|:---:|:---:|
| 3 2 | 15 |


## Problem 2: [Trạm thu phí](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/2/1)

BOT (Built-Operation-Transfer, có nghĩa: Xây dựng-Vận hành-Chuyển giao) là hình thức Chính phủ kêu gọi các công ty bỏ vốn xây dựng trước (Built) thông qua đấu thầu, sau đó khai thác vận hành một thời gian (Operation) và sau cùng là chuyển giao (Transfer) lại cho nhà nước sở tại.

Đường cao tốc xuyên quốc gia được xây dựng theo hình thức BOT. Công ty Đa quốc gia Modern Highway trúng thầu, chia toàn bộ con đường thành n đoạn. Theo tính toán của Công ty sau khi chuyển giao con đường cho chính phủ sở tại quản lý thì lãi thu được ở đoạn đường thứ $i$ là $a_i$, $a_i$ có thể dương, âm hoặc bằng $0$, tức là với từng đoạn con có thể lãi, lỗ hoặc hòa vốn. Từng nhóm các đoạn đường liên tiếp nhau (gọi tắt là khoảng) được chia cho các công ty con thực hiện. Công ty con ASEAM Highway hiện đang có trụ sở ở nước sở tại được quyền chọn trước khoảng tùy ý (có thể là cả con đường).

Dĩ nhiên Ban Giám đốc ASEAM Highway muốn chọn khoảng bắt đầu từ đoạn $p$ đến hết đoạn $q$ mang lại lợi nhuận cao nhất hoặc lỗ ít nhất nếu không có khoảng nào cho lãi.

Hãy chỉ ra khoảng cần chọn và lãi thu được. Nếu có nhiều cách chọn thì chỉ ra cách chọn có $p$ nhỏ nhất.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn:
  Dòng đầu tiên chứa số nguyên $n (1 ≤ n ≤ 10^6)$,
  Dòng thứ $2$ chứa n số nguyên $a1, a2, . . ., an (0 ≤ |ai| ≤ 109, i = 1 ÷ n)$.
  
**Kết quả**: Đưa ra thiết bị xuất chuẩn trên một dòng $2$ số nguyên $p$, $q$ và lãi thu được.

| Input | Output |
|:---:|:---:|
| 16 <br \> 2 -4 5 -8 4 -1 -1 1 1 1 -2 2 4 -6 9 -4 | ![](https://img.shields.io/badge/-15-black) |
