with open('text.txt', 'r', encoding='utf-8') as file:
    content = file.read()
    text = content.strip()
    
    # 파일 내용을 줄별로 읽고 싶다면:
    # lines = file.readlines()
    # for i, line in enumerate(lines, 1):
    #     print(f"{i}: {line.strip()}")
    print(f"첫 100자: {text[:100]}")
