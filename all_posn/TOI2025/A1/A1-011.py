def encode_theos(message):
    encoded = ""
    count = 1

    for i in range(1, len(message)):
        if message[i] == message[i - 1]:
            count += 1
        else:
            encoded += f"{count}{message[i - 1]}"
            count = 1
    encoded += f"{count}{message[-1]}"
    return encoded

message = input().strip().upper()

result = encode_theos(message)
print(result)
