while True:
    try:
        # 입력을 한 줄씩 읽습니다.
        line = input()
        print(line)
    except EOFError:
        # 더 이상 읽을 데이터가 없으면(End Of File) 반복문을 종료합니다.
        break