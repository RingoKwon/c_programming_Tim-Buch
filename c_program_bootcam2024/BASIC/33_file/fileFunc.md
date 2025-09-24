# C 표준 라이브러리 파일 I/O 함수

## fgetc - 파일에서 한 문자를 읽어옴
```c
int fgetc(FILE *stream);
```

## fputc - 파일에 한 문자를 씀
```c
int fputc(int c, FILE *stream);
```

## fprintf - 파일에 형식화된 출력을 씀
```c
int fprintf(FILE *stream, const char *format, ...);
```

## fscanf - 파일에서 형식화된 입력을 읽어옴
```c
int fscanf(FILE *stream, const char *format, ...);
```

## fputs - 파일에 문자열을 씀
```c
int fputs(const char *s, FILE *stream);
```

## fgets - 파일에서 문자열을 읽어옴
```c
char *fgets(char *s, int size, FILE *stream);
```