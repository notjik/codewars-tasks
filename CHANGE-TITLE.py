import os
import re


def repl(s: str) -> str:
    return re.sub(r'\([^)]*\)', '', s).lower().strip().replace(' ', '-')


[os.rename(f, repl(f)) for f in os.listdir('.') if os.path.splitext(f)[-1] == '.py' and f != os.path.basename(__file__)]
