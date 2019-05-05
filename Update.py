import os
import time

try:
    import urllib.request as urllib
except ImportError:
    import urllib

oldlines = open('SolaireHub\csgo.hpp').read().splitlines()
oldversion = oldlines[3] 
time.sleep(0.1)

#Check if it exists, and delete if it does
if (os.path.isfile("Debug\SolaireHub.exe")):
	print("SolaireHub exists, deleting...")
	os.remove("Debug\SolaireHub.exe")
	time.sleep(0.1)
	#Check again if it was actually deleted
	if (os.path.isfile("Debug\SolaireHub.exe")):
		print("Something went wrong, I might not have the right permissions")
	else:
		print("Deleted successfully!")
else:
	print("SolaireHub does not exist, continuing...")
	
time.sleep(0.1)
#Download new file
print("Downloading offsets...")
urllib.urlretrieve ("https://raw.githubusercontent.com/frk1/hazedumper/master/csgo.hpp", "csgo.hpp.tmp")
print("Download complete!")

time.sleep(0.1)
#Edit the file and save changed version
print("Editing old file...")
lines = open('csgo.hpp.tmp').read().splitlines()
lines[2] = '#include <cstddef>'
open('SolaireHub\csgo.hpp','w').write('\n'.join(lines))
print("Editing complete!")
os.remove("csgo.hpp.tmp")

time.sleep(0.1)
newlines = open('SolaireHub\csgo.hpp').read().splitlines()
newversion = newlines[3] 
	
time.sleep(0.1)
#Build new version
print("Buliding new boi...")
os.system('donttouch.bat')
print("Bulid complete!")

time.sleep(0.1)
print("Old vs new build dates:")
print(oldversion)
print(newversion)
