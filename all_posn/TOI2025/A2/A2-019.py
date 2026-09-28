text = input().strip()

upper_text = text.upper()

def count_u_after_b(s):
    max_u = 0
    i = 0
    while i < len(s):
        if s[i] == 'B':
            count = 0
            j = i + 1
            while j < len(s) and s[j] == 'U':
                count += 1
                j += 1
            if count >= 2:
                max_u = max(max_u, count)
        i += 1
    return max_u

max_u = count_u_after_b(upper_text)

if max_u >= 2:
    print(f"Yes {max_u}")
else:
    if 'B' in upper_text:
        first_b_index = None
        for idx, ch in enumerate(text):
            if ch.upper() == 'B':
                first_b_index = idx
                break
        if first_b_index is not None:
            result = text[:first_b_index + 1] + 'U' * (len(text) - (first_b_index + 1))
            print(result)
    else:
        repeat = (len(text) + 2) // 3
        result = ("BUU" * repeat)[:len(text)]
        print(result)
