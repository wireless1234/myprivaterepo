#!/usr/bin/python3
"""
Module contains the text_indentation function
Prototype: def text_indentation(text)
"""


def text_indentation(text):
    """
    Prints the text with 2 new lines after each '.', '?' and ':' characters.

    Parameters:
    text (str): Input text.

    Raises:
    TypeError: If text is not a string.
    """
    if not isinstance(text, str):
        raise TypeError("text must be a string")
    lines = []
    current_line = []
    for ch in text:
        current_line.append(ch)
        if ch in "?:.":
            lines.append(''.join(current_line).strip())
            current_line = []
    if current_line:
        lines.append(''.join(current_line).strip())
    print('\n\n'.join(lines), end='')
