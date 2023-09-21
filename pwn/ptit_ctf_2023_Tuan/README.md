# Build ELF 

```sh
gcc terminator.c -o terminator
```

# Build enviroment for ELF

1. ***Important*** A file contain REAL flag at the same folder with ELF file. Flag file MUST named flag.txt

Cần một file chứa flag thật của challenge nằm ở cùng folder với file thực thi.
File flag phải đặt tên là flag.txt

2. ***Important*** Must setup and run challenge in preparation time. 

Phải cài đặt và chạy challenge trong thời gian chuẩn bị, trước khi cuộc thi diễn ra thật. 

3. File ```terminator``` is executable file of challenge compiled by author. 

File terminator là file thực thi của challenge được biên dịch bởi tác giả. Có thể sử dụng, nhưng cẩn thận việc sai thư viện. Tốt nhất nên tự build file khác. 

4. Solutions: The thought flow of challenge follow a real programmer with very popular BUG. It's not very difficult. 
```
Input "cat" command. 
Input "f*ag.txt" to get flag. 
```