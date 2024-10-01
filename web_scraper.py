import requests
from bs4 import BeautifulSoup

# Step 1: Send a GET request to fetch the webpage
url = 'https://example-news-website.com'
response = requests.get(url)

# Step 2: Check if the request was successful
if response.status_code == 200:
    # Step 3: Parse the HTML content
    soup = BeautifulSoup(response.content, 'html.parser')
    
    # Step 4: Find and extract the headlines (assuming they are in <h2> tags with class 'headline')
    headlines = soup.find_all('h2', class_='headline')
    
    # Step 5: Print the extracted headlines
    for index, headline in enumerate(headlines, 1):
        print(f"{index}. {headline.get_text()}")
else:
    print(f"Failed to retrieve the webpage. Status code: {response.status_code}")
