import simplejson as json
import requests
import urllib

KEYS = [ 
        'AIzaSyCgs8C71RqvWoeO69XBXVPQH006i7v4IkM', #Ananth's
        'AIzaSyCcijQW6eCvvt1ToSkjaGA4R22qBdZ0XsI' #Aakash's
]
key_index = 0

url='https://maps.googleapis.com/maps/api/place/autocomplete/json?input=career&types=establishment&location=13.6225336,79.385975&radius=500&key=AIzaSyATi8d86dHYR3U39S9_zg_dWZIFK4c86ko'
url2='https://maps.googleapis.com/maps/api/place/details/json?placeid='
placeid=requests.get(url).json().get('predictions')[0]['place_id'];
url2=url2+placeid+"&key="+KEYS[key_index]
details=requests.get(url2).json().get('result')['photos'][0]['photo_reference']
url3='https://maps.googleapis.com/maps/api/place/photo?maxwidth=1600&photoreference='+details+'&key='+KEYS[key_index]
photo=requests.get(url3)
print url3

