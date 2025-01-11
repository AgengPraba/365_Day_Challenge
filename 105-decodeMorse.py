from preloaded import MORSE_CODE # type: ignore

def decode_morse(morse_code):
    morse_code = morse_code.strip()
    
    words = morse_code.split("   ")
    
    decoded_words = []
    for word in words:
        decoded_word = ''.join(MORSE_CODE[char] for char in word.split())
        decoded_words.append(decoded_word)
  
    return ' '.join(decoded_words)
