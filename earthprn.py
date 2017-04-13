#!/usr/bin/env python
import praw
import urllib
import random
import os

reddit = praw.Reddit(
        client_id='81KixdRiCjnjnA',
        client_secret='EpmoyVS2xVnzutqA8N-Mp61LXdQ',
        user_agent='Oscyllater'
)

links = []

for submission in reddit.subreddit('EarthPorn').hot(limit=20):
    links.append(submission.url)

number = random.randint(1, 20)
resource = urllib.urlopen(links[number])
output = open("/home/frosty/wallpaper.png", "wb")
output.write(resource.read())
output.close()

os.system("feh --bg-fill ~/wallpaper.png")
