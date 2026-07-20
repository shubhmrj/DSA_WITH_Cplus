import requests
from bs4 import BeautifulSoup

def decode_secret_message(url):
    response = requests.get(url)
    soup = BeautifulSoup(response.text, 'html.parser')
    lines = [p.get_text(strip=True) for p in soup.find_all('p')]

    points = []
    max_x = 0
    max_y = 0

    it = iter(lines[5:])
    for line1 in it:
        try:
            x = int(line1)
            char = next(it)
            y = int(next(it))
            points.append((char, x, y))
            max_x = max(max_x, x)
            max_y = max(max_y, y)
        except (StopIteration, ValueError):
            break

    grid = [[' ' for _ in range(max_x + 1)] for _ in range(max_y + 1)]
    for char, x, y in points:
        grid[y][x] = char

    for row in grid:
        print(''.join(row))

decode_secret_message("https://docs.google.com/document/d/e/2PACX-1vSvM5gDlNvt7npYHhp_XfsJvuntUhq184By5xO_pA4b_gCWeXb6dM6ZxwN8rE6S4ghUsCj2VKR21oEP/pub")