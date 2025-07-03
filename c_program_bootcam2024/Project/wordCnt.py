# import pandas as pd 
import os
# text.txt 파일 열기 및 읽기
# /Users/ringokwon/Project/cProject/c_program_bootcam2024/Project/text.txt
# 현재 작업 디렉토리 확인
print("현재 작업 디렉토리:", os.getcwd())
# 작업 디렉토리 변경
os.chdir('/Users/ringokwon/Project/cProject/c_program_bootcam2024/Project')

# 변경 후 확인
print("변경 후:", os.getcwd())

file = open('text.txt', 'r', encoding='utf-8') 
content = file.read()
text = content.strip()
print(f"'{text[:190]}'")  # 출력: 'hello world'
text_list = text[:190].split() # 나중에 전체로 변경

#  dict.keys()에 단어가 있는지 확인하고 있다면 value를 1 증가시키고, 없다면 새로 추가
my_dict = {}
for word in text_list:
    if word in my_dict.keys():
        my_dict[word] += 1  # 단어가 이미 있으면 value를 1 증가
    else:
        my_dict[word] = 1   # 단어가 없으면 새로 추가
print(my_dict)  # {'hello': 1, 'world': 1}  

sorted_by_value = sorted(my_dict.items(), key=lambda x: x[1], reverse=True)
print("빈도순 정렬 (내림차순):")
print(sorted_by_value)

# # dict append
# my_dict = {}
# my_dict['key1'] = 1
# my_dict['key2'] = 2

# print(my_dict)  # {'key1': 'value1'}

# #  dict value update
# print(my_dict['key1'])  # 출력: 1
# my_dict['key1'] +=  1  # key1의 값을 1에서 10으로 업데이트
# print(my_dict)  # {'key1': 10, 'key

# # 주어진 단어가 dict.keys()에 있는지 확인

# 팩트와 가설구 구분한다
#
