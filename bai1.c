// Nguyên nhân kỹ thuật:

// Mảng trong ngôn ngữ C đánh chỉ số từ 0 (0-based indexing): Mảng queue_numbers có kích thước là 4 phần tử, nên các chỉ số hợp lệ chỉ nằm trong khoảng từ 0 đến 3 (queue_numbers[0] đến queue_numbers[3]).

// Lỗi Out-of-bounds (Buffer Overflow): Biến patient_position đang mang giá trị 4 (thứ tự theo ngôn ngữ tự nhiên - 1-based indexing). Khi thực hiện queue_numbers[4] = 1099, chương trình ghi đè giá trị 1099 vào vùng nhớ ngay sau mảng queue_numbers, vượt quá phạm vi lưu trữ được cấp phát.

// code sau khi sửa

#include <stdio.h>

int main() {
    int queue_numbers[4] = {1001, 1002, 1003, 1004};
    int patient_position = 4; 
    int new_queue_number = 1099;
   
    queue_numbers[patient_position - 1] = new_queue_number;

   
    printf("--- DANH SACH SO THU TU KHAM BENH ---\n");
    printf("Benh nhan 1 (Index 0): %d\n", queue_numbers[0]);
    printf("Benh nhan 2 (Index 1): %d\n", queue_numbers[1]);
    printf("Benh nhan 3 (Index 2): %d\n", queue_numbers[2]);
    printf("Benh nhan 4 (Index 3): %d\n", queue_numbers[3]);

    return 0;
}
