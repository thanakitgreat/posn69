def generate_hard_testcase():
    N = 400
    K = 9000
    
    with open("hard_testcase.in", "w") as f:
        # บรรทัดที่ 1: N K
        f.write(f"{N} {K}\n")
        
        # บรรทัดที่ 2: ปริมาณอาหาร 200 ห้อง (ห้องละ 100 รวมเป็น 20,000)
        foods = ["100"] * K
        f.write(" ".join(foods) + "\n")
        
        # บรรทัดที่ 3 เป็นต้นไป: ข้อมูลเพื่อน 100 คน (คนละ 9 บรรทัด)
        for i in range(1, N + 1):
            f.write("X Y\n") # ไม่เจอ Substring
                # แผนผังไม่มีทางออก
            f.write("EEEEEEE\nWWWWWWW\nEEEEEEE\nEEEEEEE\nEEEEEEE\nEEEEEEE\nEEEEEEE\n")
            f.write("0\n") # 10 ฐาน 36 คือ A (ไม่ใช่อร่อย)

if __name__ == "__main__":
    generate_hard_testcase()
    print("สร้างไฟล์ hard_testcase.txt สำเร็จ!")

import os
print("ไฟล์ถูกเซฟไว้ที่:", os.getcwd())