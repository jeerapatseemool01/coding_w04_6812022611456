#include <stdio.h>

void countCallStatic() {
    static int counter = 0; 
    counter++;
    printf("Static Counter = %d\n", counter);
}

void countCallNormal() {
    int counter = 0;  
    counter++;
    printf("Normal Counter = %d\n", counter);
}

int main() {
    printf("Static Function Call\n");
    countCallStatic(); 
    countCallStatic();  
    countCallStatic();  

    printf("\nNormal Function Call\n");
    countCallNormal();  
    countCallNormal();  
    countCallNormal();  

    return 0;
}

// 1 (static): ตัวแปร counter จะจดจำค่าเดิมไว้ระหว่างการเรียกฟังก์ชัน ทำให้ค่าถูกเพิ่มขึ้นทุกครั้ง
// 2 (non-static): ตัวแปร counter จะถูกสร้างใหม่ทุกครั้ง เริ่มจาก 0 เสมอ และเพิ่มเป็น 1
//ความแตกต่างของ Static และ Non-Static Variable
//Static อยู่ตลอดจนจบโปรแกรม
//Non-Static Variable อยู่เฉพาะตอนที่ฟังก์ชันทำงาน
//ถ้าใช้ตัวแปรธรรมดา (non-static) ค่าจะ reset ทุกครั้ง → ไม่สามารถสะสมค่าได้