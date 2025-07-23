#include <stdio.h>
const int GLOBAL_RATE = 10;
void calculate() { 
    const int LOCAL_BONUS = 50;
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    printf("GLOBAL_RATE in main = %d\n", GLOBAL_RATE);
    return 0;
}
//GLOBAL_RATE ประกาศนอกฟังก์ชัน เป็น global ใช้ได้ทุกที่ในไฟล์
//LOCAL_BONUS ประกาศใน calculate() → เป็น local → ใช้ได้เฉพาะใน calculate() เท่านั้น

//เปลี่ยนค่าคงที่ไม่ได้ เพราะใช้ const
//Compiler จะแจ้งว่า “assignment of read-only variable”

//เพราะ LOCAL_BONUS เป็น local scope มองเห็นเฉพาะภายใน calculate() เท่านั้น นอกขอบเขตฟังก์ชันจะไม่รู้จักตัวแปรนี้

//ตัวแปร const ใช้กำหนดค่า "คงที่" ที่ไม่สามารถเปลี่ยนได้
//Global const ใช้ได้ทุกฟังก์ชันภายในไฟล์นั้น
//Local const ใช้ได้เฉพาะในฟังก์ชันที่ถูกประกาศ
//ถ้าพยายามเปลี่ยนค่าหรือเรียกใช้นอกขอบเขต จะเกิด compile-time error