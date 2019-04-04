import os
import time

try:
    import urllib.request as urllib
except ImportError:
    import urllib

def failed(error):
	print(" ")
	print("Something went wrong!")
	print(error)
	print(" ")
	input("Failed! Press enter to exit.")
	exit()
	
print(" ")	
print("--- Welcome to the SolaireHub Updater ---")
print("---       Nevervac and you know       ---")
print(" ")
print(" ")

time.sleep(0.1)

print("Checking for Microsoft DirectX SDK (June 2010)...")
if not (os.path.isdir("C:\\Program Files (x86)\\Microsoft DirectX SDK (June 2010)\\Lib\\x64")):
	os.system("start \"\" https://www.microsoft.com/en-au/download/details.aspx?id=6812")
	failed("Could not find Microsoft DirectX SDK (June 2010)\\Lib\\x64\nPlease install it from:\nhttps://www.microsoft.com/en-au/download/details.aspx?id=6812")

if not (os.path.isdir("C:\\Program Files (x86)\\Microsoft DirectX SDK (June 2010)\\Include")):
	os.system("start \"\" https://www.microsoft.com/en-au/download/details.aspx?id=6812")
	failed("Could not find Microsoft DirectX SDK (June 2010)\Include\nPlease install it from:\nhttps://www.microsoft.com/en-au/download/details.aspx?id=6812")

time.sleep(0.1)
print("DirectX SDK located...")
	
if not (os.path.isfile("SolaireHub\csgo.hpp")):
	failed("Could not find source code\nAre you running this script from the right place?")

oldlines = open('SolaireHub\csgo.hpp').read().splitlines()
oldversion = oldlines[3] 
time.sleep(0.1)

#Check if it exists, and delete if it does
if (os.path.isfile("Debug\SolaireHub.exe")):
	print("SolaireHub already exists, deleting...")
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

try:
	urllib.urlretrieve ("https://raw.githubusercontent.com/frk1/hazedumper/master/csgo.hpp", "csgo.hpp.tmp")
except:
    failed("Could not connect to GitHub repository\nIs your internet working?")

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
print("Compile started...")

buildfile = []
buildfile.append("@echo off")
buildfile.append('\"C:\Program Files (x86)\Microsoft Visual Studio\\2017\Community\Common7\IDE\devenv.exe\" SolaireHub.sln /Build "Debug|x86"')
open('tmpbuild.bat','w').write("")
with open('tmpbuild.bat', 'w') as f:
    for item in buildfile:
        f.write("%s\n" % item)

time.sleep(0.3)
		
os.system('tmpbuild.bat')
if not (os.path.isfile("Debug\SolaireHub.exe")):
	os.remove("tmpbuild.bat")
	failed("Build failed\nPlease send the Visual Studio errors to Solaire")
else:
	print("Bulid complete!")

time.sleep(0.1)
print("Cleaning up...")
os.remove("tmpbuild.bat")

time.sleep(0.1)
print("Old vs new build dates:")
print(oldversion)
print(newversion)

time.sleep(0.1)
print(" ")
input("Done! Press enter to exit.")
exit()

