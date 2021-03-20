# Week 03

## Problem 1: [Tảo biển](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/2/3)
**Time limit per test: 1 second**
** Memory limit per test: 50 megabytes**
Tảo biển sinh sản rất nhanh khi có môi trường thuận lợi với chúng và có những loài còn tiết ra môi trường những chất độc hại.

Một loại tảo nâu trong môi trường nước bị ô nhiễm nặng sinh sản theo quy luật sau:

Ngày đầu tiên (ngày **0**) có **n** cá thể ở mức **1**,
Ở mỗi ngày tiếp theo, mỗi cá thể mức *i* sinh ra **i** cá thể mức **1**, các cá thể mới sinh sẽ sinh sôi, phát triển từ ngày hôm sau.
Bản thân các cá thể mức **i** phát triển thành mức **i+1** và chu kỳ phát triển trong ngày chấm dứt.
Hãy xác định sau **k** ngày trong nước biển có bao nhiêu cá thể.

Dữ liệu: Vào từ thiết bị nhập chuẩn gồm một dòng chứa **2** số nguyên **n** và **k (1 ≤ n ≤ 1000, 1 ≤ k ≤ 10^17)**.

Kết quả: Đưa ra thiết bị xuất chuẩn một số nguyên – số lượng cá thể  tảo theo mô đun **10^9+7**.

| Input | Output |
|:---:|:---:|
| 3 2 | 15 |
