pearl_type, pearl_weight = input().split()
pearl_weight = int(pearl_weight)

tea_info = input().split()
tea_type = tea_info[0]
sweetness_level = int(tea_info[1])
tea_volume = int(tea_info[2])

pearl_calories = {
    'H': 5,
    'O': 3,
    'J': 2
}

tea_calories = {
    'R': {1: 12, 2: 18, 3: 25},
    'T': {1: 15, 2: 20, 3: 30},
    'M': {1: 10, 2: 15, 3: 20}
}

pearl_energy = pearl_calories[pearl_type] * pearl_weight

tea_energy = tea_calories[tea_type][sweetness_level] * tea_volume

total_energy = pearl_energy + tea_energy

print(total_energy)
