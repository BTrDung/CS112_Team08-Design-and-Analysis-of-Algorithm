# Week 07

## Progress
| Problem | Status | Working Space | Public |
|:---:|:---:|:--:|:--:|
<<<<<<< HEAD
| [Đổi mới](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/5/8) | ![](https://img.shields.io/badge/-Accepted-brightgreen) | [Link](https://colab.research.google.com/drive/1-xAlHd5WjiV6wja5_qRNNtKTuGyOI622?authuser=1#scrollTo=RB0AzZtRXGw4) | ![](https://img.shields.io/badge/-YES-brightgreen)   
| [Số nguyên mới](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/5/15) | ![](https://img.shields.io/badge/-Accepted-brightgreen) | [Link](https://colab.research.google.com/drive/1JUVQd7DVZ7bifhna_ZeYSDciyIo64v67?usp=sharing)  | ![](https://img.shields.io/badge/-YES-brightgreen)    
| [Khôi phục hệ thống cấp nước](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/5/5) | ![](https://img.shields.io/badge/-Accepted-brightgreen) | [Link]() | ![](https://img.shields.io/badge/-YES-brightgreen)    
=======
| [Đổi mới](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/5/8) | ![](https://img.shields.io/badge/-Accepted-brightgreen) | [Link]() | ![](https://img.shields.io/badge/-NO-red)   
| [Số nguyên mới](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/5/15) | ![](https://img.shields.io/badge/-Accepted-brightgreen) | [Link]()  | ![](https://img.shields.io/badge/-NO-red)    
| [Khôi phục hệ thống cấp nước](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/5/5) | ![](https://img.shields.io/badge/-Accepted-brightgreen) | [Link]() | ![](https://img.shields.io/badge/-NO-red)    
>>>>>>> 97de15f501a14d3b42c6b6670c22361571023eb8

## Problem 1: [Đổi mới](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/5/8)
**Time limit per test: 0.1 second**   

**Memory limit per test: 50MB**   
   
Thành phố quyết định chặt hạ hết **n** cây xanh hiện có trong thành phố để trồng chỉ một loại cây mới. Nhiệm vụ được giao cho Công ty Cây xanh thành phố. Do hạn chế về thiết bị Công ty chỉ tổ chức được **2** đội đốn hạ cây. Đội **I** hạ được **a** cây mỗi ngày, nhưng cứ mối ngày thứ **k** thì phải nghỉ để bảo dưỡng kỹ thuật, tức là đội **I** sẽ nghỉ vào các ngày **k**, **2k**, **3k**, . . . Đội **II** hạ được **b** cây mỗi ngày, nhưng cứ mỗi ngày thứ **m** thì phải nghỉ để bảo dưỡng kỹ thuật, tức là đội **II** sẽ nghỉ vào các ngày **m**, **2m**, **3m**, . . . Ở ngày nghỉ, số cây chặt hạ của đội sẽ là **0**. Cả hai đội bắt đầu công việc vào cùng một ngày và làm việc song song với nhau.   

Công việc trồng cây mới sẽ bắt đầu sau khi toàn bộ cây cũ đã bị đốn hạ.   

Hãy xác định sau bao nhiêu ngày thì có thể bắt đầu việc trồng mới cây.   

***Dữ liệu***: Vào từ thiết bị nhập chuẩn gồm một dòng chứa **5** số nguyên **a**, **k**, **b**, **m** và **n** **(1 ≤ a, b ≤ 10^9, 2 ≤ k, m ≤ 10^18, 1 ≤ n ≤ 10^18)**.   

***Kết quả***: Đưa ra thiết bị xuất chuẩn một số nguyên – số ngày tính được.     

***Ví dụ***:    
| Input | Output |
|:---:|:---:|
| 2 4 3 3 25 | 7 |


## Problem 2: [Số nguyên mới](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/5/15)   
**Time limit per test: 0.1 second**     

**Memory limit per test: 50 MB**    

Cho số nguyên dương **n** có không quá **100** chữ số. Hãy xác định số nguyên lớn nhất **m** chia hết cho **3** và khác **n** ở đúng một chữ số.   

***Dữ liệu***: Vào từ thiết bị nhập chuẩn gồm một dòng chứa số nguyên **n** có không quá **100** chữ số và không chứa các số **0** không có nghĩa.   

***Kết quả***: Đưa ra thiết bị xuất chuẩn số nguyên **m** tìm được.    

***Ví dụ***:    
| Input | Output |
|:---:|:---:|
| 123 | 723 |

## Problem 3: [Khôi phục hệ thống cấp nước](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/5/5)
**Time limit per test: 1 second**    

**Memory limit per second: 100MB**    

Vùng đất diệu kỳ Wonderland có **N** hộ gia đình đã được trang bị một hệ thống cung cấp nước sạch đến từng ngôi nhà. Mỗi đường ống nối trực tiếp **2** nhà, nước chảy trong đường ống theo **2** chiều, có thể truyền qua nhiều trung gian trước khi đến một nhà nào đó. Trong hồ sơ lưu trữ, các ngôi nhà được ghi số từ **1** đến **N**.     

Một trận động đất đã gây nên sự cố nghiêm trọng làm cho cả vùng bị chia cắt thành nhiều khu vực rời nhau, không còn tiếp cận được với nguồn nước. Để khắc phục, những người có trách nhiệm đã khảo sát hiện trạng và ghi nhận được toàn vùng đất đang thảm họa vẫn còn **M** đường ống đang hoạt động tốt.   

Nhiệm vụ đặt ra là phải khôi phục hệ thống cấp nước bằng cách lắp thêm một số đường ống. Tuy nhiên, do hạn chế về thời gian và kinh phí nên đòi hỏi phương án khôi phục phải được thực hiện với ít đường ống được lắp thêm nhất.    

Câu hỏi đặt ra: *cần lắp thêm ít nhất bao nhiêu đường ống để hệ thống cấp nước có thể đưa nước đến từng ngôi nhà*. 
Câu hỏi phụ: *có bao nhiêu phương án khác nhau đáp ứng yêu cầu; số phương án có thể khá lớn nên chỉ cần đưa ra số dư khi chia cho **10^9 + 7***.

***Dữ liệu***: Vào từ thiết bị nhập chuẩn:      

  - Dòng đầu tiên chứa **2** số nguyên **N**, **M** **(1 ≤ N, M  ≤ 10^5)**    

  - Mỗi dòng trong **M** dòng tiếp theo chứa **2** số nguyên **a**, **b** **(1 ≤ a, b ≤ N)**, cho biết vẫn còn đường ống nối nhà **a** với nhà **b**    

***Kết quả***: Đưa ra thiết bị xuất chuẩn số đường ống cần được lắp thêm và số phương án đáp ứng yêu cầu (theo module **10^9+7**) mỗi số trên một dòng.     

***Ví dụ***:    
| Input | Output |
|:---:|:---:|
| 3 2 <br/> 1 2 | 1 <br/> 2 |


