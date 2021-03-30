# Week 05

## Progress
| Problem | Status | Working Space |
|:---:|:---:|:--:|
| [H-Index](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/3/4) | ![](https://img.shields.io/badge/-Accepted-brightgreen) | [Link](https://goo.gle)
| [Khóa số](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/3/9) | ![](https://img.shields.io/badge/-Accepted-brightgreen) | [Link](https://goo.gle)
| [Con đường gốm sứ](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/3/17) | ![](https://img.shields.io/badge/-Accepted-brightgreen) | [Link](https://goo.gle)

## Problem 1: [H-Index](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/3/4)
**Time limit per test: 1 second**

**Memory limit per test: 100MB**

Làm thế nào để đánh giá sự thành công của một nhà khoa học?  Dựa vào số bài báo được công bố hay dựa vào số lần một bài báo được trích dẫn tới ở công trình của những người khác? Cả hai tham số đó đều quan trọng.

Một bài báo có điểm số trích dẫn là **c** nếu nó được trích dẫn tới **c** lần trong các công trình của những nhà khoa học khác. Một trong số các cách đánh giá sự thành công của một nhà khoa học là tính chỉ số ảnh hưởng H_Index dựa trên sự kết hợp giữa số lượng bài báo và chỉ số trích dẫn của các bài báo đó.

Chỉ số H_Indexcủa một nhà khoa học bằng **k** lớn nhất nếu người đó có **k** bài báo, mỗi bài có điểm số trích dẫn không nhỏ hơn **k**. Ví dụ, một người có **10** bài báo, mỗi bài báo được trích dẫn không dưới **10** lần thì H_Index của người đó ít nhất là bằng **10**.

Một người có **n** bài báo, bài báo thứ ***i*** có điểm trích dẫn là *c_i*, **i = 1 ÷ n**. 

Hãy xác định H_Index của người đó.

*Dữ liệu*: Vào từ thiết bị nhập chuẩn:

Dòng đầu tiên chứa một số nguyên **n** **(1 ≤ n ≤ 5×10^5)**,
Dòng thứ 2 chứa **n** số nguyên **c1, c2, . . ., cn** **(0 ≤ c_i ≤ 10^6, i = 1 ÷ n)**.
*Kết quả*: Đưa ra thiết bị xuất chuẩn một số nguyên – H_Index tìm được.

Ví dụ:
| Input | Output |
|:---:|:---:|
| 5 <br /> 8 5 3 4 10 | 4 |
## Problem 2: [Khóa số](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/3/9)
**Time limit per test: 0.15s**

**Memory limit per test: 50MB**

Để tăng độ an toàn chống hiện tượng cướp ngân hàng ngày càng phổ biến người ta dùng khóa số với mã mở khóa đơn giản nhưng rất hiệu quả. Trên cửa ra vào hiển thị một xâu khá dài các ký tự số. Các chữ số có thể di chuyển đổi chổ cho nhau hoặc bị xóa. Muốn mở khóa người ta phải di chuyển các chữ số và trong trường hợp cần thiết – xóa vài chữ số để nhận được xâu lớn nhất thỏa mãn điều kiện đã cài đặt. Điều kiện này được thay đổi thường xuyên. Hôm nay điều kiện đó là *“Số nhận được phải chia hết cho 3”*. Số nhận được có thể bắt đầu bằng các chữ số **0**. Xâu **“000”** sẽ lớn hơn xâu **“00”**.

Hãy xác định khóa mở cửa.

*Dữ liệu*: Vào từ thiết bị nhập chuẩn gồm một xâu ký tự số có độ dài lớn hơn **2** và không vượt quá **10^5**.

*Kết quả*: Đưa ra thiết bị xuất chuẩn xâu khóa mở cửa.

*Ví dụ*:
| Input | Output |
|:---:|:---:|
| 105 | 510 |
## Problem 3: [Con đường gốm sứ](https://khmt.uit.edu.vn/wecode/cs112.2021/assignment/3/17)
**Time limit per test: 1s**

**Memory limit per test: 50MB**

Sau khi bê tông hóa đê chống lụt, thành phố quyết định cho khảm lên tường bê tông của đê tranh ghép tạo bởi các mảnh gốm sứ lấy từ các lò gốm nổi tiếng trong nước. Toàn bộ con đê được chia thành **n** phần có độ rộng giống nhau, mỗi phần gọi là một lô. Mỗi bức tranh khảm trên đó đều phải có độ rộng giống nhau, tức là bao gồm một số như nhau các lô liên tiếp và toàn bộ tường phải được phủ kín tranh từ đầu đến cuối, mỗi lô phải được tạo màu chủ đạo (gọi là màu của lô) từ một loại gốm đặc trưng lấy từ một lò gốm nào đó trong nước, ví dụ gốm màu xanh Cô ban từ lò gốm Ánh Hồng Quảng Ninh, gốm da lươn – từ Bát Tràng Hà Nội, gốm mộc hồng nhạt – từ Biên Hòa Đồng Nai, . . . Các loại gốm này được đánh số từ **1** đến **50 000**.

Hướng dẫn viên du lịch giới thiệu với khách tham quan là có **2** nhóm nghệ nhân được giao việc tạo hình và khảm tranh. Với mỗi nhóm các bức tranh của đều được đặc trưng bởi dãy số **(c_1, c_2, . . ., c_k)**, trong đó k là độ rộng của tranh, **c_i** – màu của lô, **i = 1 ÷ k**, các bức tranh khác nhau có thể khác nhau ở trình tự xuất hiện màu của các lô, ví dụ với dãy số đặc trưng **(2, 6, 2, 9)**, trình tự màu trong tranh có thể là **(9, 2, 2, 6)** hoặc **(6, 9, 2, 2)** nhưng không thể là **(6, 9, 2, 3)**. Dãy đặc trưng của 2 nhóm là khác nhau, tức là không thể bằng phép hoán vị trình tự màu của lô để đưa một dãy về dãy kia. Các bức tranh được ghép với nhau rất hài hòa và khách tham quan không nhận biết được sự chuyển tiếp từ tranh này sang tranh khác. Tuy vậy nhiều khách tham quan vẫn muốn biết có bao nhiêu bức tranh đã tạo ra và trong đó số bức tranh của mỗi nhóm là bao nhiêu.

Hãy xác định số lượng tranh có thể có và số lượng tranh mỗi nhóm đã làm. biết rằng nhóm nào cũng có tranh của mình.

*Dữ liệu*:
    - Dòng đầu tiên chứa một số nguyên **n** – số lượng lô của con đê (**2 ≤ n ≤ 10^5**),
    - Dòng thứ 2 chứa **n** số nguyên **a1, a2, . . ., an** – màu của các lô (**1 ≤ a_i ≤ 50 000**, i = 1 ÷ n).

*Kết quả*: dòng đầu tiên chứa số nguyên **m** – số lượng phương án khác nhau chia con đường thành các bức tranh, nếu không có cách phân chia để đảm bảo phân biệt tranh của đúng 2 nhóm thì đưa ra số **-1**. Nếu có cách phân biệt thì ở mỗi dòng tiếp theo đưa ra 3 số nguyên **k**, **p** và **q** – độ rộng bức tranh, số tranh do nhóm 1 thực hiện và số tranh do nhóm 2 thực hiện, thông tin đưa ra theo thứ tự tăng dần của **k** và ở mỗi dòng có **p ≥ q > 0**.

*Ví dụ*:
| Input | Output | 
|:---:|:---:|
| 9 <br /> 1 2 3 6 4 9 3 1 2 | 1 <br />3 2 1 |