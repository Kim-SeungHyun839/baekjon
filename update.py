#!/usr/bin/env python

import os
from urllib import parse

HEADER="""
[![Solved.ac
프로필](http://mazassumnida.wtf/api/v2/generate_badge?boj=kshh839)](https://solved.ac/kshh839)
![mazandi profile](http://mazandi.herokuapp.com/api?handle=kshh839&theme=warm)
#
# 백준, 프로그래머스 문제 풀이 목록

"""

def main():
    content = ""
    content += HEADER
    
    directories = [];
    solveds = [];

    for root, dirs, files in os.walk("."):
        dirs.sort()
        if root == '.':
            for dir in ('.git', '.github'):
                try:
                    dirs.remove(dir)
                except ValueError:
                    pass
            continue

        category = os.path.basename(root)
        
        if category == 'images':
            continue
        
        directory = os.path.basename(os.path.dirname(root))
        
        if directory == '.':
            continue
            
        if directory not in directories:
            if directory in ["백준","프로그래머스"]:
                content += "## 📂 {}\n".format(directory)
            else:
                content += "### 💾 {}\n".format(directory)
                content += "| 문제 | 링크 |\n"
                content += "| ----- | ----- |\n"
            directories.append(directory)

        for file in files:
            if category not in solveds:
                content += "|{}|[링크]({})|\n".format(category, parse.quote(os.path.join(root, file)))
                solveds.append(category)
                print("category : " + category)

    with open("README.md", "w") as fd:
        fd.write(content)
        
if __name__ == "__main__":
    main()
