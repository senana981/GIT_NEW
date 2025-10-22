# GIT

Mã nguồn mở

## Bộ Bài Tập C Cơ Bản

Dự án tổng hợp các bài tập C trong thư mục `GIT1`, mỗi file `baiX.c` giải một yêu cầu khác nhau và được gọi thông qua chương trình chính `main.c`.

### Cấu trúc thư mục

- `main.c`: Chương trình menu gọi từng bài.
- `mylib.h`: Khai báo các hàm dùng chung.
- `bai1.c` … `bai11.c`: Mỗi file hiện thực một bài tập cụ thể.
- `makefilec`: Makefile dùng để biên dịch toàn bộ chương trình và chạy ngay.

### Cách chạy nhanh

```bash
make -f makefilec
```

Nếu máy chưa có `make`, cài đặt `make` (ví dụ với MSYS2: `pacman -S make`) rồi chạy lại, hoặc dùng gcc trực tiếp:

```bash
gcc main.c bai1.c bai2.c bai3.c bai4.c bai5.c bai6.c bai7.c bai8.c bai9.c bai10.c bai11.c -lm -o run && ./run
```

### Ghi chú

- Tệp thực thi (`run.exe`) và các file tạm đã được thêm vào `.gitignore`.
- Để dọn sạch thư mục build: `make -f makefilec clean`.
