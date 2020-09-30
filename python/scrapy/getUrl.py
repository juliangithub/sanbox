import requests
url="https:itme.jd.com/296709.html"
try:
	r.requests.get(url)
	r.raise_for_stat()
	r.encoding=r.apparent_encoding
	print(r.txt[:1000])
except:
	print("scrapy Faild!")