def card_name(card):
    faces = {
        'A': 'ace',
        'J': 'jack',
        'Q': 'queen',
        'K': 'king'
    }
    suits = {
        'D': 'diamonds',
        'H': 'hearts',
        'S': 'spades',
        'C': 'clubs'
    }
    card = card.upper()
    if card[:-1] in faces:
        rank = faces[card[:-1]]
    else:
        rank = card[:-1]
    suit = suits[card[-1]]
    return f"{rank} of {suit}"

card = input().strip()
print(card_name(card))
