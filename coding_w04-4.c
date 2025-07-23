#include <stdio.h>

int main() {
  
    float score_f = 90.5;
    printf("Score (float) = %.1f\n", score_f);  

    int score_i = (int)score_f;  
    printf("Score (int) = %d\n", score_i);  

    return 0;
}
// 1: แสดงค่าเป็น 90 เพราะ int ไม่สามารถเก็บ .5 ได้
// 2: แสดงค่าเป็น 90.5 ได้ เพราะใช้ float
// Data Type ผิดอาจทำให้ข้อมูล สูญหาย
//ทำให้ผลลัพธ์ไม่ถูกต้อง และอาจทำให้โปรแกรมทำงานผิดพลาดในกรณีอื่น
//ค่าทศนิยมควรใช้ float ไม่ควรใช้ int